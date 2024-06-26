// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pkg00_base_interfaces:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MotorStatus in the package pkg00_base_interfaces.
typedef struct pkg00_base_interfaces__msg__MotorStatus
{
  int32_t mode;
  int32_t error;
  int32_t current;
  int32_t speed;
  int32_t status;
  int32_t driver_init_status;
  int32_t odometer;
  int32_t encoder_location;
} pkg00_base_interfaces__msg__MotorStatus;

// Struct for a sequence of pkg00_base_interfaces__msg__MotorStatus.
typedef struct pkg00_base_interfaces__msg__MotorStatus__Sequence
{
  pkg00_base_interfaces__msg__MotorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pkg00_base_interfaces__msg__MotorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
