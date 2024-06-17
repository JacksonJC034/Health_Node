// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from pkg00_base_interfaces:msg/SeekRet.idl
// generated code does not contain a copyright notice
#include "pkg00_base_interfaces/msg/detail/seek_ret__rosidl_typesupport_fastrtps_cpp.hpp"
#include "pkg00_base_interfaces/msg/detail/seek_ret__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace pkg00_base_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pkg00_base_interfaces
cdr_serialize(
  const pkg00_base_interfaces::msg::SeekRet & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ret
  cdr << ros_message.ret;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pkg00_base_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pkg00_base_interfaces::msg::SeekRet & ros_message)
{
  // Member: ret
  cdr >> ros_message.ret;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pkg00_base_interfaces
get_serialized_size(
  const pkg00_base_interfaces::msg::SeekRet & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: ret
  {
    size_t item_size = sizeof(ros_message.ret);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pkg00_base_interfaces
max_serialized_size_SeekRet(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: ret
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SeekRet__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const pkg00_base_interfaces::msg::SeekRet *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SeekRet__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<pkg00_base_interfaces::msg::SeekRet *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SeekRet__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const pkg00_base_interfaces::msg::SeekRet *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SeekRet__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SeekRet(full_bounded, 0);
}

static message_type_support_callbacks_t _SeekRet__callbacks = {
  "pkg00_base_interfaces::msg",
  "SeekRet",
  _SeekRet__cdr_serialize,
  _SeekRet__cdr_deserialize,
  _SeekRet__get_serialized_size,
  _SeekRet__max_serialized_size
};

static rosidl_message_type_support_t _SeekRet__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SeekRet__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace pkg00_base_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_pkg00_base_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<pkg00_base_interfaces::msg::SeekRet>()
{
  return &pkg00_base_interfaces::msg::typesupport_fastrtps_cpp::_SeekRet__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pkg00_base_interfaces, msg, SeekRet)() {
  return &pkg00_base_interfaces::msg::typesupport_fastrtps_cpp::_SeekRet__handle;
}

#ifdef __cplusplus
}
#endif
