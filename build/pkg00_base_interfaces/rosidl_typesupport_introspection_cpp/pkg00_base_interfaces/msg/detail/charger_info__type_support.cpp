// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pkg00_base_interfaces:msg/ChargerInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pkg00_base_interfaces/msg/detail/charger_info__struct.hpp"
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

void ChargerInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pkg00_base_interfaces::msg::ChargerInfo(_init);
}

void ChargerInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pkg00_base_interfaces::msg::ChargerInfo *>(message_memory);
  typed_message->~ChargerInfo();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ChargerInfo_message_member_array[3] = {
  {
    "charger_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg00_base_interfaces::msg::ChargerInfo, charger_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg00_base_interfaces::msg::ChargerInfo, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg00_base_interfaces::msg::ChargerInfo, error_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ChargerInfo_message_members = {
  "pkg00_base_interfaces::msg",  // message namespace
  "ChargerInfo",  // message name
  3,  // number of fields
  sizeof(pkg00_base_interfaces::msg::ChargerInfo),
  ChargerInfo_message_member_array,  // message members
  ChargerInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  ChargerInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ChargerInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ChargerInfo_message_members,
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
get_message_type_support_handle<pkg00_base_interfaces::msg::ChargerInfo>()
{
  return &::pkg00_base_interfaces::msg::rosidl_typesupport_introspection_cpp::ChargerInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pkg00_base_interfaces, msg, ChargerInfo)() {
  return &::pkg00_base_interfaces::msg::rosidl_typesupport_introspection_cpp::ChargerInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
