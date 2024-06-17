#include "rclcpp/rclcpp.hpp"
#include "pkg00_base_interfaces/msg/core_info.hpp"
#include "pkg00_base_interfaces/msg/bms_info.hpp"
#include "pkg00_base_interfaces/msg/charger_info.hpp"
#include "pkg00_base_interfaces/msg/color_info.hpp"
#include "pkg00_base_interfaces/msg/hall_info.hpp"
#include "pkg00_base_interfaces/msg/lift_info.hpp"
#include "pkg00_base_interfaces/msg/location.hpp"
#include "pkg00_base_interfaces/msg/motor_cmd.hpp"
#include "pkg00_base_interfaces/msg/motor_status.hpp"
#include "pkg00_base_interfaces/msg/obs_laser.hpp"
#include "pkg00_base_interfaces/msg/seek_ret.hpp"
#include "pkg00_base_interfaces/msg/system_status.hpp"
#include <sys/statvfs.h>
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>

class HealthOperator : public rclcpp::Node {
public:
  HealthOperator() : Node("health_operator") {
    publisher_ = this->create_publisher<pkg00_base_interfaces::msg::CoreInfo>("core_info_topic", 10);

    subscriber_bms_ = this->create_subscription<pkg00_base_interfaces::msg::BmsInfo>(
      "bms_info_topic", 10, std::bind(&HealthOperator::bms_info_callback, this, std::placeholders::_1));

    subscriber_charger_ = this->create_subscription<pkg00_base_interfaces::msg::ChargerInfo>(
      "charger_info_topic", 10, std::bind(&HealthOperator::charger_info_callback, this, std::placeholders::_1));
    
    subscriber_color_ = this->create_subscription<pkg00_base_interfaces::msg::ColorInfo>(
      "color_info_topic", 10, std::bind(&HealthOperator::color_info_callback, this, std::placeholders::_1));
    
    subscriber_hall_ = this->create_subscription<pkg00_base_interfaces::msg::HallInfo>(
      "hall_info_topic", 10, std::bind(&HealthOperator::hall_info_callback, this, std::placeholders::_1));
    
    subscriber_lift_ = this->create_subscription<pkg00_base_interfaces::msg::LiftInfo>(
      "lift_info_topic", 10, std::bind(&HealthOperator::lift_info_callback, this, std::placeholders::_1));
    
    subscriber_location_ = this->create_subscription<pkg00_base_interfaces::msg::Location>(
      "location_topic", 10, std::bind(&HealthOperator::location_callback, this, std::placeholders::_1));
    
    subscriber_motor_cmd_ = this->create_subscription<pkg00_base_interfaces::msg::MotorCmd>(
      "motor_cmd_topic", 10, std::bind(&HealthOperator::motor_cmd_callback, this, std::placeholders::_1));
    
    subscriber_motor_status_ = this->create_subscription<pkg00_base_interfaces::msg::MotorStatus>(
      "motor_status_topic", 10, std::bind(&HealthOperator::motor_status_callback, this, std::placeholders::_1));
    
    subscriber_obs_laser_ = this->create_subscription<pkg00_base_interfaces::msg::ObsLaser>(
      "obs_laser_topic", 10, std::bind(&HealthOperator::obs_laser_callback, this, std::placeholders::_1));
    
    subscriber_seek_ret_ = this->create_subscription<pkg00_base_interfaces::msg::SeekRet>(
      "seek_ret_topic", 10, std::bind(&HealthOperator::seek_ret_callback, this, std::placeholders::_1));
    
    subscriber_system_status_ = this->create_subscription<pkg00_base_interfaces::msg::SystemStatus>(
      "system_status_topic", 10, std::bind(&HealthOperator::system_status_callback, this, std::placeholders::_1));

    timer_ = this->create_wall_timer(
      std::chrono::seconds(1),
      std::bind(&HealthOperator::publish_core_info, this));
  }

private:
  void bms_info_callback(const pkg00_base_interfaces::msg::BmsInfo::SharedPtr msg) {
    latest_bms_info_ = *msg; // Store the latest BmsInfo message
  }

  void charger_info_callback(const pkg00_base_interfaces::msg::ChargerInfo::SharedPtr msg) {
    latest_charger_info_ = *msg; // Store the latest ChargerInfo message
  }

  void color_info_callback(const pkg00_base_interfaces::msg::ColorInfo::SharedPtr msg) {
    latest_color_info_ = *msg; // Store the latest ColorInfo message
  }

  void hall_info_callback(const pkg00_base_interfaces::msg::HallInfo::SharedPtr msg) {
    latest_hall_info_ = *msg; // Store the latest HallInfo message
  }

  void lift_info_callback(const pkg00_base_interfaces::msg::LiftInfo::SharedPtr msg) {
    latest_lift_info_ = *msg; // Store the latest LiftInfo message
  }

