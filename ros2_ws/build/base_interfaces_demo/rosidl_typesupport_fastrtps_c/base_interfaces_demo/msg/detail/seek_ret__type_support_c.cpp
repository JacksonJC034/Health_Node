// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from base_interfaces_demo:msg/SeekRet.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/seek_ret__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "base_interfaces_demo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "base_interfaces_demo/msg/detail/seek_ret__struct.h"
#include "base_interfaces_demo/msg/detail/seek_ret__functions.h"
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


using _SeekRet__ros_msg_type = base_interfaces_demo__msg__SeekRet;

static bool _SeekRet__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SeekRet__ros_msg_type * ros_message = static_cast<const _SeekRet__ros_msg_type *>(untyped_ros_message);
  // Field name: ret
  {
    cdr << ros_message->ret;
  }

  return true;
}

static bool _SeekRet__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SeekRet__ros_msg_type * ros_message = static_cast<_SeekRet__ros_msg_type *>(untyped_ros_message);
  // Field name: ret
  {
    cdr >> ros_message->ret;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t get_serialized_size_base_interfaces_demo__msg__SeekRet(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SeekRet__ros_msg_type * ros_message = static_cast<const _SeekRet__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ret
  {
    size_t item_size = sizeof(ros_message->ret);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SeekRet__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_base_interfaces_demo__msg__SeekRet(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_base_interfaces_demo
size_t max_serialized_size_base_interfaces_demo__msg__SeekRet(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: ret
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SeekRet__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_base_interfaces_demo__msg__SeekRet(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SeekRet = {
  "base_interfaces_demo::msg",
  "SeekRet",
  _SeekRet__cdr_serialize,
  _SeekRet__cdr_deserialize,
  _SeekRet__get_serialized_size,
  _SeekRet__max_serialized_size
};

static rosidl_message_type_support_t _SeekRet__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SeekRet,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, msg, SeekRet)() {
  return &_SeekRet__type_support;
}

#if defined(__cplusplus)
}
#endif
