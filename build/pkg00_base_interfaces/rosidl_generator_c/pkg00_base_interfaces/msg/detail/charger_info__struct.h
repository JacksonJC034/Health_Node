// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pkg00_base_interfaces:msg/ChargerInfo.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__CHARGER_INFO__STRUCT_H_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__CHARGER_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ChargerInfo in the package pkg00_base_interfaces.
typedef struct pkg00_base_interfaces__msg__ChargerInfo
{
  int32_t charger_status;
  int32_t status;
  int64_t error_code;
} pkg00_base_interfaces__msg__ChargerInfo;

// Struct for a sequence of pkg00_base_interfaces__msg__ChargerInfo.
typedef struct pkg00_base_interfaces__msg__ChargerInfo__Sequence
{
  pkg00_base_interfaces__msg__ChargerInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pkg00_base_interfaces__msg__ChargerInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__CHARGER_INFO__STRUCT_H_
