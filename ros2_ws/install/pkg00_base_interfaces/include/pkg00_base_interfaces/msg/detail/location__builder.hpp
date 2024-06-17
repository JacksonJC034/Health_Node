// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pkg00_base_interfaces:msg/Location.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__LOCATION__BUILDER_HPP_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__LOCATION__BUILDER_HPP_

#include "pkg00_base_interfaces/msg/detail/location__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace pkg00_base_interfaces
{

namespace msg
{

namespace builder
{

class Init_Location_lift_horseshoe_en
{
public:
  explicit Init_Location_lift_horseshoe_en(::pkg00_base_interfaces::msg::Location & msg)
  : msg_(msg)
  {}
  ::pkg00_base_interfaces::msg::Location lift_horseshoe_en(::pkg00_base_interfaces::msg::Location::_lift_horseshoe_en_type arg)
  {
    msg_.lift_horseshoe_en = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::Location msg_;
};

class Init_Location_lift_current_loc
{
public:
  explicit Init_Location_lift_current_loc(::pkg00_base_interfaces::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_lift_horseshoe_en lift_current_loc(::pkg00_base_interfaces::msg::Location::_lift_current_loc_type arg)
  {
    msg_.lift_current_loc = std::move(arg);
    return Init_Location_lift_horseshoe_en(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::Location msg_;
};

class Init_Location_lift_son_loc_cali
{
public:
  explicit Init_Location_lift_son_loc_cali(::pkg00_base_interfaces::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_lift_current_loc lift_son_loc_cali(::pkg00_base_interfaces::msg::Location::_lift_son_loc_cali_type arg)
  {
    msg_.lift_son_loc_cali = std::move(arg);
    return Init_Location_lift_current_loc(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::Location msg_;
};

class Init_Location_hall_location
{
public:
  explicit Init_Location_hall_location(::pkg00_base_interfaces::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_lift_son_loc_cali hall_location(::pkg00_base_interfaces::msg::Location::_hall_location_type arg)
  {
    msg_.hall_location = std::move(arg);
    return Init_Location_lift_son_loc_cali(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::Location msg_;
};

class Init_Location_distance
{
public:
  explicit Init_Location_distance(::pkg00_base_interfaces::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_hall_location distance(::pkg00_base_interfaces::msg::Location::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_Location_hall_location(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::Location msg_;
};

class Init_Location_status
{
public:
  explicit Init_Location_status(::pkg00_base_interfaces::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_distance status(::pkg00_base_interfaces::msg::Location::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Location_distance(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::Location msg_;
};

class Init_Location_error
{
public:
  explicit Init_Location_error(::pkg00_base_interfaces::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_status error(::pkg00_base_interfaces::msg::Location::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_Location_status(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::Location msg_;
};

class Init_Location_y
{
public:
  explicit Init_Location_y(::pkg00_base_interfaces::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_error y(::pkg00_base_interfaces::msg::Location::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Location_error(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::Location msg_;
};

class Init_Location_x
{
public:
  Init_Location_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Location_y x(::pkg00_base_interfaces::msg::Location::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Location_y(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::Location msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg00_base_interfaces::msg::Location>()
{
  return pkg00_base_interfaces::msg::builder::Init_Location_x();
}

}  // namespace pkg00_base_interfaces

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__LOCATION__BUILDER_HPP_
