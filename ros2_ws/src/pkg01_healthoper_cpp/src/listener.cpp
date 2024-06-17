#include "rclcpp/rclcpp.hpp"
#include "pkg00_base_interfaces/msg/core_info.hpp"

class CoreInfoListener : public rclcpp::Node {
public:
  CoreInfoListener() : Node("core_info_listener") {
    subscription_ = this->create_subscription<pkg00_base_interfaces::msg::CoreInfo>(
      "core_info_topic", 10,
      std::bind(&CoreInfoListener::topic_callback, this, std::placeholders::_1));
  }

private:
  void topic_callback(const pkg00_base_interfaces::msg::CoreInfo::SharedPtr msg) const {
    RCLCPP_INFO(this->get_logger(), "Received CoreInfo: CPU Usage: %.2f, Memory Usage: %.2f, Disk Usage: %.2f, CPU Frequency: %.2f MHz, NIC Status: %s, Temperature: %.2f°C",
                msg->cpu_usage, msg->memory_usage, msg->disk_usage, msg->cpu_frequency, msg->nic_status.c_str(), msg->temperature);
  }

  rclcpp::Subscription<pkg00_base_interfaces::msg::CoreInfo>::SharedPtr subscription_;
};

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<CoreInfoListener>());
  rclcpp::shutdown();
  return 0;
}
