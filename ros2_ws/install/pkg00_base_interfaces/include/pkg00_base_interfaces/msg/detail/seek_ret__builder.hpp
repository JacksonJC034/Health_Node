// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pkg00_base_interfaces:msg/SeekRet.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__SEEK_RET__BUILDER_HPP_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__SEEK_RET__BUILDER_HPP_

#include "pkg00_base_interfaces/msg/detail/seek_ret__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace pkg00_base_interfaces
{

namespace msg
{

namespace builder
{

class Init_SeekRet_ret
{
public:
  Init_SeekRet_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pkg00_base_interfaces::msg::SeekRet ret(::pkg00_base_interfaces::msg::SeekRet::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::SeekRet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg00_base_interfaces::msg::SeekRet>()
{
  return pkg00_base_interfaces::msg::builder::Init_SeekRet_ret();
}

}  // namespace pkg00_base_interfaces

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__SEEK_RET__BUILDER_HPP_
