// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from base_interfaces_demo:msg/DeviceInfo.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/device_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "base_interfaces_demo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "base_interfaces_demo/msg/detail/device_info__struct.h"
#include "base_interfaces_demo/msg/detail/device_info__functions.h"
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

#include "rosidl_runtime_c/string.h"  // disk_used
#include "rosidl_runtime_c/string_functions.h"  // disk_used

// forward declare type support functions


using _DeviceInfo__ros_msg_type = base_interfaces_demo__msg__DeviceInfo;

static bool _DeviceInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DeviceInfo__ros_msg_type * ros_message = static_cast<const _DeviceInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: cpu_used
  {
    cdr << ros_message->cpu_used;
  }

  // Field name: cpu0_used
  {
    cdr << ros_message->cpu0_used;
  }

  // Field name: cpu1_used
  {
    cdr << ros_message->cpu1_used;
  }

  // Field name: cpu2_used
  {
    cdr << ros_message->cpu2_used;
  }

  // Field name: cpu3_used
  {
    cdr << ros_message->cpu3_used;
  }

  // Field name: disk_used
  {
    const rosidl_runtime_c__String * str = &ros_message->disk_used;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: mem_used
  {
    cdr << ros_message->mem_used;
  }

  // Field name: ghz
  {
    cdr << ros_message->ghz;
  }

  // Field name: network_status
  {
    cdr << ros_message->network_status;
  }

  return true;
}

static bool _DeviceInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DeviceInfo__ros_msg_type * ros_message = static_cast<_DeviceInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: cpu_used
  {
    cdr >> ros_message->cpu_used;
  }

  // Field name: cpu0_used
  {
    cdr >> ros_message->cpu0_used;
  }

  // Field name: cpu1_used
  {
    cdr >> ros_message->cpu1_used;
  }

  // Field name: cpu2_used
  {
    cdr >> ros_message->cpu2_used;
  }

  // Field name: cpu3_used
  {
    cdr >> ros_message->cpu3_used;
  }

  // Field name: disk_used
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->disk_used.data) {
      rosidl_runtime_c__String__init(&ros_message->disk_used);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->disk_used,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'disk_used'\n");
      return false;
    }
  }

  // Field name: mem_used
  {
    cdr >> ros_message->mem_used;
  }

  // Field name: ghz
  {
    cdr >> ros_message->ghz;
  }

  // Field name: network_status
  {
    cdr >> ros_message->network_status;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t get_serialized_size_base_interfaces_demo__msg__DeviceInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DeviceInfo__ros_msg_type * ros_message = static_cast<const _DeviceInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cpu_used
  {
    size_t item_size = sizeof(ros_message->cpu_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cpu0_used
  {
    size_t item_size = sizeof(ros_message->cpu0_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cpu1_used
  {
    size_t item_size = sizeof(ros_message->cpu1_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cpu2_used
  {
    size_t item_size = sizeof(ros_message->cpu2_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cpu3_used
  {
    size_t item_size = sizeof(ros_message->cpu3_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name disk_used
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->disk_used.size + 1);
  // field.name mem_used
  {
    size_t item_size = sizeof(ros_message->mem_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ghz
  {
    size_t item_size = sizeof(ros_message->ghz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name network_status
  {
    size_t item_size = sizeof(ros_message->network_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DeviceInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_base_interfaces_demo__msg__DeviceInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t max_serialized_size_base_interfaces_demo__msg__DeviceInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: cpu_used
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cpu0_used
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cpu1_used
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cpu2_used
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cpu3_used
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: disk_used
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: mem_used
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ghz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: network_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _DeviceInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_base_interfaces_demo__msg__DeviceInfo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DeviceInfo = {
  "base_interfaces_demo::msg",
  "DeviceInfo",
  _DeviceInfo__cdr_serialize,
  _DeviceInfo__cdr_deserialize,
  _DeviceInfo__get_serialized_size,
  _DeviceInfo__max_serialized_size
};

static rosidl_message_type_support_t _DeviceInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DeviceInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, msg, DeviceInfo)() {
  return &_DeviceInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