  void location_callback(const pkg00_base_interfaces::msg::Location::SharedPtr msg) {
    latest_location_ = *msg; // Store the latest Location message
  }

  void motor_cmd_callback(const pkg00_base_interfaces::msg::MotorCmd::SharedPtr msg) {
    latest_motor_cmd_ = *msg; // Store the latest MotorCmd message
  }

  void motor_status_callback(const pkg00_base_interfaces::msg::MotorStatus::SharedPtr msg) {
    latest_motor_status_ = *msg; // Store the latest MotorStatus message
  }

  void obs_laser_callback(const pkg00_base_interfaces::msg::ObsLaser::SharedPtr msg) {
    latest_obs_laser_ = *msg; // Store the latest ObsLaser message
  }

  void seek_ret_callback(const pkg00_base_interfaces::msg::SeekRet::SharedPtr msg) {
    latest_seek_ret_ = *msg; // Store the latest SeekRet message
  }

  void system_status_callback(const pkg00_base_interfaces::msg::SystemStatus::SharedPtr msg) {
    latest_system_status_ = *msg; // Store the latest SystemStatus message
  }

  void publish_core_info() {
    auto message = pkg00_base_interfaces::msg::CoreInfo();

    // Fill in the message fields with real data
    message.cpu_usage = get_cpu_usage();
    message.memory_usage = get_memory_usage();
    message.disk_usage = get_disk_usage();
    message.cpu_frequency = get_cpu_frequency();
    message.nic_status = get_ping_time();
    message.temperature = get_temperature();

    // Add the BmsInfo data
    message.status = latest_bms_info_.status;
    message.error_code = latest_bms_info_.error_code;

    publisher_->publish(message);
  }

  double get_cpu_usage() {
    std::ifstream file("/proc/stat");
    std::string line;
    if (std::getline(file, line)) {
      std::istringstream iss(line);
      std::string cpu;
      long user, nice, system, idle, iowait, irq, softirq, steal;
      iss >> cpu >> user >> nice >> system >> idle >> iowait >> irq >> softirq >> steal;
      static long prev_user = 0, prev_nice = 0, prev_system = 0, prev_idle = 0;
      static long prev_iowait = 0, prev_irq = 0, prev_softirq = 0, prev_steal = 0;
      long delta_user = user - prev_user;
      long delta_nice = nice - prev_nice;
      long delta_system = system - prev_system;
      long delta_idle = idle - prev_idle;
      long delta_iowait = iowait - prev_iowait;
      long delta_irq = irq - prev_irq;
      long delta_softirq = softirq - prev_softirq;
      long delta_steal = steal - prev_steal;
      prev_user = user;
      prev_nice = nice;
      prev_system = system;
      prev_idle = idle;
      prev_iowait = iowait;
      prev_irq = irq;
      prev_softirq = softirq;
      prev_steal = steal;
      long delta_total = delta_user + delta_nice + delta_system + delta_idle + delta_iowait + delta_irq + delta_softirq + delta_steal;
      return (delta_total - delta_idle) / (double)delta_total * 100.0;
    }
    return 0.0;
  }

  double get_memory_usage() {
    std::ifstream file("/proc/meminfo");
    if (!file.is_open()) {
        std::cerr << "Unable to open /proc/meminfo" << std::endl;
        return -1.0;
    }

    std::string line;
    long long total_memory = 0;
    long long available_memory = 0;

    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string key;
        long long value;
        std::string unit;

        iss >> key >> value >> unit;

        if (key == "MemTotal:") {
            total_memory = value;
        } else if (key == "MemAvailable:") {
            available_memory = value;
        }

        if (total_memory && available_memory) {
            break;
        }
      }

    file.close();

