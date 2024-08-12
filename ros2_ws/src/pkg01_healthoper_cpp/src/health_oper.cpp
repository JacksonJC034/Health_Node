#include "rclcpp/rclcpp.hpp"
#include "yaml-cpp/yaml.h"
#include "base_interfaces_demo/msg/bms_info.hpp"
#include "base_interfaces_demo/msg/charger_info.hpp"
#include "base_interfaces_demo/msg/color_info.hpp"
#include "base_interfaces_demo/msg/hall_info.hpp"
#include "base_interfaces_demo/msg/lift_control.hpp"
#include "base_interfaces_demo/msg/location.hpp"
#include "base_interfaces_demo/msg/motor_status.hpp"
#include "base_interfaces_demo/msg/motion_control.hpp"
#include "base_interfaces_demo/msg/obs_laser.hpp"
#include "base_interfaces_demo/msg/pallet_info.hpp"
#include "base_interfaces_demo/msg/health_node.hpp"
#include "core_info.hpp"
#include <ament_index_cpp/get_package_share_directory.hpp>
#include <map>

struct ErrorInfo {
    uint64_t code;
    uint8_t level;
    std::string description;
};

class HealthOperator : public rclcpp::Node {
public:
    HealthOperator() : Node("health_operator"), core_info_monitor_() {
        publisher_health_node_ = this->create_publisher<base_interfaces_demo::msg::HealthNode>("/rbot/health_node_topic", 10);

        // Use ament_index_cpp to get the package share directory and construct the file path
        // std::string package_share_directory = ament_index_cpp::get_package_share_directory("pkg01_healthoper_cpp");
        // std::string file_path = package_share_directory + "/config/mapping.yaml";
        
        // std::cout << "Constructed YAML file path: " << file_path << std::endl;
        std::string file_path = "mapping.yaml";

        load_error_map(file_path);

        subscriber_bms_info_ = this->create_subscription<base_interfaces_demo::msg::BmsInfo>(
            "/rbot/pub_bms_info_topic", 10, std::bind(&HealthOperator::bms_info_callback, this, std::placeholders::_1));

        subscriber_charger_info_ = this->create_subscription<base_interfaces_demo::msg::ChargerInfo>(
            "/rbot/pub_charger_state_topic", 10, std::bind(&HealthOperator::charger_info_callback, this, std::placeholders::_1));
        
        subscriber_location_ = this->create_subscription<base_interfaces_demo::msg::Location>(
            "/rbot/location_topic", 10, std::bind(&HealthOperator::location_callback, this, std::placeholders::_1));
        
        subscriber_hall_info_ = this->create_subscription<base_interfaces_demo::msg::HallInfo>(
            "/rbot/pub_hall_info_topic", 10, std::bind(&HealthOperator::hall_info_callback, this, std::placeholders::_1));

        subscriber_color_info_ = this->create_subscription<base_interfaces_demo::msg::ColorInfo>(
            "/rbot/pub_color_oper_topic", 10, std::bind(&HealthOperator::color_info_callback, this, std::placeholders::_1));
        
        subscriber_pallet_info_ = this->create_subscription<base_interfaces_demo::msg::PalletInfo>(
            "/rbot/pallet_detect_topic", 10, std::bind(&HealthOperator::pallet_info_callback, this, std::placeholders::_1));
        
        subscriber_obs_laser_ = this->create_subscription<base_interfaces_demo::msg::ObsLaser>(
            "/rbot/pub_obslaser_info_topic", 10, std::bind(&HealthOperator::obs_laser_callback, this, std::placeholders::_1));
        
        subscriber_motor_son_ = this->create_subscription<base_interfaces_demo::msg::MotorStatus>(
            "/rbot/motorstatus_topic", 10, std::bind(&HealthOperator::motor_son_callback, this, std::placeholders::_1));

        subscriber_motor_mother_ = this->create_subscription<base_interfaces_demo::msg::MotorStatus>(
            "/rbot/motorstatus_mother_topic", 10, std::bind(&HealthOperator::motor_mother_callback, this, std::placeholders::_1));

        subscriber_motor_lift_ = this->create_subscription<base_interfaces_demo::msg::MotorStatus>(
            "/rbot/motorstatus_lift_topic", 10, std::bind(&HealthOperator::motor_lift_callback, this, std::placeholders::_1));

        subscriber_lift_control_ = this->create_subscription<base_interfaces_demo::msg::LiftControl>(
            "/rbot/lift_control_topic", 10, std::bind(&HealthOperator::lift_control_callback, this, std::placeholders::_1));

        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(500),
            std::bind(&HealthOperator::publish_health_node, this));
    }

