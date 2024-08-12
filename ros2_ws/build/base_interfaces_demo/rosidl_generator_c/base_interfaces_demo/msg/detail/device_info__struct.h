// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces_demo:msg/DeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__DEVICE_INFO__STRUCT_H_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__DEVICE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'disk_used'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/DeviceInfo in the package base_interfaces_demo.
typedef struct base_interfaces_demo__msg__DeviceInfo
{
  double cpu_used;
  double cpu0_used;
  double cpu1_used;
  double cpu2_used;
  double cpu3_used;
  rosidl_runtime_c__String disk_used;
  double mem_used;
  double ghz;
  int32_t network_status;
} base_interfaces_demo__msg__DeviceInfo;

// Struct for a sequence of base_interfaces_demo__msg__DeviceInfo.
typedef struct base_interfaces_demo__msg__DeviceInfo__Sequence
{
  base_interfaces_demo__msg__DeviceInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__msg__DeviceInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__DEVICE_INFO__STRUCT_H_
