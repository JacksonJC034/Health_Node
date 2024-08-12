// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces_demo:msg/PubSubInfo.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__PUB_SUB_INFO__STRUCT_H_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__PUB_SUB_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'text'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/PubSubInfo in the package base_interfaces_demo.
typedef struct base_interfaces_demo__msg__PubSubInfo
{
  double current_x;
  double current_y;
  rosidl_runtime_c__String text;
  int32_t type;
} base_interfaces_demo__msg__PubSubInfo;

// Struct for a sequence of base_interfaces_demo__msg__PubSubInfo.
typedef struct base_interfaces_demo__msg__PubSubInfo__Sequence
{
  base_interfaces_demo__msg__PubSubInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__msg__PubSubInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__PUB_SUB_INFO__STRUCT_H_
