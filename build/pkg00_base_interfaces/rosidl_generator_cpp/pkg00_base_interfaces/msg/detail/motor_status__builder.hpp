// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pkg00_base_interfaces:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_

#include "pkg00_base_interfaces/msg/detail/motor_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace pkg00_base_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorStatus_encoder_location
{
public:
  explicit Init_MotorStatus_encoder_location(::pkg00_base_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  ::pkg00_base_interfaces::msg::MotorStatus encoder_location(::pkg00_base_interfaces::msg::MotorStatus::_encoder_location_type arg)
  {
    msg_.encoder_location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_odometer
{
public:
  explicit Init_MotorStatus_odometer(::pkg00_base_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_encoder_location odometer(::pkg00_base_interfaces::msg::MotorStatus::_odometer_type arg)
  {
    msg_.odometer = std::move(arg);
    return Init_MotorStatus_encoder_location(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_driver_init_status
{
public:
  explicit Init_MotorStatus_driver_init_status(::pkg00_base_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_odometer driver_init_status(::pkg00_base_interfaces::msg::MotorStatus::_driver_init_status_type arg)
  {
    msg_.driver_init_status = std::move(arg);
    return Init_MotorStatus_odometer(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_status
{
public:
  explicit Init_MotorStatus_status(::pkg00_base_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_driver_init_status status(::pkg00_base_interfaces::msg::MotorStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MotorStatus_driver_init_status(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_speed
{
public:
  explicit Init_MotorStatus_speed(::pkg00_base_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_status speed(::pkg00_base_interfaces::msg::MotorStatus::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_MotorStatus_status(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_current
{
public:
  explicit Init_MotorStatus_current(::pkg00_base_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_speed current(::pkg00_base_interfaces::msg::MotorStatus::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_MotorStatus_speed(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_error
{
public:
  explicit Init_MotorStatus_error(::pkg00_base_interfaces::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_current error(::pkg00_base_interfaces::msg::MotorStatus::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_MotorStatus_current(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::MotorStatus msg_;
};

class Init_MotorStatus_mode
{
public:
  Init_MotorStatus_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorStatus_error mode(::pkg00_base_interfaces::msg::MotorStatus::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_MotorStatus_error(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::MotorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg00_base_interfaces::msg::MotorStatus>()
{
  return pkg00_base_interfaces::msg::builder::Init_MotorStatus_mode();
}

}  // namespace pkg00_base_interfaces

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
