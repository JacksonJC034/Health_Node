// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pkg00_base_interfaces:msg/ChargerInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pkg00_base_interfaces/msg/detail/charger_info__rosidl_typesupport_introspection_c.h"
#include "pkg00_base_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pkg00_base_interfaces/msg/detail/charger_info__functions.h"
#include "pkg00_base_interfaces/msg/detail/charger_info__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ChargerInfo__rosidl_typesupport_introspection_c__ChargerInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pkg00_base_interfaces__msg__ChargerInfo__init(message_memory);
}

void ChargerInfo__rosidl_typesupport_introspection_c__ChargerInfo_fini_function(void * message_memory)
{
  pkg00_base_interfaces__msg__ChargerInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ChargerInfo__rosidl_typesupport_introspection_c__ChargerInfo_message_member_array[3] = {
  {
    "charger_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg00_base_interfaces__msg__ChargerInfo, charger_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg00_base_interfaces__msg__ChargerInfo, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg00_base_interfaces__msg__ChargerInfo, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ChargerInfo__rosidl_typesupport_introspection_c__ChargerInfo_message_members = {
  "pkg00_base_interfaces__msg",  // message namespace
  "ChargerInfo",  // message name
  3,  // number of fields
  sizeof(pkg00_base_interfaces__msg__ChargerInfo),
  ChargerInfo__rosidl_typesupport_introspection_c__ChargerInfo_message_member_array,  // message members
  ChargerInfo__rosidl_typesupport_introspection_c__ChargerInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  ChargerInfo__rosidl_typesupport_introspection_c__ChargerInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ChargerInfo__rosidl_typesupport_introspection_c__ChargerInfo_message_type_support_handle = {
  0,
  &ChargerInfo__rosidl_typesupport_introspection_c__ChargerInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pkg00_base_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pkg00_base_interfaces, msg, ChargerInfo)() {
  if (!ChargerInfo__rosidl_typesupport_introspection_c__ChargerInfo_message_type_support_handle.typesupport_identifier) {
    ChargerInfo__rosidl_typesupport_introspection_c__ChargerInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ChargerInfo__rosidl_typesupport_introspection_c__ChargerInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
