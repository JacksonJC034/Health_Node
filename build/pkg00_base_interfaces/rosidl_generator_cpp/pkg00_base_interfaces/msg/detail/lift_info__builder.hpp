// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pkg00_base_interfaces:msg/LiftInfo.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__LIFT_INFO__BUILDER_HPP_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__LIFT_INFO__BUILDER_HPP_

#include "pkg00_base_interfaces/msg/detail/lift_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace pkg00_base_interfaces
{

namespace msg
{

namespace builder
{

class Init_LiftInfo_lift_base_location
{
public:
  explicit Init_LiftInfo_lift_base_location(::pkg00_base_interfaces::msg::LiftInfo & msg)
  : msg_(msg)
  {}
  ::pkg00_base_interfaces::msg::LiftInfo lift_base_location(::pkg00_base_interfaces::msg::LiftInfo::_lift_base_location_type arg)
  {
    msg_.lift_base_location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::LiftInfo msg_;
};

class Init_LiftInfo_lift_location
{
public:
  Init_LiftInfo_lift_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LiftInfo_lift_base_location lift_location(::pkg00_base_interfaces::msg::LiftInfo::_lift_location_type arg)
  {
    msg_.lift_location = std::move(arg);
    return Init_LiftInfo_lift_base_location(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::LiftInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg00_base_interfaces::msg::LiftInfo>()
{
  return pkg00_base_interfaces::msg::builder::Init_LiftInfo_lift_location();
}

}  // namespace pkg00_base_interfaces

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__LIFT_INFO__BUILDER_HPP_
