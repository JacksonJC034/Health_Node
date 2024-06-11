#include "rclcpp/rclcpp.hpp"
#include <sys/sysinfo.h>
#include <sys/statvfs.h>
#include <fstream>
#include <string>
#include "my_package/msg/HealthMetrics.hpp"  // Use the correct CamelCase header

class HealthNode : public rclcpp::Node {
public:
  HealthNode() : Node("health_node") {
    health_pub_ = this->create_publisher<my_package::msg::HealthMetrics>("health_metrics", 10);

    timer_ = this->create_wall_timer(
      std::chrono::seconds(1),
      std::bind(&HealthNode::publish_health_metrics, this));
  }

private:
  void publish_health_metrics() {
    struct sysinfo sys_info;
    if(sysinfo(&sys_info) != 0) {
      RCLCPP_ERROR(this->get_logger(), "sysinfo: error reading system statistics");
      return;
    }

    auto health_msg = my_package::msg::HealthMetrics();
    health_msg.cpu_usage = get_cpu_usage();
    health_msg.memory_usage = (sys_info.totalram - sys_info.freeram) / (double)sys_info.totalram * 100.0;
    health_msg.disk_usage = get_disk_usage();
    health_msg.cpu_frequency = get_cpu_frequency();
    health_msg.nic_status = get_nic_status();
    health_msg.temperature = get_temperature();

    health_pub_->publish(health_msg);
  }

  double get_cpu_usage() {
    std::ifstream file("/proc/stat");
    std::string line;
    if (std::getline(file, line)) {
      std::istringstream iss(line);
      std::string cpu;
      long user, nice, system, idle;
      iss >> cpu >> user >> nice >> system >> idle;
      static long prev_user = 0, prev_nice = 0, prev_system = 0, prev_idle = 0;
      long delta_user = user - prev_user;
      long delta_nice = nice - prev_nice;
      long delta_system = system - prev_system;
      long delta_idle = idle - prev_idle;
      prev_user = user;
      prev_nice = nice;
      prev_system = system;
      prev_idle = idle;
      long delta_total = delta_user + delta_nice + delta_system + delta_idle;
      return (delta_user + delta_nice + delta_system) / (double)delta_total * 100.0;
    }
    return 0.0;
  }

  double get_disk_usage() {
    struct statvfs stat;
    if (statvfs("/", &stat) != 0) {
      return 0.0;
    }
    double total = stat.f_blocks * stat.f_frsize;
    double available = stat.f_bavail * stat.f_frsize;
    return (total - available) / total * 100.0;
  }

  double get_cpu_frequency() {
    std::ifstream file("/sys/devices/system/cpu/cpu0/cpufreq/scaling_cur_freq");
    double freq;
    file >> freq;
    return freq / 1000.0; // Convert to MHz
  }

  std::string get_nic_status() {
    std::ifstream file("/sys/class/net/eth0/operstate");
    std::string status;
    file >> status;
    return status;
  }

  double get_temperature() {
    std::ifstream file("/sys/class/thermal/thermal_zone0/temp");
    double temp;
    file >> temp;
    return temp / 1000.0; // Convert to degrees Celsius
  }

  rclcpp::Publisher<my_package::msg::HealthMetrics>::SharedPtr health_pub_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<HealthNode>());
  rclcpp::shutdown();
  return 0;
}
