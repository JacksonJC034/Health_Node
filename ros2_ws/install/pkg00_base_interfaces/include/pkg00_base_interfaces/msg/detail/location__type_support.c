// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pkg00_base_interfaces:msg/Location.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pkg00_base_interfaces/msg/detail/location__rosidl_typesupport_introspection_c.h"
#include "pkg00_base_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pkg00_base_interfaces/msg/detail/location__functions.h"
#include "pkg00_base_interfaces/msg/detail/location__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Location__rosidl_typesupport_introspection_c__Location_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pkg00_base_interfaces__msg__Location__init(message_memory);
}

void Location__rosidl_typesupport_introspection_c__Location_fini_function(void * message_memory)
{
  pkg00_base_interfaces__msg__Location__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Location__rosidl_typesupport_introspection_c__Location_message_member_array[9] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg00_base_interfaces__msg__Location, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg00_base_interfaces__msg__Location, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg00_base_interfaces__msg__Location, error),  // bytes offset in struct
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
    offsetof(pkg00_base_interfaces__msg__Location, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg00_base_interfaces__msg__Location, distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hall_location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg00_base_interfaces__msg__Location, hall_location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lift_son_loc_cali",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg00_base_interfaces__msg__Location, lift_son_loc_cali),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lift_current_loc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg00_base_interfaces__msg__Location, lift_current_loc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lift_horseshoe_en",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pkg00_base_interfaces__msg__Location, lift_horseshoe_en),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Location__rosidl_typesupport_introspection_c__Location_message_members = {
  "pkg00_base_interfaces__msg",  // message namespace
  "Location",  // message name
  9,  // number of fields
  sizeof(pkg00_base_interfaces__msg__Location),
  Location__rosidl_typesupport_introspection_c__Location_message_member_array,  // message members
  Location__rosidl_typesupport_introspection_c__Location_init_function,  // function to initialize message memory (memory has to be allocated)
  Location__rosidl_typesupport_introspection_c__Location_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Location__rosidl_typesupport_introspection_c__Location_message_type_support_handle = {
  0,
  &Location__rosidl_typesupport_introspection_c__Location_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pkg00_base_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pkg00_base_interfaces, msg, Location)() {
  if (!Location__rosidl_typesupport_introspection_c__Location_message_type_support_handle.typesupport_identifier) {
    Location__rosidl_typesupport_introspection_c__Location_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Location__rosidl_typesupport_introspection_c__Location_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
