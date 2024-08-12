#include "rclcpp/rclcpp.hpp"
#include "rclcpp_lifecycle/lifecycle_node.hpp"
#include "rclcpp_lifecycle/lifecycle_publisher.hpp"
#include "std_msgs/msg/string.hpp"

class ActiveNodesPublisher : public rclcpp_lifecycle::LifecycleNode
{
public:
    ActiveNodesPublisher()
        : rclcpp_lifecycle::LifecycleNode("lifecycle_active_nodes_publisher")
    {
    }

    using CallbackReturnT =
        rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;

    CallbackReturnT on_configure(const rclcpp_lifecycle::State &)
    {
        RCLCPP_INFO(get_logger(), "Configuring");
        publisher_ = this->create_publisher<std_msgs::msg::String>("active_nodes", 10);
        timer_ = this->create_wall_timer(
            std::chrono::seconds(5),
            std::bind(&ActiveNodesPublisher::publish_active_nodes, this));
        return CallbackReturnT::SUCCESS;
    }

    CallbackReturnT on_activate(const rclcpp_lifecycle::State &)
    {
        RCLCPP_INFO(get_logger(), "Activating");
        publisher_->on_activate();
        return CallbackReturnT::SUCCESS;
    }

    CallbackReturnT on_deactivate(const rclcpp_lifecycle::State &)
    {
        RCLCPP_INFO(get_logger(), "Deactivating");
        publisher_->on_deactivate();
        return CallbackReturnT::SUCCESS;
    }

    CallbackReturnT on_cleanup(const rclcpp_lifecycle::State &)
    {
        RCLCPP_INFO(get_logger(), "Cleaning up");
        timer_.reset();
        publisher_.reset();
        return CallbackReturnT::SUCCESS;
    }

    CallbackReturnT on_shutdown(const rclcpp_lifecycle::State &)
    {
        RCLCPP_INFO(get_logger(), "Shutting down");
        timer_.reset();
        publisher_.reset();
        return CallbackReturnT::SUCCESS;
    }

private:
    void publish_active_nodes()
    {
        auto active_nodes = get_active_nodes();
        std_msgs::msg::String msg;
        msg.data = "Active Nodes: " + active_nodes;
        publisher_->publish(msg);
    }

    std::string get_active_nodes()
    {
        auto node_names_and_namespaces = this->get_node_names();
        std::string nodes_list;
        for (const auto &node : node_names_and_namespaces)
        {
            nodes_list += node + " ";
        }
        return nodes_list;
    }

    rclcpp_lifecycle::LifecyclePublisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ActiveNodesPublisher>();
    rclcpp::spin(node->get_node_base_interface());
    rclcpp::shutdown();
    return 0;
}
