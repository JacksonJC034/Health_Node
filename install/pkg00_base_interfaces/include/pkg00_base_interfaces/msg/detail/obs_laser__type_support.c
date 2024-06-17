// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pkg00_base_interfaces:msg/ObsLaser.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pkg00_base_interfaces/msg/detail/obs_laser__rosidl_typesupport_introspection_c.h"
#include "pkg00_base_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pkg00_base_interfaces/msg/detail/obs_laser__functions.h"
#include "pkg00_base_interfaces/msg/detail/obs_laser__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ObsLaser__rosidl_typesupport_introspection_c__ObsLaser_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pkg00_base_interfaces__msg__ObsLaser__init(message_memory);
}

void ObsLaser__rosidl_typesupport_introspection_c__ObsLaser_fini_function(void * message_memory)
{
  pkg00_base_interfaces__msg__ObsLaser__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ObsLaser__rosidl_typesupport_introspection_c__ObsLaser_message_member_array[8] = {
  {
    "device_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg00_base_interfaces__msg__ObsLaser, device_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "subpeak_quality",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg00_base_interfaces__msg__ObsLaser, subpeak_quality),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temp_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg00_base_interfaces__msg__ObsLaser, temp_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "subpeak_strength",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg00_base_interfaces__msg__ObsLaser, subpeak_strength),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mainpeak",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg00_base_interfaces__msg__ObsLaser, mainpeak),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mainpeak_correct",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg00_base_interfaces__msg__ObsLaser, mainpeak_correct),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mainpeak_strength",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg00_base_interfaces__msg__ObsLaser, mainpeak_strength),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sunlight_base",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg00_base_interfaces__msg__ObsLaser, sunlight_base),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObsLaser__rosidl_typesupport_introspection_c__ObsLaser_message_members = {
  "pkg00_base_interfaces__msg",  // message namespace
  "ObsLaser",  // message name
  8,  // number of fields
  sizeof(pkg00_base_interfaces__msg__ObsLaser),
  ObsLaser__rosidl_typesupport_introspection_c__ObsLaser_message_member_array,  // message members
  ObsLaser__rosidl_typesupport_introspection_c__ObsLaser_init_function,  // function to initialize message memory (memory has to be allocated)
  ObsLaser__rosidl_typesupport_introspection_c__ObsLaser_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObsLaser__rosidl_typesupport_introspection_c__ObsLaser_message_type_support_handle = {
  0,
  &ObsLaser__rosidl_typesupport_introspection_c__ObsLaser_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pkg00_base_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pkg00_base_interfaces, msg, ObsLaser)() {
  if (!ObsLaser__rosidl_typesupport_introspection_c__ObsLaser_message_type_support_handle.typesupport_identifier) {
    ObsLaser__rosidl_typesupport_introspection_c__ObsLaser_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObsLaser__rosidl_typesupport_introspection_c__ObsLaser_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
