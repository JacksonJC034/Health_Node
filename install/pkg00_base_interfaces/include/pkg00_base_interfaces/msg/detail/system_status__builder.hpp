// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pkg00_base_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_

#include "pkg00_base_interfaces/msg/detail/system_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace pkg00_base_interfaces
{

namespace msg
{

namespace builder
{

class Init_SystemStatus_work_status
{
public:
  explicit Init_SystemStatus_work_status(::pkg00_base_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  ::pkg00_base_interfaces::msg::SystemStatus work_status(::pkg00_base_interfaces::msg::SystemStatus::_work_status_type arg)
  {
    msg_.work_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_system_mode
{
public:
  Init_SystemStatus_system_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemStatus_work_status system_mode(::pkg00_base_interfaces::msg::SystemStatus::_system_mode_type arg)
  {
    msg_.system_mode = std::move(arg);
    return Init_SystemStatus_work_status(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::SystemStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg00_base_interfaces::msg::SystemStatus>()
{
  return pkg00_base_interfaces::msg::builder::Init_SystemStatus_system_mode();
}

}  // namespace pkg00_base_interfaces

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_
