// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pkg00_base_interfaces:msg/ColorInfo.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__COLOR_INFO__STRUCT_H_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__COLOR_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ColorInfo in the package pkg00_base_interfaces.
typedef struct pkg00_base_interfaces__msg__ColorInfo
{
  int32_t color_type;
} pkg00_base_interfaces__msg__ColorInfo;

// Struct for a sequence of pkg00_base_interfaces__msg__ColorInfo.
typedef struct pkg00_base_interfaces__msg__ColorInfo__Sequence
{
  pkg00_base_interfaces__msg__ColorInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pkg00_base_interfaces__msg__ColorInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__COLOR_INFO__STRUCT_H_
