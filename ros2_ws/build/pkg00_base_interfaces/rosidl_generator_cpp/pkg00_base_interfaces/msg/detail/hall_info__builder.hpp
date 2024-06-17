// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pkg00_base_interfaces:msg/HallInfo.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__HALL_INFO__BUILDER_HPP_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__HALL_INFO__BUILDER_HPP_

#include "pkg00_base_interfaces/msg/detail/hall_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace pkg00_base_interfaces
{

namespace msg
{

namespace builder
{

class Init_HallInfo_state
{
public:
  explicit Init_HallInfo_state(::pkg00_base_interfaces::msg::HallInfo & msg)
  : msg_(msg)
  {}
  ::pkg00_base_interfaces::msg::HallInfo state(::pkg00_base_interfaces::msg::HallInfo::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::HallInfo msg_;
};

class Init_HallInfo_r4
{
public:
  explicit Init_HallInfo_r4(::pkg00_base_interfaces::msg::HallInfo & msg)
  : msg_(msg)
  {}
  Init_HallInfo_state r4(::pkg00_base_interfaces::msg::HallInfo::_r4_type arg)
  {
    msg_.r4 = std::move(arg);
    return Init_HallInfo_state(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::HallInfo msg_;
};

class Init_HallInfo_r3
{
public:
  explicit Init_HallInfo_r3(::pkg00_base_interfaces::msg::HallInfo & msg)
  : msg_(msg)
  {}
  Init_HallInfo_r4 r3(::pkg00_base_interfaces::msg::HallInfo::_r3_type arg)
  {
    msg_.r3 = std::move(arg);
    return Init_HallInfo_r4(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::HallInfo msg_;
};

class Init_HallInfo_r2
{
public:
  explicit Init_HallInfo_r2(::pkg00_base_interfaces::msg::HallInfo & msg)
  : msg_(msg)
  {}
  Init_HallInfo_r3 r2(::pkg00_base_interfaces::msg::HallInfo::_r2_type arg)
  {
    msg_.r2 = std::move(arg);
    return Init_HallInfo_r3(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::HallInfo msg_;
};

class Init_HallInfo_r1
{
public:
  explicit Init_HallInfo_r1(::pkg00_base_interfaces::msg::HallInfo & msg)
  : msg_(msg)
  {}
  Init_HallInfo_r2 r1(::pkg00_base_interfaces::msg::HallInfo::_r1_type arg)
  {
    msg_.r1 = std::move(arg);
    return Init_HallInfo_r2(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::HallInfo msg_;
};

class Init_HallInfo_l4
{
public:
  explicit Init_HallInfo_l4(::pkg00_base_interfaces::msg::HallInfo & msg)
  : msg_(msg)
  {}
  Init_HallInfo_r1 l4(::pkg00_base_interfaces::msg::HallInfo::_l4_type arg)
  {
    msg_.l4 = std::move(arg);
    return Init_HallInfo_r1(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::HallInfo msg_;
};

class Init_HallInfo_l3
{
public:
  explicit Init_HallInfo_l3(::pkg00_base_interfaces::msg::HallInfo & msg)
  : msg_(msg)
  {}
  Init_HallInfo_l4 l3(::pkg00_base_interfaces::msg::HallInfo::_l3_type arg)
  {
    msg_.l3 = std::move(arg);
    return Init_HallInfo_l4(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::HallInfo msg_;
};

class Init_HallInfo_l2
{
public:
  explicit Init_HallInfo_l2(::pkg00_base_interfaces::msg::HallInfo & msg)
  : msg_(msg)
  {}
  Init_HallInfo_l3 l2(::pkg00_base_interfaces::msg::HallInfo::_l2_type arg)
  {
    msg_.l2 = std::move(arg);
    return Init_HallInfo_l3(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::HallInfo msg_;
};

class Init_HallInfo_l1
{
public:
  explicit Init_HallInfo_l1(::pkg00_base_interfaces::msg::HallInfo & msg)
  : msg_(msg)
  {}
  Init_HallInfo_l2 l1(::pkg00_base_interfaces::msg::HallInfo::_l1_type arg)
  {
    msg_.l1 = std::move(arg);
    return Init_HallInfo_l2(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::HallInfo msg_;
};

class Init_HallInfo_b4
{
public:
  explicit Init_HallInfo_b4(::pkg00_base_interfaces::msg::HallInfo & msg)
  : msg_(msg)
  {}
  Init_HallInfo_l1 b4(::pkg00_base_interfaces::msg::HallInfo::_b4_type arg)
  {
    msg_.b4 = std::move(arg);
    return Init_HallInfo_l1(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::HallInfo msg_;
};

class Init_HallInfo_b3
{
public:
  explicit Init_HallInfo_b3(::pkg00_base_interfaces::msg::HallInfo & msg)
  : msg_(msg)
  {}
  Init_HallInfo_b4 b3(::pkg00_base_interfaces::msg::HallInfo::_b3_type arg)
  {
    msg_.b3 = std::move(arg);
    return Init_HallInfo_b4(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::HallInfo msg_;
};

class Init_HallInfo_b2
{
public:
  explicit Init_HallInfo_b2(::pkg00_base_interfaces::msg::HallInfo & msg)
  : msg_(msg)
  {}
  Init_HallInfo_b3 b2(::pkg00_base_interfaces::msg::HallInfo::_b2_type arg)
  {
    msg_.b2 = std::move(arg);
    return Init_HallInfo_b3(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::HallInfo msg_;
};

class Init_HallInfo_b1
{
public:
  explicit Init_HallInfo_b1(::pkg00_base_interfaces::msg::HallInfo & msg)
  : msg_(msg)
  {}
  Init_HallInfo_b2 b1(::pkg00_base_interfaces::msg::HallInfo::_b1_type arg)
  {
    msg_.b1 = std::move(arg);
    return Init_HallInfo_b2(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::HallInfo msg_;
};

class Init_HallInfo_f4
{
public:
  explicit Init_HallInfo_f4(::pkg00_base_interfaces::msg::HallInfo & msg)
  : msg_(msg)
  {}
  Init_HallInfo_b1 f4(::pkg00_base_interfaces::msg::HallInfo::_f4_type arg)
  {
    msg_.f4 = std::move(arg);
    return Init_HallInfo_b1(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::HallInfo msg_;
};

class Init_HallInfo_f3
{
public:
  explicit Init_HallInfo_f3(::pkg00_base_interfaces::msg::HallInfo & msg)
  : msg_(msg)
  {}
  Init_HallInfo_f4 f3(::pkg00_base_interfaces::msg::HallInfo::_f3_type arg)
  {
    msg_.f3 = std::move(arg);
    return Init_HallInfo_f4(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::HallInfo msg_;
};

class Init_HallInfo_f2
{
public:
  explicit Init_HallInfo_f2(::pkg00_base_interfaces::msg::HallInfo & msg)
  : msg_(msg)
  {}
  Init_HallInfo_f3 f2(::pkg00_base_interfaces::msg::HallInfo::_f2_type arg)
  {
    msg_.f2 = std::move(arg);
    return Init_HallInfo_f3(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::HallInfo msg_;
};

class Init_HallInfo_f1
{
public:
  explicit Init_HallInfo_f1(::pkg00_base_interfaces::msg::HallInfo & msg)
  : msg_(msg)
  {}
  Init_HallInfo_f2 f1(::pkg00_base_interfaces::msg::HallInfo::_f1_type arg)
  {
    msg_.f1 = std::move(arg);
    return Init_HallInfo_f2(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::HallInfo msg_;
};

class Init_HallInfo_uid0
{
public:
  explicit Init_HallInfo_uid0(::pkg00_base_interfaces::msg::HallInfo & msg)
  : msg_(msg)
  {}
  Init_HallInfo_f1 uid0(::pkg00_base_interfaces::msg::HallInfo::_uid0_type arg)
  {
    msg_.uid0 = std::move(arg);
    return Init_HallInfo_f1(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::HallInfo msg_;
};

class Init_HallInfo_uid1
{
public:
  explicit Init_HallInfo_uid1(::pkg00_base_interfaces::msg::HallInfo & msg)
  : msg_(msg)
  {}
  Init_HallInfo_uid0 uid1(::pkg00_base_interfaces::msg::HallInfo::_uid1_type arg)
  {
    msg_.uid1 = std::move(arg);
    return Init_HallInfo_uid0(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::HallInfo msg_;
};

class Init_HallInfo_uid2
{
public:
  explicit Init_HallInfo_uid2(::pkg00_base_interfaces::msg::HallInfo & msg)
  : msg_(msg)
  {}
  Init_HallInfo_uid1 uid2(::pkg00_base_interfaces::msg::HallInfo::_uid2_type arg)
  {
    msg_.uid2 = std::move(arg);
    return Init_HallInfo_uid1(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::HallInfo msg_;
};

class Init_HallInfo_uid3
{
public:
  explicit Init_HallInfo_uid3(::pkg00_base_interfaces::msg::HallInfo & msg)
  : msg_(msg)
  {}
  Init_HallInfo_uid2 uid3(::pkg00_base_interfaces::msg::HallInfo::_uid3_type arg)
  {
    msg_.uid3 = std::move(arg);
    return Init_HallInfo_uid2(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::HallInfo msg_;
};

class Init_HallInfo_uid4
{
public:
  explicit Init_HallInfo_uid4(::pkg00_base_interfaces::msg::HallInfo & msg)
  : msg_(msg)
  {}
  Init_HallInfo_uid3 uid4(::pkg00_base_interfaces::msg::HallInfo::_uid4_type arg)
  {
    msg_.uid4 = std::move(arg);
    return Init_HallInfo_uid3(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::HallInfo msg_;
};

class Init_HallInfo_uid5
{
public:
  explicit Init_HallInfo_uid5(::pkg00_base_interfaces::msg::HallInfo & msg)
  : msg_(msg)
  {}
  Init_HallInfo_uid4 uid5(::pkg00_base_interfaces::msg::HallInfo::_uid5_type arg)
  {
    msg_.uid5 = std::move(arg);
    return Init_HallInfo_uid4(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::HallInfo msg_;
};

class Init_HallInfo_uid6
{
public:
  explicit Init_HallInfo_uid6(::pkg00_base_interfaces::msg::HallInfo & msg)
  : msg_(msg)
  {}
  Init_HallInfo_uid5 uid6(::pkg00_base_interfaces::msg::HallInfo::_uid6_type arg)
  {
    msg_.uid6 = std::move(arg);
    return Init_HallInfo_uid5(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::HallInfo msg_;
};

class Init_HallInfo_uid7
{
public:
  Init_HallInfo_uid7()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HallInfo_uid6 uid7(::pkg00_base_interfaces::msg::HallInfo::_uid7_type arg)
  {
    msg_.uid7 = std::move(arg);
    return Init_HallInfo_uid6(msg_);
  }

private:
  ::pkg00_base_interfaces::msg::HallInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pkg00_base_interfaces::msg::HallInfo>()
{
  return pkg00_base_interfaces::msg::builder::Init_HallInfo_uid7();
}

}  // namespace pkg00_base_interfaces

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__HALL_INFO__BUILDER_HPP_
