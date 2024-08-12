// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from base_interfaces_demo:msg/Location.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__LOCATION__BUILDER_HPP_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__LOCATION__BUILDER_HPP_

#include "base_interfaces_demo/msg/detail/location__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace base_interfaces_demo
{

namespace msg
{

namespace builder
{

class Init_Location_storage_z
{
public:
  explicit Init_Location_storage_z(::base_interfaces_demo::msg::Location & msg)
  : msg_(msg)
  {}
  ::base_interfaces_demo::msg::Location storage_z(::base_interfaces_demo::msg::Location::_storage_z_type arg)
  {
    msg_.storage_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::base_interfaces_demo::msg::Location msg_;
};

class Init_Location_storage_y
{
public:
  explicit Init_Location_storage_y(::base_interfaces_demo::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_storage_z storage_y(::base_interfaces_demo::msg::Location::_storage_y_type arg)
  {
    msg_.storage_y = std::move(arg);
    return Init_Location_storage_z(msg_);
  }

private:
  ::base_interfaces_demo::msg::Location msg_;
};

class Init_Location_storage_x
{
public:
  explicit Init_Location_storage_x(::base_interfaces_demo::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_storage_y storage_x(::base_interfaces_demo::msg::Location::_storage_x_type arg)
  {
    msg_.storage_x = std::move(arg);
    return Init_Location_storage_y(msg_);
  }

private:
  ::base_interfaces_demo::msg::Location msg_;
};

class Init_Location_distancey
{
public:
  explicit Init_Location_distancey(::base_interfaces_demo::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_storage_x distancey(::base_interfaces_demo::msg::Location::_distancey_type arg)
  {
    msg_.distancey = std::move(arg);
    return Init_Location_storage_x(msg_);
  }

private:
  ::base_interfaces_demo::msg::Location msg_;
};

class Init_Location_distancex
{
public:
  explicit Init_Location_distancex(::base_interfaces_demo::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_distancey distancex(::base_interfaces_demo::msg::Location::_distancex_type arg)
  {
    msg_.distancex = std::move(arg);
    return Init_Location_distancey(msg_);
  }

private:
  ::base_interfaces_demo::msg::Location msg_;
};

class Init_Location_hall_rfid_en
{
public:
  explicit Init_Location_hall_rfid_en(::base_interfaces_demo::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_distancex hall_rfid_en(::base_interfaces_demo::msg::Location::_hall_rfid_en_type arg)
  {
    msg_.hall_rfid_en = std::move(arg);
    return Init_Location_distancex(msg_);
  }

private:
  ::base_interfaces_demo::msg::Location msg_;
};

class Init_Location_state_lift_down_or_up
{
public:
  explicit Init_Location_state_lift_down_or_up(::base_interfaces_demo::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_hall_rfid_en state_lift_down_or_up(::base_interfaces_demo::msg::Location::_state_lift_down_or_up_type arg)
  {
    msg_.state_lift_down_or_up = std::move(arg);
    return Init_Location_hall_rfid_en(msg_);
  }

private:
  ::base_interfaces_demo::msg::Location msg_;
};

class Init_Location_state_motor_or_son
{
public:
  explicit Init_Location_state_motor_or_son(::base_interfaces_demo::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_state_lift_down_or_up state_motor_or_son(::base_interfaces_demo::msg::Location::_state_motor_or_son_type arg)
  {
    msg_.state_motor_or_son = std::move(arg);
    return Init_Location_state_lift_down_or_up(msg_);
  }

private:
  ::base_interfaces_demo::msg::Location msg_;
};

class Init_Location_lift_horseshoe_en
{
public:
  explicit Init_Location_lift_horseshoe_en(::base_interfaces_demo::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_state_motor_or_son lift_horseshoe_en(::base_interfaces_demo::msg::Location::_lift_horseshoe_en_type arg)
  {
    msg_.lift_horseshoe_en = std::move(arg);
    return Init_Location_state_motor_or_son(msg_);
  }

private:
  ::base_interfaces_demo::msg::Location msg_;
};

class Init_Location_lift_current_loc
{
public:
  explicit Init_Location_lift_current_loc(::base_interfaces_demo::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_lift_horseshoe_en lift_current_loc(::base_interfaces_demo::msg::Location::_lift_current_loc_type arg)
  {
    msg_.lift_current_loc = std::move(arg);
    return Init_Location_lift_horseshoe_en(msg_);
  }

private:
  ::base_interfaces_demo::msg::Location msg_;
};

class Init_Location_lift_son_loc_cali
{
public:
  explicit Init_Location_lift_son_loc_cali(::base_interfaces_demo::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_lift_current_loc lift_son_loc_cali(::base_interfaces_demo::msg::Location::_lift_son_loc_cali_type arg)
  {
    msg_.lift_son_loc_cali = std::move(arg);
    return Init_Location_lift_current_loc(msg_);
  }

private:
  ::base_interfaces_demo::msg::Location msg_;
};

class Init_Location_hall_location
{
public:
  explicit Init_Location_hall_location(::base_interfaces_demo::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_lift_son_loc_cali hall_location(::base_interfaces_demo::msg::Location::_hall_location_type arg)
  {
    msg_.hall_location = std::move(arg);
    return Init_Location_lift_son_loc_cali(msg_);
  }

private:
  ::base_interfaces_demo::msg::Location msg_;
};

class Init_Location_distance
{
public:
  explicit Init_Location_distance(::base_interfaces_demo::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_hall_location distance(::base_interfaces_demo::msg::Location::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_Location_hall_location(msg_);
  }

private:
  ::base_interfaces_demo::msg::Location msg_;
};

class Init_Location_status
{
public:
  explicit Init_Location_status(::base_interfaces_demo::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_distance status(::base_interfaces_demo::msg::Location::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Location_distance(msg_);
  }

private:
  ::base_interfaces_demo::msg::Location msg_;
};

class Init_Location_error_code
{
public:
  explicit Init_Location_error_code(::base_interfaces_demo::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_status error_code(::base_interfaces_demo::msg::Location::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_Location_status(msg_);
  }

private:
  ::base_interfaces_demo::msg::Location msg_;
};

class Init_Location_y
{
public:
  explicit Init_Location_y(::base_interfaces_demo::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_error_code y(::base_interfaces_demo::msg::Location::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Location_error_code(msg_);
  }

private:
  ::base_interfaces_demo::msg::Location msg_;
};

class Init_Location_x
{
public:
  Init_Location_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Location_y x(::base_interfaces_demo::msg::Location::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Location_y(msg_);
  }

private:
  ::base_interfaces_demo::msg::Location msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::base_interfaces_demo::msg::Location>()
{
  return base_interfaces_demo::msg::builder::Init_Location_x();
}

}  // namespace base_interfaces_demo

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__LOCATION__BUILDER_HPP_
