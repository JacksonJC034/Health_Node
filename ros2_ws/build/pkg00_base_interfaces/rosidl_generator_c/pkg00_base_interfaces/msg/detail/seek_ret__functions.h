// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pkg00_base_interfaces:msg/SeekRet.idl
// generated code does not contain a copyright notice

#ifndef PKG00_BASE_INTERFACES__MSG__DETAIL__SEEK_RET__FUNCTIONS_H_
#define PKG00_BASE_INTERFACES__MSG__DETAIL__SEEK_RET__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pkg00_base_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "pkg00_base_interfaces/msg/detail/seek_ret__struct.h"

/// Initialize msg/SeekRet message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pkg00_base_interfaces__msg__SeekRet
 * )) before or use
 * pkg00_base_interfaces__msg__SeekRet__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pkg00_base_interfaces
bool
pkg00_base_interfaces__msg__SeekRet__init(pkg00_base_interfaces__msg__SeekRet * msg);

/// Finalize msg/SeekRet message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pkg00_base_interfaces
void
pkg00_base_interfaces__msg__SeekRet__fini(pkg00_base_interfaces__msg__SeekRet * msg);

/// Create msg/SeekRet message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pkg00_base_interfaces__msg__SeekRet__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pkg00_base_interfaces
pkg00_base_interfaces__msg__SeekRet *
pkg00_base_interfaces__msg__SeekRet__create();

/// Destroy msg/SeekRet message.
/**
 * It calls
 * pkg00_base_interfaces__msg__SeekRet__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pkg00_base_interfaces
void
pkg00_base_interfaces__msg__SeekRet__destroy(pkg00_base_interfaces__msg__SeekRet * msg);

/// Check for msg/SeekRet message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pkg00_base_interfaces
bool
pkg00_base_interfaces__msg__SeekRet__are_equal(const pkg00_base_interfaces__msg__SeekRet * lhs, const pkg00_base_interfaces__msg__SeekRet * rhs);

/// Copy a msg/SeekRet message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pkg00_base_interfaces
bool
pkg00_base_interfaces__msg__SeekRet__copy(
  const pkg00_base_interfaces__msg__SeekRet * input,
  pkg00_base_interfaces__msg__SeekRet * output);

/// Initialize array of msg/SeekRet messages.
/**
 * It allocates the memory for the number of elements and calls
 * pkg00_base_interfaces__msg__SeekRet__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pkg00_base_interfaces
bool
pkg00_base_interfaces__msg__SeekRet__Sequence__init(pkg00_base_interfaces__msg__SeekRet__Sequence * array, size_t size);

/// Finalize array of msg/SeekRet messages.
/**
 * It calls
 * pkg00_base_interfaces__msg__SeekRet__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pkg00_base_interfaces
void
pkg00_base_interfaces__msg__SeekRet__Sequence__fini(pkg00_base_interfaces__msg__SeekRet__Sequence * array);

/// Create array of msg/SeekRet messages.
/**
 * It allocates the memory for the array and calls
 * pkg00_base_interfaces__msg__SeekRet__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pkg00_base_interfaces
pkg00_base_interfaces__msg__SeekRet__Sequence *
pkg00_base_interfaces__msg__SeekRet__Sequence__create(size_t size);

/// Destroy array of msg/SeekRet messages.
/**
 * It calls
 * pkg00_base_interfaces__msg__SeekRet__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pkg00_base_interfaces
void
pkg00_base_interfaces__msg__SeekRet__Sequence__destroy(pkg00_base_interfaces__msg__SeekRet__Sequence * array);

/// Check for msg/SeekRet message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pkg00_base_interfaces
bool
pkg00_base_interfaces__msg__SeekRet__Sequence__are_equal(const pkg00_base_interfaces__msg__SeekRet__Sequence * lhs, const pkg00_base_interfaces__msg__SeekRet__Sequence * rhs);

/// Copy an array of msg/SeekRet messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pkg00_base_interfaces
bool
pkg00_base_interfaces__msg__SeekRet__Sequence__copy(
  const pkg00_base_interfaces__msg__SeekRet__Sequence * input,
  pkg00_base_interfaces__msg__SeekRet__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PKG00_BASE_INTERFACES__MSG__DETAIL__SEEK_RET__FUNCTIONS_H_
