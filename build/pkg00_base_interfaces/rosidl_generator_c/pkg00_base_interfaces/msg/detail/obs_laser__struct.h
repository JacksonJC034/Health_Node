// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pkg00_base_interfaces:msg/ObsLaser.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__OBS_LASER__STRUCT_H_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__OBS_LASER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ObsLaser in the package pkg00_base_interfaces.
typedef struct pkg00_base_interfaces__msg__ObsLaser
{
  int32_t device_id;
  int32_t subpeak_quality;
  int32_t temp_code;
  int32_t subpeak_strength;
  int32_t mainpeak;
  int32_t mainpeak_correct;
  int32_t mainpeak_strength;
  int32_t sunlight_base;
} pkg00_base_interfaces__msg__ObsLaser;

// Struct for a sequence of pkg00_base_interfaces__msg__ObsLaser.
typedef struct pkg00_base_interfaces__msg__ObsLaser__Sequence
{
  pkg00_base_interfaces__msg__ObsLaser * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pkg00_base_interfaces__msg__ObsLaser__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__OBS_LASER__STRUCT_H_
