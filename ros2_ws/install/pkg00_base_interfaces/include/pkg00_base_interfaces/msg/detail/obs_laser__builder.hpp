// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pkg00_base_interfaces:msg/ObsLaser.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__OBS_LASER__BUILDER_HPP_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__OBS_LASER__BUILDER_HPP_

#include "pkg00_base_interfaces/msg/detail/obs_laser__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace pkg00_base_interfaces
{

namespace msg
{

namespace builder
{

class Init_ObsLaser_sunlight_base
{
public:
  explicit Init_ObsLaser_sunlight_base(::pkg00_base_interfaces::msg::ObsLaser & msg)
  : msg_(msg)
  {}
  ::pkg00_base_interfaces::msg::ObsLaser sunlight_base(::pkg00_base_interfaces::msg::ObsLaser::_sunlight_base_type arg)
  {
    msg_.sunlight_base = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::ObsLaser msg_;
};

class Init_ObsLaser_mainpeak_strength
{
public:
  explicit Init_ObsLaser_mainpeak_strength(::pkg00_base_interfaces::msg::ObsLaser & msg)
  : msg_(msg)
  {}
  Init_ObsLaser_sunlight_base mainpeak_strength(::pkg00_base_interfaces::msg::ObsLaser::_mainpeak_strength_type arg)
  {
    msg_.mainpeak_strength = std::move(arg);
    return Init_ObsLaser_sunlight_base(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::ObsLaser msg_;
};

class Init_ObsLaser_mainpeak_correct
{
public:
  explicit Init_ObsLaser_mainpeak_correct(::pkg00_base_interfaces::msg::ObsLaser & msg)
  : msg_(msg)
  {}
  Init_ObsLaser_mainpeak_strength mainpeak_correct(::pkg00_base_interfaces::msg::ObsLaser::_mainpeak_correct_type arg)
  {
    msg_.mainpeak_correct = std::move(arg);
    return Init_ObsLaser_mainpeak_strength(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::ObsLaser msg_;
};

class Init_ObsLaser_mainpeak
{
public:
  explicit Init_ObsLaser_mainpeak(::pkg00_base_interfaces::msg::ObsLaser & msg)
  : msg_(msg)
  {}
  Init_ObsLaser_mainpeak_correct mainpeak(::pkg00_base_interfaces::msg::ObsLaser::_mainpeak_type arg)
  {
    msg_.mainpeak = std::move(arg);
    return Init_ObsLaser_mainpeak_correct(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::ObsLaser msg_;
};

class Init_ObsLaser_subpeak_strength
{
public:
  explicit Init_ObsLaser_subpeak_strength(::pkg00_base_interfaces::msg::ObsLaser & msg)
  : msg_(msg)
  {}
  Init_ObsLaser_mainpeak subpeak_strength(::pkg00_base_interfaces::msg::ObsLaser::_subpeak_strength_type arg)
  {
    msg_.subpeak_strength = std::move(arg);
    return Init_ObsLaser_mainpeak(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::ObsLaser msg_;
};

class Init_ObsLaser_temp_code
{
public:
  explicit Init_ObsLaser_temp_code(::pkg00_base_interfaces::msg::ObsLaser & msg)
  : msg_(msg)
  {}
  Init_ObsLaser_subpeak_strength temp_code(::pkg00_base_interfaces::msg::ObsLaser::_temp_code_type arg)
  {
    msg_.temp_code = std::move(arg);
    return Init_ObsLaser_subpeak_strength(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::ObsLaser msg_;
};

class Init_ObsLaser_subpeak_quality
{
public:
  explicit Init_ObsLaser_subpeak_quality(::pkg00_base_interfaces::msg::ObsLaser & msg)
  : msg_(msg)
  {}
  Init_ObsLaser_temp_code subpeak_quality(::pkg00_base_interfaces::msg::ObsLaser::_subpeak_quality_type arg)
  {
    msg_.subpeak_quality = std::move(arg);
    return Init_ObsLaser_temp_code(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::ObsLaser msg_;
};

class Init_ObsLaser_device_id
{
public:
  Init_ObsLaser_device_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObsLaser_subpeak_quality device_id(::pkg00_base_interfaces::msg::ObsLaser::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_ObsLaser_subpeak_quality(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::ObsLaser msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg00_base_interfaces::msg::ObsLaser>()
{
  return pkg00_base_interfaces::msg::builder::Init_ObsLaser_device_id();
}

}  // namespace pkg00_base_interfaces

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__OBS_LASER__BUILDER_HPP_
