// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pkg00_base_interfaces:msg/LiftInfo.idl
// generated code does not contain a copyright notice
#include "pkg00_base_interfaces/msg/detail/lift_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
pkg00_base_interfaces__msg__LiftInfo__init(pkg00_base_interfaces__msg__LiftInfo * msg)
{
  if (!msg) {
    return false;
  }
  // lift_location
  // lift_base_location
  return true;
}

void
pkg00_base_interfaces__msg__LiftInfo__fini(pkg00_base_interfaces__msg__LiftInfo * msg)
{
  if (!msg) {
    return;
  }
  // lift_location
  // lift_base_location
}

bool
pkg00_base_interfaces__msg__LiftInfo__are_equal(const pkg00_base_interfaces__msg__LiftInfo * lhs, const pkg00_base_interfaces__msg__LiftInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lift_location
  if (lhs->lift_location != rhs->lift_location) {
    return false;
  }
  // lift_base_location
  if (lhs->lift_base_location != rhs->lift_base_location) {
    return false;
  }
  return true;
}

bool
pkg00_base_interfaces__msg__LiftInfo__copy(
  const pkg00_base_interfaces__msg__LiftInfo * input,
  pkg00_base_interfaces__msg__LiftInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // lift_location
  output->lift_location = input->lift_location;
  // lift_base_location
  output->lift_base_location = input->lift_base_location;
  return true;
}

pkg00_base_interfaces__msg__LiftInfo *
pkg00_base_interfaces__msg__LiftInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pkg00_base_interfaces__msg__LiftInfo * msg = (pkg00_base_interfaces__msg__LiftInfo *)allocator.allocate(sizeof(pkg00_base_interfaces__msg__LiftInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pkg00_base_interfaces__msg__LiftInfo));
  bool success = pkg00_base_interfaces__msg__LiftInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pkg00_base_interfaces__msg__LiftInfo__destroy(pkg00_base_interfaces__msg__LiftInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pkg00_base_interfaces__msg__LiftInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pkg00_base_interfaces__msg__LiftInfo__Sequence__init(pkg00_base_interfaces__msg__LiftInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pkg00_base_interfaces__msg__LiftInfo * data = NULL;

  if (size) {
    data = (pkg00_base_interfaces__msg__LiftInfo *)allocator.zero_allocate(size, sizeof(pkg00_base_interfaces__msg__LiftInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pkg00_base_interfaces__msg__LiftInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pkg00_base_interfaces__msg__LiftInfo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pkg00_base_interfaces__msg__LiftInfo__Sequence__fini(pkg00_base_interfaces__msg__LiftInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pkg00_base_interfaces__msg__LiftInfo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pkg00_base_interfaces__msg__LiftInfo__Sequence *
pkg00_base_interfaces__msg__LiftInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pkg00_base_interfaces__msg__LiftInfo__Sequence * array = (pkg00_base_interfaces__msg__LiftInfo__Sequence *)allocator.allocate(sizeof(pkg00_base_interfaces__msg__LiftInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pkg00_base_interfaces__msg__LiftInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pkg00_base_interfaces__msg__LiftInfo__Sequence__destroy(pkg00_base_interfaces__msg__LiftInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pkg00_base_interfaces__msg__LiftInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pkg00_base_interfaces__msg__LiftInfo__Sequence__are_equal(const pkg00_base_interfaces__msg__LiftInfo__Sequence * lhs, const pkg00_base_interfaces__msg__LiftInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pkg00_base_interfaces__msg__LiftInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pkg00_base_interfaces__msg__LiftInfo__Sequence__copy(
  const pkg00_base_interfaces__msg__LiftInfo__Sequence * input,
  pkg00_base_interfaces__msg__LiftInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pkg00_base_interfaces__msg__LiftInfo);
    pkg00_base_interfaces__msg__LiftInfo * data =
      (pkg00_base_interfaces__msg__LiftInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pkg00_base_interfaces__msg__LiftInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          pkg00_base_interfaces__msg__LiftInfo__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pkg00_base_interfaces__msg__LiftInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
