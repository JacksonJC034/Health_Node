#include "core_info.hpp"
#include <sys/statvfs.h>
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <array>
#include <memory>

CoreInfoMonitor::CoreInfoMonitor() {
    
}

void CoreInfoMonitor::update_metrics(base_interfaces_demo::msg::HealthNode& msg) {
    msg.cpu_usage = get_cpu_usage();
    msg.disk_usage = get_disk_usage();
    msg.memory_usage = get_memory_usage();
    msg.nic_status = get_ping_time();
    msg.temperature = get_temperature();
    msg.cpu_frequency = get_cpu_frequency();
}

double CoreInfoMonitor::get_cpu_usage() {
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

double CoreInfoMonitor::get_memory_usage() {
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

double CoreInfoMonitor::get_disk_usage() {
    struct statvfs disk_info;
    if (statvfs("/", &disk_info) == 0) {
        double total_blocks = disk_info.f_blocks;
        double free_blocks = disk_info.f_bfree;
        return (total_blocks - free_blocks) / total_blocks * 100.0;
    }
    return 0.0;
}

double CoreInfoMonitor::get_cpu_frequency() {
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

std::string CoreInfoMonitor::trim(const std::string& str) {
    size_t first = str.find_first_not_of(' ');
    if (first == std::string::npos)
        return "";
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, last - first + 1);
}

double CoreInfoMonitor::get_ping_time() {
    
    std::array<char, 128> buffer;
    std::string result;
    std::string command = "ip route | grep default";
    
    // Open pipe to execute the command
    std::shared_ptr<FILE> pipe(popen(command.c_str(), "r"), pclose);
    if (!pipe) {
        throw std::runtime_error("popen() failed to retrieve gateway IP!");
    }
    
    // Read the command output
    while (!feof(pipe.get())) {
        if (fgets(buffer.data(), 128, pipe.get()) != nullptr) {
            result += buffer.data();
        }
    }

    // Parse the output to extract the IP address
    std::string::size_type start = result.find("via ") + 4;
    std::string::size_type end = result.find(" ", start);
    std::string ip_address = result.substr(start, end - start);

    // Clear buffer and result for the ping command
    buffer.fill(0);
    result.clear();

    // Command to ping the gateway IP address
    command = "ping -c 1 " + ip_address + " 2>&1"; // Redirect stderr to stdout
    
    // Open pipe to execute the ping command
    pipe = std::shared_ptr<FILE>(popen(command.c_str(), "r"), pclose);
    if (!pipe) {
        throw std::runtime_error("popen() failed to ping the gateway IP!");
    }
    
    // Read the output of the ping command
    while (!feof(pipe.get())) {
        if (fgets(buffer.data(), 128, pipe.get()) != nullptr) {
            result += buffer.data();
        }
    }
    
    // Check for error messages in the result
    if (result.find("Network is unreachable") != std::string::npos || 
        result.find("ping: unknown host") != std::string::npos) {
        return 100.0; // 100% packet loss
    }

    // Find the packet loss in the result
    std::string::size_type pos = result.find("received, ");
    if (pos == std::string::npos) {
        return 100.0; // 100% packet loss if not found
    }
    
    std::istringstream iss(result.substr(pos + 10));
    int packets_received;
    iss >> packets_received;

    // Calculate packet loss rate
    double packet_loss = 100.0 * (1 - packets_received / 1.0); // since we pinged once
    return packet_loss;
}

double CoreInfoMonitor::get_temperature() {
    std::ifstream file("/sys/class/thermal/thermal_zone0/temp");
    double temp = 0.0;
    if (!file.is_open()) {
        std::cerr << "Unable to open /sys/class/thermal/thermal_zone0/temp" << std::endl;
        return -1.0;
    } else {
        file >> temp;
        return temp / 1000.0; // Convert to degrees Celsius
        file.close();
    }
}
