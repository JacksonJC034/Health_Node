// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pkg00_base_interfaces:msg/CoreInfo.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__CORE_INFO__STRUCT_H_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__CORE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'nic_status'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/CoreInfo in the package pkg00_base_interfaces.
typedef struct pkg00_base_interfaces__msg__CoreInfo
{
  double cpu_usage;
  double memory_usage;
  double disk_usage;
  double cpu_frequency;
  rosidl_runtime_c__String nic_status;
  double temperature;
} pkg00_base_interfaces__msg__CoreInfo;

// Struct for a sequence of pkg00_base_interfaces__msg__CoreInfo.
typedef struct pkg00_base_interfaces__msg__CoreInfo__Sequence
{
  pkg00_base_interfaces__msg__CoreInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pkg00_base_interfaces__msg__CoreInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__CORE_INFO__STRUCT_H_
