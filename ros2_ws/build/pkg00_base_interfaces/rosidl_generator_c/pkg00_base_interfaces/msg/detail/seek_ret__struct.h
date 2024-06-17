// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pkg00_base_interfaces:msg/SeekRet.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__SEEK_RET__STRUCT_H_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__SEEK_RET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SeekRet in the package pkg00_base_interfaces.
typedef struct pkg00_base_interfaces__msg__SeekRet
{
  int32_t ret;
} pkg00_base_interfaces__msg__SeekRet;

// Struct for a sequence of pkg00_base_interfaces__msg__SeekRet.
typedef struct pkg00_base_interfaces__msg__SeekRet__Sequence
{
  pkg00_base_interfaces__msg__SeekRet * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pkg00_base_interfaces__msg__SeekRet__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__SEEK_RET__STRUCT_H_
