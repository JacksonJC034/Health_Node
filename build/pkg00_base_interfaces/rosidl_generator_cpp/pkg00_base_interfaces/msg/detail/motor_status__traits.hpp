// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pkg00_base_interfaces:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_

#include "pkg00_base_interfaces/msg/detail/motor_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pkg00_base_interfaces::msg::MotorStatus>()
{
  return "pkg00_base_interfaces::msg::MotorStatus";
}

template<>
inline const char * name<pkg00_base_interfaces::msg::MotorStatus>()
{
  return "pkg00_base_interfaces/msg/MotorStatus";
}

template<>
struct has_fixed_size<pkg00_base_interfaces::msg::MotorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pkg00_base_interfaces::msg::MotorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pkg00_base_interfaces::msg::MotorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_
