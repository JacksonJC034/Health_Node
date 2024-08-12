#include "base_interfaces_demo/msg/health_node.hpp"

class CoreInfoMonitor {
public:
    CoreInfoMonitor();
    void update_metrics(base_interfaces_demo::msg::HealthNode& msg);

private:
    double get_cpu_usage();
    double get_memory_usage();
    double get_disk_usage();
    double get_cpu_frequency();
    double get_ping_time();
    double get_temperature();
    std::string trim(const std::string& str);
};


