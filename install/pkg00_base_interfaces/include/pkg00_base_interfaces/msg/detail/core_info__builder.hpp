// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pkg00_base_interfaces:msg/CoreInfo.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__CORE_INFO__BUILDER_HPP_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__CORE_INFO__BUILDER_HPP_

#include "pkg00_base_interfaces/msg/detail/core_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace pkg00_base_interfaces
{

namespace msg
{

namespace builder
{

class Init_CoreInfo_temperature
{
public:
  explicit Init_CoreInfo_temperature(::pkg00_base_interfaces::msg::CoreInfo & msg)
  : msg_(msg)
  {}
  ::pkg00_base_interfaces::msg::CoreInfo temperature(::pkg00_base_interfaces::msg::CoreInfo::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::CoreInfo msg_;
};

class Init_CoreInfo_nic_status
{
public:
  explicit Init_CoreInfo_nic_status(::pkg00_base_interfaces::msg::CoreInfo & msg)
  : msg_(msg)
  {}
  Init_CoreInfo_temperature nic_status(::pkg00_base_interfaces::msg::CoreInfo::_nic_status_type arg)
  {
    msg_.nic_status = std::move(arg);
    return Init_CoreInfo_temperature(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::CoreInfo msg_;
};

class Init_CoreInfo_cpu_frequency
{
public:
  explicit Init_CoreInfo_cpu_frequency(::pkg00_base_interfaces::msg::CoreInfo & msg)
  : msg_(msg)
  {}
  Init_CoreInfo_nic_status cpu_frequency(::pkg00_base_interfaces::msg::CoreInfo::_cpu_frequency_type arg)
  {
    msg_.cpu_frequency = std::move(arg);
    return Init_CoreInfo_nic_status(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::CoreInfo msg_;
};

class Init_CoreInfo_disk_usage
{
public:
  explicit Init_CoreInfo_disk_usage(::pkg00_base_interfaces::msg::CoreInfo & msg)
  : msg_(msg)
  {}
  Init_CoreInfo_cpu_frequency disk_usage(::pkg00_base_interfaces::msg::CoreInfo::_disk_usage_type arg)
  {
    msg_.disk_usage = std::move(arg);
    return Init_CoreInfo_cpu_frequency(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::CoreInfo msg_;
};

class Init_CoreInfo_memory_usage
{
public:
  explicit Init_CoreInfo_memory_usage(::pkg00_base_interfaces::msg::CoreInfo & msg)
  : msg_(msg)
  {}
  Init_CoreInfo_disk_usage memory_usage(::pkg00_base_interfaces::msg::CoreInfo::_memory_usage_type arg)
  {
    msg_.memory_usage = std::move(arg);
    return Init_CoreInfo_disk_usage(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::CoreInfo msg_;
};

class Init_CoreInfo_cpu_usage
{
public:
  Init_CoreInfo_cpu_usage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CoreInfo_memory_usage cpu_usage(::pkg00_base_interfaces::msg::CoreInfo::_cpu_usage_type arg)
  {
    msg_.cpu_usage = std::move(arg);
    return Init_CoreInfo_memory_usage(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::CoreInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg00_base_interfaces::msg::CoreInfo>()
{
  return pkg00_base_interfaces::msg::builder::Init_CoreInfo_cpu_usage();
}

}  // namespace pkg00_base_interfaces

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__CORE_INFO__BUILDER_HPP_
