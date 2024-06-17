// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pkg00_base_interfaces:msg/MotorCmd.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__MOTOR_CMD__STRUCT_H_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__MOTOR_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MotorCmd in the package pkg00_base_interfaces.
typedef struct pkg00_base_interfaces__msg__MotorCmd
{
  int32_t speed;
  int32_t cmd;
  int32_t mode;
  int32_t acc;
  int32_t dec;
  int32_t control;
  int32_t location;
} pkg00_base_interfaces__msg__MotorCmd;

// Struct for a sequence of pkg00_base_interfaces__msg__MotorCmd.
typedef struct pkg00_base_interfaces__msg__MotorCmd__Sequence
{
  pkg00_base_interfaces__msg__MotorCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pkg00_base_interfaces__msg__MotorCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__MOTOR_CMD__STRUCT_H_
