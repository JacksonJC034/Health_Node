// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pkg00_base_interfaces:msg/LiftInfo.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__LIFT_INFO__STRUCT_H_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__LIFT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/LiftInfo in the package pkg00_base_interfaces.
typedef struct pkg00_base_interfaces__msg__LiftInfo
{
  int32_t lift_location;
  int32_t lift_base_location;
} pkg00_base_interfaces__msg__LiftInfo;

// Struct for a sequence of pkg00_base_interfaces__msg__LiftInfo.
typedef struct pkg00_base_interfaces__msg__LiftInfo__Sequence
{
  pkg00_base_interfaces__msg__LiftInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pkg00_base_interfaces__msg__LiftInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__LIFT_INFO__STRUCT_H_
