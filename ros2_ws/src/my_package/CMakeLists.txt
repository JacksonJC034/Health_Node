cmake_minimum_required(VERSION 3.5)
project(my_package)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/HealthMetrics.msg"
)

ament_export_dependencies(rosidl_default_runtime)

add_executable(health_node src/health_node.cpp)
ament_target_dependencies(health_node rclcpp std_msgs sensor_msgs)

install(TARGETS
  health_node
  DESTINATION lib/${PROJECT_NAME})

ament_package()
