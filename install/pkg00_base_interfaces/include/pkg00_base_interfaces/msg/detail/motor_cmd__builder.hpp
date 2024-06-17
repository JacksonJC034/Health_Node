// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pkg00_base_interfaces:msg/MotorCmd.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__MOTOR_CMD__BUILDER_HPP_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__MOTOR_CMD__BUILDER_HPP_

#include "pkg00_base_interfaces/msg/detail/motor_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace pkg00_base_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorCmd_location
{
public:
  explicit Init_MotorCmd_location(::pkg00_base_interfaces::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  ::pkg00_base_interfaces::msg::MotorCmd location(::pkg00_base_interfaces::msg::MotorCmd::_location_type arg)
  {
    msg_.location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::MotorCmd msg_;
};

class Init_MotorCmd_control
{
public:
  explicit Init_MotorCmd_control(::pkg00_base_interfaces::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_location control(::pkg00_base_interfaces::msg::MotorCmd::_control_type arg)
  {
    msg_.control = std::move(arg);
    return Init_MotorCmd_location(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::MotorCmd msg_;
};

class Init_MotorCmd_dec
{
public:
  explicit Init_MotorCmd_dec(::pkg00_base_interfaces::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_control dec(::pkg00_base_interfaces::msg::MotorCmd::_dec_type arg)
  {
    msg_.dec = std::move(arg);
    return Init_MotorCmd_control(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::MotorCmd msg_;
};

class Init_MotorCmd_acc
{
public:
  explicit Init_MotorCmd_acc(::pkg00_base_interfaces::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_dec acc(::pkg00_base_interfaces::msg::MotorCmd::_acc_type arg)
  {
    msg_.acc = std::move(arg);
    return Init_MotorCmd_dec(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::MotorCmd msg_;
};

class Init_MotorCmd_mode
{
public:
  explicit Init_MotorCmd_mode(::pkg00_base_interfaces::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_acc mode(::pkg00_base_interfaces::msg::MotorCmd::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_MotorCmd_acc(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::MotorCmd msg_;
};

class Init_MotorCmd_cmd
{
public:
  explicit Init_MotorCmd_cmd(::pkg00_base_interfaces::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_mode cmd(::pkg00_base_interfaces::msg::MotorCmd::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return Init_MotorCmd_mode(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::MotorCmd msg_;
};

class Init_MotorCmd_speed
{
public:
  Init_MotorCmd_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCmd_cmd speed(::pkg00_base_interfaces::msg::MotorCmd::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_MotorCmd_cmd(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::MotorCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg00_base_interfaces::msg::MotorCmd>()
{
  return pkg00_base_interfaces::msg::builder::Init_MotorCmd_speed();
}

}  // namespace pkg00_base_interfaces

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__MOTOR_CMD__BUILDER_HPP_