private:
    const uint8_t CPU_USAGE_THRESHOLD = 99; // 99%
    const uint8_t DISK_USAGE_THRESHOLD = 98; // 98%
    const uint8_t MEMORY_USAGE_THRESHOLD = 99; // 99%
    const uint8_t NIC_STATUS_THRESHOLD = 5; // package loss rate 5%
    const uint8_t TEMPERATURE_THRESHOLD = 85; // 85 degrees Celsius
    const uint16_t CPU_FREQUENCY_THRESHOLD = 250; // 250 MHz (70% of the operation frequency)
    const double VMAX_THRESHOLD = 3.65; // 3.65 V
    const double VMIN_THRESHOLD = 2.4; // 3.1 V
    const uint8_t CUR_CADC_THRESHOLD = 50; // 50 A
    const uint8_t RSOC_THRESHOLD = 30; // 30%

    std::map<std::string, std::map<int, ErrorInfo>> error_map;
    base_interfaces_demo::msg::BmsInfo bms_info_;
    base_interfaces_demo::msg::ChargerInfo charger_info_;
    base_interfaces_demo::msg::Location location_;
    base_interfaces_demo::msg::HallInfo hall_info_;
    base_interfaces_demo::msg::ColorInfo color_info_;
    base_interfaces_demo::msg::PalletInfo pallet_info_;
    base_interfaces_demo::msg::ObsLaser obs_laser_;
    base_interfaces_demo::msg::MotorStatus motor_son_;
    base_interfaces_demo::msg::MotorStatus motor_mother_;
    base_interfaces_demo::msg::MotorStatus motor_lift_;
    base_interfaces_demo::msg::LiftControl lift_control_;
    CoreInfoMonitor core_info_monitor_;

    void load_error_map(const std::string& file_path) {
        try {
            YAML::Node config = YAML::LoadFile(file_path);
            for (const auto& category : config) {
                const std::string& category_name = category.first.as<std::string>();
                for (const auto& error : category.second) {
                    int error_id = error.first.as<int>();
                    ErrorInfo info = {
                        error.second["code"].as<uint64_t>(),
                        error.second["level"].as<uint8_t>(),
                        error.second["description"].as<std::string>()
                    };
                    error_map[category_name][error_id] = info;
                }
            }
        } catch (const YAML::BadFile& e) {
            std::cerr << "Failed to load YAML file: " << file_path << std::endl;
            std::cerr << "Exception: " << e.what() << std::endl;
            // Handle the error, e.g., by setting default values or re-throwing the exception
        }
    }

    void bms_info_callback(const base_interfaces_demo::msg::BmsInfo::SharedPtr msg) {
        bms_info_ = *msg;
    }

    void charger_info_callback(const base_interfaces_demo::msg::ChargerInfo::SharedPtr msg) {
        charger_info_ = *msg;
    }

    void location_callback(const base_interfaces_demo::msg::Location::SharedPtr msg) {
        location_ = *msg;
    }

    void hall_info_callback(const base_interfaces_demo::msg::HallInfo::SharedPtr msg) {
        hall_info_ = *msg;
    }

    void color_info_callback(const base_interfaces_demo::msg::ColorInfo::SharedPtr msg) {
        color_info_ = *msg;
    }

    void pallet_info_callback(const base_interfaces_demo::msg::PalletInfo::SharedPtr msg) {
        pallet_info_ = *msg;
    }

    void obs_laser_callback(const base_interfaces_demo::msg::ObsLaser::SharedPtr msg) {
        obs_laser_ = *msg;
    }

    void motor_son_callback(const base_interfaces_demo::msg::MotorStatus::SharedPtr msg) {
        motor_son_ = *msg;
    }

    void motor_mother_callback(const base_interfaces_demo::msg::MotorStatus::SharedPtr msg) {
        motor_mother_ = *msg;
    }

    void motor_lift_callback(const base_interfaces_demo::msg::MotorStatus::SharedPtr msg) {
        motor_lift_ = *msg;
    }

    void lift_control_callback(const base_interfaces_demo::msg::LiftControl::SharedPtr msg) {
        lift_control_ = *msg;
    }

    void check_errors(base_interfaces_demo::msg::HealthNode& msg) {
        // Main errors
        if (msg.cpu_usage > CPU_USAGE_THRESHOLD) {
            msg.error_array[0] |= (1 << 0);
            msg.error_level = std::max(msg.error_level, error_map["main_errors"][0].level);
        }
        if (msg.disk_usage > DISK_USAGE_THRESHOLD) {
            msg.error_array[0] |= (1 << 1);
            msg.error_level = std::max(msg.error_level, error_map["main_errors"][1].level);
        }
        if (msg.memory_usage > MEMORY_USAGE_THRESHOLD) {
            msg.error_array[0] |= (1 << 2);
            msg.error_level = std::max(msg.error_level, error_map["main_errors"][2].level);
        }
        if (msg.nic_status > NIC_STATUS_THRESHOLD) {
            msg.error_array[0] |= (1 << 3);
            msg.error_level = std::max(msg.error_level, error_map["main_errors"][3].level);
        }
        if (msg.temperature > TEMPERATURE_THRESHOLD) {
            msg.error_array[0] |= (1 << 4);
            msg.error_level = std::max(msg.error_level, error_map["main_errors"][4].level);
        }
        // if (msg.cpu_frequency < CPU_FREQUENCY_THRESHOLD) {
        //     msg.error_array[0] |= (1 << 5);
        //     msg.error_level = std::max(msg.error_level, error_map["main_errors"][5].level);
        // }

        // Battery errors
        if (bms_info_.vmax > VMAX_THRESHOLD) {
            msg.error_array[1] |= (1 << 0);
            msg.error_level = std::max(msg.error_level, error_map["bms_errors"][0].level);
        }
        if (bms_info_.vmin < VMIN_THRESHOLD) {
            msg.error_array[1] |= (1 << 1);
            msg.error_level = std::max(msg.error_level, error_map["bms_errors"][1].level);
        }
        if (bms_info_.cur_cadc > CUR_CADC_THRESHOLD) {
            msg.error_array[1] |= (1 << 2);
            msg.error_level = std::max(msg.error_level, error_map["bms_errors"][2].level);
        }
        if (bms_info_.error_code & (1 << 5)) {
            msg.error_array[1] |= (1 << 3);
            msg.error_level = std::max(msg.error_level, error_map["bms_errors"][3].level);
        }
        if (bms_info_.error_code & (1 << 6)) {
            msg.error_array[1] |= (1 << 4);
            msg.error_level = std::max(msg.error_level, error_map["bms_errors"][4].level);
        }
        if (bms_info_.rsoc < RSOC_THRESHOLD) {
            msg.error_array[1] |= (1 << 5);
            msg.error_level = std::max(msg.error_level, error_map["bms_errors"][5].level);
        }
        if (bms_info_.error_code & (1 << 4)) {
            msg.error_array[1] |= (1 << 6);
            msg.error_level = std::max(msg.error_level, error_map["bms_errors"][6].level);
        }

        // Charger errors
        if (charger_info_.error_code & (1 << 7)) {
            msg.error_array[2] |= (1 << 0);
            msg.error_level = std::max(msg.error_level, error_map["charger_errors"][0].level);
        }
        if (charger_info_.error_code & (1 << 8)) {
            msg.error_array[2] |= (1 << 1);
            msg.error_level = std::max(msg.error_level, error_map["charger_errors"][1].level);
        }
        if (charger_info_.error_code & (1 << 9)) {
            msg.error_array[2] |= (1 << 2);
            msg.error_level = std::max(msg.error_level, error_map["charger_errors"][2].level);
        }
        if (charger_info_.error_code & (1 << 0)) {
            msg.error_array[2] |= (1 << 3);
            msg.error_level = std::max(msg.error_level, error_map["charger_errors"][3].level);
        }

        // Comminucation errors
        
        // More errors


        if (location_.error_code & (1 << 9)) {
            msg.error_array[3] |= (1 << 2);
            msg.error_level = std::max(msg.error_level, error_map["comm_errors"][2].level);
        }
        // if (hall_info_.error_code & (1 << 0)) {
        //     msg.error_array[3] |= (1 << 3);
        //     msg.error_level = std::max(msg.error_level, error_map["comm_errors"][3].level);
        // }
        // if (hall_info_.error_code & (1 << 1)) {
        //     msg.error_array[3] |= (1 << 4);
        //     msg.error_level = std::max(msg.error_level, error_map["comm_errors"][4].level);
        // }

        // More errors


        // if (color_info_.error_code & (1 << 0)) {
        //     msg.error_array[3] |= (1 << 8);
        //     msg.error_level = std::max(msg.error_level, error_map["comm_errors"][8].level);
        // }
        if (pallet_info_.error_code & (1 << 0)) {
            msg.error_array[3] |= (1 << 9);
            msg.error_level = std::max(msg.error_level, error_map["comm_errors"][9].level);
        }
        if (pallet_info_.error_code & (1 << 1)) {
            msg.error_array[3] |= (1 << 10);
            msg.error_level = std::max(msg.error_level, error_map["comm_errors"][10].level);
        }
        if (obs_laser_.error_code & (1 << 1)) {
            msg.error_array[3] |= (1 << 11);
            msg.error_level = std::max(msg.error_level, error_map["comm_errors"][11].level);
        }
        if (obs_laser_.error_code & (1 << 0)) {
            msg.error_array[3] |= (1 << 12);
            msg.error_level = std::max(msg.error_level, error_map["comm_errors"][12].level);
        }
        if (bms_info_.error_code & (1 << 0)) {
            msg.error_array[3] |= (1 << 13);
            msg.error_level = std::max(msg.error_level, error_map["comm_errors"][12].level);
        }

        // Servo errors
        // motor_son errors
        if (motor_son_.error == 0x2212) {
            msg.error_array[4] |= (1 << 0);
            msg.error_level = std::max(msg.error_level, error_map["servo_errors"][0].level);
        }
        if (motor_son_.error == 0x8611) {
            msg.error_array[4] |= (1 << 1);
            msg.error_level = std::max(msg.error_level, error_map["servo_errors"][1].level);
        }
        if (motor_son_.error == 0x8130) {
            msg.error_array[4] |= (1 << 2);
            msg.error_level = std::max(msg.error_level, error_map["servo_errors"][2].level);
        }
        if (motor_son_.error == 0x8402) {
            msg.error_array[4] |= (1 << 3);
            msg.error_level = std::max(msg.error_level, error_map["servo_errors"][3].level);
        }
        if (motor_son_.error == 0x8310 || motor_son_.error == 0x8311) {
            msg.error_array[4] |= (1 << 4);
            msg.error_level = std::max(msg.error_level, error_map["servo_errors"][4].level);
        }
        if (motor_son_.error == 0x4210) {
            msg.error_array[4] |= (1 << 5);
            msg.error_level = std::max(msg.error_level, error_map["servo_errors"][5].level);
        }
        if (motor_son_.error == 0x5201) {
            msg.error_array[4] |= (1 << 6);
            msg.error_level = std::max(msg.error_level, error_map["servo_errors"][6].level);
        }

        //motor_mother errors
        if (motor_mother_.error == 0x2212) {
            msg.error_array[4] |= (1 << 7);
            msg.error_level = std::max(msg.error_level, error_map["servo_errors"][7].level);
        }
        if (motor_mother_.error == 0x8611) {
            msg.error_array[4] |= (1 << 8);
            msg.error_level = std::max(msg.error_level, error_map["servo_errors"][8].level);
        }
        if (motor_mother_.error == 0x8130) {
            msg.error_array[4] |= (1 << 9);
            msg.error_level = std::max(msg.error_level, error_map["servo_errors"][9].level);
        }
        if (motor_mother_.error == 0x8402) {
            msg.error_array[4] |= (1 << 10);
            msg.error_level = std::max(msg.error_level, error_map["servo_errors"][10].level);
        }
        if (motor_mother_.error == 0x8310 || motor_son_.error == 0x8311) {
            msg.error_array[4] |= (1 << 11);
            msg.error_level = std::max(msg.error_level, error_map["servo_errors"][11].level);
        }
        if (motor_mother_.error == 0x4210) {
            msg.error_array[4] |= (1 << 12);
            msg.error_level = std::max(msg.error_level, error_map["servo_errors"][12].level);
        }
        if (motor_mother_.error == 0x5201) {
            msg.error_array[4] |= (1 << 13);
            msg.error_level = std::max(msg.error_level, error_map["servo_errors"][13].level);
        }

        // motor_lift errors
        if (motor_lift_.error == 0x2212) {
            msg.error_array[4] |= (1 << 14);
            msg.error_level = std::max(msg.error_level, error_map["servo_errors"][14].level);
        }
        if (motor_lift_.error == 0x8611) {
            msg.error_array[4] |= (1 << 15);
            msg.error_level = std::max(msg.error_level, error_map["servo_errors"][15].level);
        }
        if (motor_lift_.error == 0x8130) {
            msg.error_array[4] |= (1 << 16);
            msg.error_level = std::max(msg.error_level, error_map["servo_errors"][16].level);
        }
        if (motor_lift_.error == 0x8402) {
            msg.error_array[4] |= (1 << 17);
            msg.error_level = std::max(msg.error_level, error_map["servo_errors"][17].level);
        }
        if (motor_lift_.error == 0x8310 || motor_son_.error == 0x8311) {
            msg.error_array[4] |= (1 << 18);
            msg.error_level = std::max(msg.error_level, error_map["servo_errors"][18].level);
        }
        if (motor_lift_.error == 0x4210) {
            msg.error_array[4] |= (1 << 19);
            msg.error_level = std::max(msg.error_level, error_map["servo_errors"][19].level);
        }
        if (lift_control_.error_code & (1 << 0)) {
            msg.error_array[4] |= (1 << 20);
            msg.error_level = std::max(msg.error_level, error_map["servo_errors"][20].level);
        }
        if (motor_lift_.error == 0x5201) {
            msg.error_array[4] |= (1 << 21);
            msg.error_level = std::max(msg.error_level, error_map["servo_errors"][21].level);
        }

        // Lift errors
        if (location_.error_code & (1 << 14)) {
            msg.error_array[5] |= (1 << 1);
            msg.error_level = std::max(msg.error_level, error_map["lift_errors"][0].level);
        }
        if (location_.error_code & (1 << 10)) {
            msg.error_array[5] |= (1 << 2);
            msg.error_level = std::max(msg.error_level, error_map["lift_errors"][1].level);
        }

        // Pallet errors

        // Obs errors

        // Location errors
        if (location_.error_code & (1 << 4)) {
            msg.error_array[8] |= (1 << 2);
            msg.error_level = std::max(msg.error_level, error_map["location_errors"][0].level);
        }

        // Order errors

        // Motion errors

        // Stop errors
        
    }

    void publish_health_node() {
        auto health_node_msg = base_interfaces_demo::msg::HealthNode();

        // Initialize error array and error level
        std::fill(std::begin(health_node_msg.error_array), std::end(health_node_msg.error_array), 0);
        health_node_msg.error_level = 0;

        // Update core info and check for errors
        core_info_monitor_.update_metrics(health_node_msg);

        // Check and update errors
        check_errors(health_node_msg);

        // Publish the message
        publisher_health_node_->publish(health_node_msg);
    }

    rclcpp::Publisher<base_interfaces_demo::msg::HealthNode>::SharedPtr publisher_health_node_;
    rclcpp::Subscription<base_interfaces_demo::msg::BmsInfo>::SharedPtr subscriber_bms_info_;
    rclcpp::Subscription<base_interfaces_demo::msg::ChargerInfo>::SharedPtr subscriber_charger_info_;
    rclcpp::Subscription<base_interfaces_demo::msg::Location>::SharedPtr subscriber_location_;
    rclcpp::Subscription<base_interfaces_demo::msg::HallInfo>::SharedPtr subscriber_hall_info_;
    rclcpp::Subscription<base_interfaces_demo::msg::ColorInfo>::SharedPtr subscriber_color_info_;
    rclcpp::Subscription<base_interfaces_demo::msg::PalletInfo>::SharedPtr subscriber_pallet_info_;
    rclcpp::Subscription<base_interfaces_demo::msg::ObsLaser>::SharedPtr subscriber_obs_laser_;
    rclcpp::Subscription<base_interfaces_demo::msg::MotorStatus>::SharedPtr subscriber_motor_son_;
    rclcpp::Subscription<base_interfaces_demo::msg::MotorStatus>::SharedPtr subscriber_motor_mother_;
    rclcpp::Subscription<base_interfaces_demo::msg::MotorStatus>::SharedPtr subscriber_motor_lift_;
    rclcpp::Subscription<base_interfaces_demo::msg::LiftControl>::SharedPtr subscriber_lift_control_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<HealthOperator>());
    rclcpp::shutdown();
    return 0;
}
