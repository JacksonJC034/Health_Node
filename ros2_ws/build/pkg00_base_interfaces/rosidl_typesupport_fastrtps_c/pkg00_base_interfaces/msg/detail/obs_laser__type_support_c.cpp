// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from pkg00_base_interfaces:msg/ObsLaser.idl
// generated code does not contain a copyright notice
#include "pkg00_base_interfaces/msg/detail/obs_laser__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "pkg00_base_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pkg00_base_interfaces/msg/detail/obs_laser__struct.h"
#include "pkg00_base_interfaces/msg/detail/obs_laser__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ObsLaser__ros_msg_type = pkg00_base_interfaces__msg__ObsLaser;

static bool _ObsLaser__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ObsLaser__ros_msg_type * ros_message = static_cast<const _ObsLaser__ros_msg_type *>(untyped_ros_message);
  // Field name: device_id
  {
    cdr << ros_message->device_id;
  }

  // Field name: subpeak_quality
  {
    cdr << ros_message->subpeak_quality;
  }

  // Field name: temp_code
  {
    cdr << ros_message->temp_code;
  }

  // Field name: subpeak_strength
  {
    cdr << ros_message->subpeak_strength;
  }

  // Field name: mainpeak
  {
    cdr << ros_message->mainpeak;
  }

  // Field name: mainpeak_correct
  {
    cdr << ros_message->mainpeak_correct;
  }

  // Field name: mainpeak_strength
  {
    cdr << ros_message->mainpeak_strength;
  }

  // Field name: sunlight_base
  {
    cdr << ros_message->sunlight_base;
  }

  return true;
}

static bool _ObsLaser__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ObsLaser__ros_msg_type * ros_message = static_cast<_ObsLaser__ros_msg_type *>(untyped_ros_message);
  // Field name: device_id
  {
    cdr >> ros_message->device_id;
  }

  // Field name: subpeak_quality
  {
    cdr >> ros_message->subpeak_quality;
  }

  // Field name: temp_code
  {
    cdr >> ros_message->temp_code;
  }

  // Field name: subpeak_strength
  {
    cdr >> ros_message->subpeak_strength;
  }

  // Field name: mainpeak
  {
    cdr >> ros_message->mainpeak;
  }

  // Field name: mainpeak_correct
  {
    cdr >> ros_message->mainpeak_correct;
  }

  // Field name: mainpeak_strength
  {
    cdr >> ros_message->mainpeak_strength;
  }

  // Field name: sunlight_base
  {
    cdr >> ros_message->sunlight_base;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pkg00_base_interfaces
size_t get_serialized_size_pkg00_base_interfaces__msg__ObsLaser(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ObsLaser__ros_msg_type * ros_message = static_cast<const _ObsLaser__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name device_id
  {
    size_t item_size = sizeof(ros_message->device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name subpeak_quality
  {
    size_t item_size = sizeof(ros_message->subpeak_quality);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temp_code
  {
    size_t item_size = sizeof(ros_message->temp_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name subpeak_strength
  {
    size_t item_size = sizeof(ros_message->subpeak_strength);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mainpeak
  {
    size_t item_size = sizeof(ros_message->mainpeak);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mainpeak_correct
  {
    size_t item_size = sizeof(ros_message->mainpeak_correct);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mainpeak_strength
  {
    size_t item_size = sizeof(ros_message->mainpeak_strength);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sunlight_base
  {
    size_t item_size = sizeof(ros_message->sunlight_base);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ObsLaser__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_pkg00_base_interfaces__msg__ObsLaser(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pkg00_base_interfaces
size_t max_serialized_size_pkg00_base_interfaces__msg__ObsLaser(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: device_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: subpeak_quality
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temp_code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: subpeak_strength
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mainpeak
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mainpeak_correct
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mainpeak_strength
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sunlight_base
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ObsLaser__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_pkg00_base_interfaces__msg__ObsLaser(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ObsLaser = {
  "pkg00_base_interfaces::msg",
  "ObsLaser",
  _ObsLaser__cdr_serialize,
  _ObsLaser__cdr_deserialize,
  _ObsLaser__get_serialized_size,
  _ObsLaser__max_serialized_size
};

static rosidl_message_type_support_t _ObsLaser__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ObsLaser,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pkg00_base_interfaces, msg, ObsLaser)() {
  return &_ObsLaser__type_support;
}

#if defined(__cplusplus)
}
#endif
