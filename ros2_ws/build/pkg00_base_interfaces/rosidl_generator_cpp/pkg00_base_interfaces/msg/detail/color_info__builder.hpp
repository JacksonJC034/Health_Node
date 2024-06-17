// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pkg00_base_interfaces:msg/ColorInfo.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__COLOR_INFO__BUILDER_HPP_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__COLOR_INFO__BUILDER_HPP_

#include "pkg00_base_interfaces/msg/detail/color_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace pkg00_base_interfaces
{

namespace msg
{

namespace builder
{

class Init_ColorInfo_color_type
{
public:
  Init_ColorInfo_color_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pkg00_base_interfaces::msg::ColorInfo color_type(::pkg00_base_interfaces::msg::ColorInfo::_color_type_type arg)
  {
    msg_.color_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::ColorInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg00_base_interfaces::msg::ColorInfo>()
{
  return pkg00_base_interfaces::msg::builder::Init_ColorInfo_color_type();
}

}  // namespace pkg00_base_interfaces

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__COLOR_INFO__BUILDER_HPP_
