// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pkg00_base_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_

#include "pkg00_base_interfaces/msg/detail/system_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pkg00_base_interfaces::msg::SystemStatus>()
{
  return "pkg00_base_interfaces::msg::SystemStatus";
}

template<>
inline const char * name<pkg00_base_interfaces::msg::SystemStatus>()
{
  return "pkg00_base_interfaces/msg/SystemStatus";
}

template<>
struct has_fixed_size<pkg00_base_interfaces::msg::SystemStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pkg00_base_interfaces::msg::SystemStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pkg00_base_interfaces::msg::SystemStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_
