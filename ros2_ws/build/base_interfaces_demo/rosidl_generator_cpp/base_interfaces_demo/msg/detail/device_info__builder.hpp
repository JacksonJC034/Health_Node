// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/DeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__DEVICE_INFO__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__DEVICE_INFO__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/device_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_DeviceInfo_network_status
{
public:
  explicit Init_DeviceInfo_network_status(::base_interfaces_demo::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::DeviceInfo network_status(::base_interfaces_demo::msg::DeviceInfo::_network_status_type arg)
  {
    msg_.network_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_ghz
{
public:
  explicit Init_DeviceInfo_ghz(::base_interfaces_demo::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_network_status ghz(::base_interfaces_demo::msg::DeviceInfo::_ghz_type arg)
  {
    msg_.ghz = std::move(arg);
    return Init_DeviceInfo_network_status(msg_);
  }

private:
  ::base_interfaces_demo::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_mem_used
{
public:
  explicit Init_DeviceInfo_mem_used(::base_interfaces_demo::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_ghz mem_used(::base_interfaces_demo::msg::DeviceInfo::_mem_used_type arg)
  {
    msg_.mem_used = std::move(arg);
    return Init_DeviceInfo_ghz(msg_);
  }

private:
  ::base_interfaces_demo::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_disk_used
{
public:
  explicit Init_DeviceInfo_disk_used(::base_interfaces_demo::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_mem_used disk_used(::base_interfaces_demo::msg::DeviceInfo::_disk_used_type arg)
  {
    msg_.disk_used = std::move(arg);
    return Init_DeviceInfo_mem_used(msg_);
  }

private:
  ::base_interfaces_demo::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_cpu3_used
{
public:
  explicit Init_DeviceInfo_cpu3_used(::base_interfaces_demo::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_disk_used cpu3_used(::base_interfaces_demo::msg::DeviceInfo::_cpu3_used_type arg)
  {
    msg_.cpu3_used = std::move(arg);
    return Init_DeviceInfo_disk_used(msg_);
  }

private:
  ::base_interfaces_demo::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_cpu2_used
{
public:
  explicit Init_DeviceInfo_cpu2_used(::base_interfaces_demo::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_cpu3_used cpu2_used(::base_interfaces_demo::msg::DeviceInfo::_cpu2_used_type arg)
  {
    msg_.cpu2_used = std::move(arg);
    return Init_DeviceInfo_cpu3_used(msg_);
  }

private:
  ::base_interfaces_demo::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_cpu1_used
{
public:
  explicit Init_DeviceInfo_cpu1_used(::base_interfaces_demo::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_cpu2_used cpu1_used(::base_interfaces_demo::msg::DeviceInfo::_cpu1_used_type arg)
  {
    msg_.cpu1_used = std::move(arg);
    return Init_DeviceInfo_cpu2_used(msg_);
  }

private:
  ::base_interfaces_demo::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_cpu0_used
{
public:
  explicit Init_DeviceInfo_cpu0_used(::base_interfaces_demo::msg::DeviceInfo & msg)
  : msg_(msg)
  {}
  Init_DeviceInfo_cpu1_used cpu0_used(::base_interfaces_demo::msg::DeviceInfo::_cpu0_used_type arg)
  {
    msg_.cpu0_used = std::move(arg);
    return Init_DeviceInfo_cpu1_used(msg_);
  }

private:
  ::base_interfaces_demo::msg::DeviceInfo msg_;
};

class Init_DeviceInfo_cpu_used
{
public:
  Init_DeviceInfo_cpu_used()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeviceInfo_cpu0_used cpu_used(::base_interfaces_demo::msg::DeviceInfo::_cpu_used_type arg)
  {
    msg_.cpu_used = std::move(arg);
    return Init_DeviceInfo_cpu0_used(msg_);
  }

private:
  ::base_interfaces_demo::msg::DeviceInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::DeviceInfo>()
{
  return base_interfaces_demo::msg::builder::Init_DeviceInfo_cpu_used();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__DEVICE_INFO__BUILDER_HPP_