    double memory_usage = (total_memory - available_memory) / (double)total_memory * 100.0;
    return memory_usage;
  }

  double get_disk_usage() {
    struct statvfs disk_info;
    if (statvfs("/", &disk_info) == 0) {
      double total_blocks = disk_info.f_blocks;
      double free_blocks = disk_info.f_bfree;
      return (total_blocks - free_blocks) / total_blocks * 100.0;
    }
    return 0.0;
  }

  double get_cpu_frequency() {
    std::ifstream file("/proc/cpuinfo");
    if (!file.is_open()) {
        std::cerr << "Unable to open /proc/cpuinfo" << std::endl;
        return -1.0;
    }

    std::string line;
    double cpu_frequency = 0.0;

    while (std::getline(file, line)) {
        if (line.find("cpu MHz") != std::string::npos) {
            std::string key, value;
            std::istringstream iss(line);
            if (std::getline(iss, key, ':') && std::getline(iss, value)) {
                value = trim(value); // Trim any whitespace around the value
                try {
                    cpu_frequency = std::stod(value); // Convert the string to a double
                } catch (const std::invalid_argument& e) {
                    std::cerr << "Invalid argument: " << e.what() << std::endl;
                } catch (const std::out_of_range& e) {
                    std::cerr << "Out of range: " << e.what() << std::endl;
                }
                break;
            }
        }
    }

    file.close();

    if (cpu_frequency == 0.0) {
        std::cerr << "CPU frequency not found in /proc/cpuinfo" << std::endl;
        return -1.0;
    }

    return cpu_frequency;
  }

  std::string trim(const std::string& str) {
    size_t first = str.find_first_not_of(' ');
    if (first == std::string::npos)
        return "";
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, last - first + 1);
  }

  std::string get_ping_time() {
    std::string ip_address = "220.181.38.148";
    std::array<char, 128> buffer;
    std::string result;
    std::string command = "ping -c 1 " + ip_address + " 2>&1"; // Redirect stderr to stdout
    
    // Open pipe to file
    std::shared_ptr<FILE> pipe(popen(command.c_str(), "r"), pclose);
    if (!pipe) {
        throw std::runtime_error("popen() failed!");
    }
    
    // Read till end of process:
    while (!feof(pipe.get())) {
        if (fgets(buffer.data(), 128, pipe.get()) != nullptr) {
            result += buffer.data();
        }
    }
    
    // Check for error messages in the result
    if (result.find("Network is unreachable") != std::string::npos) {
        return "Network is unreachable";
    }
    if (result.find("ping: unknown host") != std::string::npos) {
        return "Unknown host";
    }

    // Find the ping time in the result
    std::string::size_type pos = result.find("time=");
    if (pos == std::string::npos) {
        return "Ping time not found in ping output.";
    }
    
    std::istringstream iss(result.substr(pos + 5));
    double ping_time;
    iss >> ping_time;
    char ping_time_o[10];
    sprintf(ping_time_o, "%.2f", ping_time);
    
    return std::string(ping_time_o) + " ms";
  }

  double get_temperature() {
    std::ifstream file("/sys/class/thermal/thermal_zone0/temp");
    double temp;
    file >> temp;
    return temp / 1000.0; // Convert to degrees Celsius
  }

  rclcpp::Publisher<pkg00_base_interfaces::msg::CoreInfo>::SharedPtr publisher_;
  rclcpp::Subscription<pkg00_base_interfaces::msg::BmsInfo>::SharedPtr subscriber_bms_;
  rclcpp::Subscription<pkg00_base_interfaces::msg::ChargerInfo>::SharedPtr subscriber_charger_;
  rclcpp::Subscription<pkg00_base_interfaces::msg::ColorInfo>::SharedPtr subscriber_color_;
  rclcpp::Subscription<pkg00_base_interfaces::msg::HallInfo>::SharedPtr subscriber_hall_;
  rclcpp::Subscription<pkg00_base_interfaces::msg::LiftInfo>::SharedPtr subscriber_lift_;
  rclcpp::Subscription<pkg00_base_interfaces::msg::Location>::SharedPtr subscriber_location_;
  rclcpp::Subscription<pkg00_base_interfaces::msg::MotorCmd>::SharedPtr subscriber_motor_cmd_;
  rclcpp::Subscription<pkg00_base_interfaces::msg::MotorStatus>::SharedPtr subscriber_motor_status_;
  rclcpp::Subscription<pkg00_base_interfaces::msg::ObsLaser>::SharedPtr subscriber_obs_laser_;
  rclcpp::Subscription<pkg00_base_interfaces::msg::SeekRet>::SharedPtr subscriber_seek_ret_;
  rclcpp::Subscription<pkg00_base_interfaces::msg::SystemStatus>::SharedPtr subscriber_system_status_;
  rclcpp::TimerBase::SharedPtr timer_;

  // Store the latest messages for each type
  pkg00_base_interfaces::msg::BmsInfo latest_bms_info_;
  pkg00_base_interfaces::msg::ChargerInfo latest_charger_info_;
  pkg00_base_interfaces::msg::ColorInfo latest_color_info_;
  pkg00_base_interfaces::msg::HallInfo latest_hall_info_;
  pkg00_base_interfaces::msg::LiftInfo latest_lift_info_;
  pkg00_base_interfaces::msg::Location latest_location_;
  pkg00_base_interfaces::msg::MotorCmd latest_motor_cmd_;
  pkg00_base_interfaces::msg::MotorStatus latest_motor_status_;
  pkg00_base_interfaces::msg::ObsLaser latest_obs_laser_;
  pkg00_base_interfaces::msg::SeekRet latest_seek_ret_;
  pkg00_base_interfaces::msg::SystemStatus latest_system_status_;
};

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<HealthOperator>());
  rclcpp::shutdown();
  return 0;
}
