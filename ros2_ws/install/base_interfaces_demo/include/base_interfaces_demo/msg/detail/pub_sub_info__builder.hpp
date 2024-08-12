// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/PubSubInfo.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__PUB_SUB_INFO__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__PUB_SUB_INFO__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/pub_sub_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_PubSubInfo_type
{
public:
  explicit Init_PubSubInfo_type(::base_interfaces_demo::msg::PubSubInfo & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::PubSubInfo type(::base_interfaces_demo::msg::PubSubInfo::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::PubSubInfo msg_;
};

class Init_PubSubInfo_text
{
public:
  explicit Init_PubSubInfo_text(::base_interfaces_demo::msg::PubSubInfo & msg)
  : msg_(msg)
  {}
  Init_PubSubInfo_type text(::base_interfaces_demo::msg::PubSubInfo::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_PubSubInfo_type(msg_);
  }

private:
  ::base_interfaces_demo::msg::PubSubInfo msg_;
};

class Init_PubSubInfo_current_y
{
public:
  explicit Init_PubSubInfo_current_y(::base_interfaces_demo::msg::PubSubInfo & msg)
  : msg_(msg)
  {}
  Init_PubSubInfo_text current_y(::base_interfaces_demo::msg::PubSubInfo::_current_y_type arg)
  {
    msg_.current_y = std::move(arg);
    return Init_PubSubInfo_text(msg_);
  }

private:
  ::base_interfaces_demo::msg::PubSubInfo msg_;
};

class Init_PubSubInfo_current_x
{
public:
  Init_PubSubInfo_current_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PubSubInfo_current_y current_x(::base_interfaces_demo::msg::PubSubInfo::_current_x_type arg)
  {
    msg_.current_x = std::move(arg);
    return Init_PubSubInfo_current_y(msg_);
  }

private:
  ::base_interfaces_demo::msg::PubSubInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::PubSubInfo>()
{
  return base_interfaces_demo::msg::builder::Init_PubSubInfo_current_x();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__PUB_SUB_INFO__BUILDER_HPP_
