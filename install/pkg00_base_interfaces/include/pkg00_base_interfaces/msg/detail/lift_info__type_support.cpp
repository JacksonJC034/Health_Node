// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pkg00_base_interfaces:msg/LiftInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pkg00_base_interfaces/msg/detail/lift_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pkg00_base_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LiftInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pkg00_base_interfaces::msg::LiftInfo(_init);
}

void LiftInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pkg00_base_interfaces::msg::LiftInfo *>(message_memory);
  typed_message->~LiftInfo();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LiftInfo_message_member_array[2] = {
  {
    "lift_location",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg00_base_interfaces::msg::LiftInfo, lift_location),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lift_base_location",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg00_base_interfaces::msg::LiftInfo, lift_base_location),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LiftInfo_message_members = {
  "pkg00_base_interfaces::msg",  // message namespace
  "LiftInfo",  // message name
  2,  // number of fields
  sizeof(pkg00_base_interfaces::msg::LiftInfo),
  LiftInfo_message_member_array,  // message members
  LiftInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  LiftInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LiftInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LiftInfo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pkg00_base_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pkg00_base_interfaces::msg::LiftInfo>()
{
  return &::pkg00_base_interfaces::msg::rosidl_typesupport_introspection_cpp::LiftInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pkg00_base_interfaces, msg, LiftInfo)() {
  return &::pkg00_base_interfaces::msg::rosidl_typesupport_introspection_cpp::LiftInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
