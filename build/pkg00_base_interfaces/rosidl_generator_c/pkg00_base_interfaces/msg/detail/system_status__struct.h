// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pkg00_base_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SystemStatus in the package pkg00_base_interfaces.
typedef struct pkg00_base_interfaces__msg__SystemStatus
{
  int32_t system_mode;
  int32_t work_status;
} pkg00_base_interfaces__msg__SystemStatus;

// Struct for a sequence of pkg00_base_interfaces__msg__SystemStatus.
typedef struct pkg00_base_interfaces__msg__SystemStatus__Sequence
{
  pkg00_base_interfaces__msg__SystemStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pkg00_base_interfaces__msg__SystemStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_
