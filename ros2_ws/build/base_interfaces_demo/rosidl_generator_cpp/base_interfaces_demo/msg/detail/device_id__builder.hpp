// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/DeviceId.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__DEVICE_ID__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__DEVICE_ID__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/device_id__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_DeviceId_device_id
{
public:
  Init_DeviceId_device_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::base_interfaces_demo::msg::DeviceId device_id(::base_interfaces_demo::msg::DeviceId::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::DeviceId msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::DeviceId>()
{
  return base_interfaces_demo::msg::builder::Init_DeviceId_device_id();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__DEVICE_ID__BUILDER_HPP_
