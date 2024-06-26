// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pkg00_base_interfaces:msg/HallInfo.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__HALL_INFO__STRUCT_H_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__HALL_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/HallInfo in the package pkg00_base_interfaces.
typedef struct pkg00_base_interfaces__msg__HallInfo
{
  int32_t uid7;
  int32_t uid6;
  int32_t uid5;
  int32_t uid4;
  int32_t uid3;
  int32_t uid2;
  int32_t uid1;
  int32_t uid0;
  double f1;
  double f2;
  double f3;
  double f4;
  double b1;
  double b2;
  double b3;
  double b4;
  double l1;
  double l2;
  double l3;
  double l4;
  double r1;
  double r2;
  double r3;
  double r4;
  int32_t state;
} pkg00_base_interfaces__msg__HallInfo;

// Struct for a sequence of pkg00_base_interfaces__msg__HallInfo.
typedef struct pkg00_base_interfaces__msg__HallInfo__Sequence
{
  pkg00_base_interfaces__msg__HallInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pkg00_base_interfaces__msg__HallInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__HALL_INFO__STRUCT_H_
