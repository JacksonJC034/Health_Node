// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/CoreInfo.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__CORE_INFO__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__CORE_INFO__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/core_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_CoreInfo_temperature
{
public:
  explicit Init_CoreInfo_temperature(::base_interfaces_demo::msg::CoreInfo & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::CoreInfo temperature(::base_interfaces_demo::msg::CoreInfo::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::CoreInfo msg_;
};

class Init_CoreInfo_nic_status
{
public:
  explicit Init_CoreInfo_nic_status(::base_interfaces_demo::msg::CoreInfo & msg)
  : msg_(msg)
  {}
  Init_CoreInfo_temperature nic_status(::base_interfaces_demo::msg::CoreInfo::_nic_status_type arg)
  {
    msg_.nic_status = std::move(arg);
    return Init_CoreInfo_temperature(msg_);
  }

private:
  ::base_interfaces_demo::msg::CoreInfo msg_;
};

class Init_CoreInfo_cpu_frequency
{
public:
  explicit Init_CoreInfo_cpu_frequency(::base_interfaces_demo::msg::CoreInfo & msg)
  : msg_(msg)
  {}
  Init_CoreInfo_nic_status cpu_frequency(::base_interfaces_demo::msg::CoreInfo::_cpu_frequency_type arg)
  {
    msg_.cpu_frequency = std::move(arg);
    return Init_CoreInfo_nic_status(msg_);
  }

private:
  ::base_interfaces_demo::msg::CoreInfo msg_;
};

class Init_CoreInfo_disk_usage
{
public:
  explicit Init_CoreInfo_disk_usage(::base_interfaces_demo::msg::CoreInfo & msg)
  : msg_(msg)
  {}
  Init_CoreInfo_cpu_frequency disk_usage(::base_interfaces_demo::msg::CoreInfo::_disk_usage_type arg)
  {
    msg_.disk_usage = std::move(arg);
    return Init_CoreInfo_cpu_frequency(msg_);
  }

private:
  ::base_interfaces_demo::msg::CoreInfo msg_;
};

class Init_CoreInfo_memory_usage
{
public:
  explicit Init_CoreInfo_memory_usage(::base_interfaces_demo::msg::CoreInfo & msg)
  : msg_(msg)
  {}
  Init_CoreInfo_disk_usage memory_usage(::base_interfaces_demo::msg::CoreInfo::_memory_usage_type arg)
  {
    msg_.memory_usage = std::move(arg);
    return Init_CoreInfo_disk_usage(msg_);
  }

private:
  ::base_interfaces_demo::msg::CoreInfo msg_;
};

class Init_CoreInfo_cpu_usage
{
public:
  Init_CoreInfo_cpu_usage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CoreInfo_memory_usage cpu_usage(::base_interfaces_demo::msg::CoreInfo::_cpu_usage_type arg)
  {
    msg_.cpu_usage = std::move(arg);
    return Init_CoreInfo_memory_usage(msg_);
  }

private:
  ::base_interfaces_demo::msg::CoreInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::CoreInfo>()
{
  return base_interfaces_demo::msg::builder::Init_CoreInfo_cpu_usage();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__CORE_INFO__BUILDER_HPP_
