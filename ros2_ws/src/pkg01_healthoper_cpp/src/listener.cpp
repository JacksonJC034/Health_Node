#include "rclcpp/rclcpp.hpp"
#include "base_interfaces_demo/msg/health_node.hpp"

class HealthNodeListener : public rclcpp::Node {
public:
  HealthNodeListener() : Node("health_node_listener") {
    subscription_ = this->create_subscription<base_interfaces_demo::msg::HealthNode>(
      "health_node_topic", 10,
      std::bind(&HealthNodeListener::topic_callback, this, std::placeholders::_1));
  }

private:
  void topic_callback(const base_interfaces_demo::msg::HealthNode::SharedPtr msg) const {
    RCLCPP_INFO(this->get_logger(), "Received HealthNode Info: CPU Usage: %.2f, Disk Usage: %.2f, Memory Usage: %.2f, NIC Status: %.2f, Temperature: %.2f°C, CPU Frequency: %.2f",
                msg->cpu_usage, msg->disk_usage, msg->memory_usage, msg->nic_status, msg->temperature, msg->cpu_frequency);
  }

  rclcpp::Subscription<base_interfaces_demo::msg::HealthNode>::SharedPtr subscription_;
};

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<HealthNodeListener>());
  rclcpp::shutdown();
  return 0;
}
