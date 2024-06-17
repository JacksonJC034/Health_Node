// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pkg00_base_interfaces:msg/ChargerInfo.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__CHARGER_INFO__BUILDER_HPP_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__CHARGER_INFO__BUILDER_HPP_

#include "pkg00_base_interfaces/msg/detail/charger_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace pkg00_base_interfaces
{

namespace msg
{

namespace builder
{

class Init_ChargerInfo_error_code
{
public:
  explicit Init_ChargerInfo_error_code(::pkg00_base_interfaces::msg::ChargerInfo & msg)
  : msg_(msg)
  {}
  ::pkg00_base_interfaces::msg::ChargerInfo error_code(::pkg00_base_interfaces::msg::ChargerInfo::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::ChargerInfo msg_;
};

class Init_ChargerInfo_status
{
public:
  explicit Init_ChargerInfo_status(::pkg00_base_interfaces::msg::ChargerInfo & msg)
  : msg_(msg)
  {}
  Init_ChargerInfo_error_code status(::pkg00_base_interfaces::msg::ChargerInfo::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ChargerInfo_error_code(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::ChargerInfo msg_;
};

class Init_ChargerInfo_charger_status
{
public:
  Init_ChargerInfo_charger_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargerInfo_status charger_status(::pkg00_base_interfaces::msg::ChargerInfo::_charger_status_type arg)
  {
    msg_.charger_status = std::move(arg);
    return Init_ChargerInfo_status(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::ChargerInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg00_base_interfaces::msg::ChargerInfo>()
{
  return pkg00_base_interfaces::msg::builder::Init_ChargerInfo_charger_status();
}

}  // namespace pkg00_base_interfaces

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__CHARGER_INFO__BUILDER_HPP_
