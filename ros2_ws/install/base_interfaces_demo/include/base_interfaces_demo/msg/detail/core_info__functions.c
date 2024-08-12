// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces_demo:msg/CoreInfo.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/core_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `nic_status`
#include "rosidl_runtime_c/string_functions.h"

bool
base_interfaces_demo__msg__CoreInfo__init(base_interfaces_demo__msg__CoreInfo * msg)
{
  if (!msg) {
    return false;
  }
  // cpu_usage
  // memory_usage
  // disk_usage
  // cpu_frequency
  // nic_status
  if (!rosidl_runtime_c__String__init(&msg->nic_status)) {
    base_interfaces_demo__msg__CoreInfo__fini(msg);
    return false;
  }
  // temperature
  return true;
}

void
base_interfaces_demo__msg__CoreInfo__fini(base_interfaces_demo__msg__CoreInfo * msg)
{
  if (!msg) {
    return;
  }
  // cpu_usage
  // memory_usage
  // disk_usage
  // cpu_frequency
  // nic_status
  rosidl_runtime_c__String__fini(&msg->nic_status);
  // temperature
}

bool
base_interfaces_demo__msg__CoreInfo__are_equal(const base_interfaces_demo__msg__CoreInfo * lhs, const base_interfaces_demo__msg__CoreInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cpu_usage
  if (lhs->cpu_usage != rhs->cpu_usage) {
    return false;
  }
  // memory_usage
  if (lhs->memory_usage != rhs->memory_usage) {
    return false;
  }
  // disk_usage
  if (lhs->disk_usage != rhs->disk_usage) {
    return false;
  }
  // cpu_frequency
  if (lhs->cpu_frequency != rhs->cpu_frequency) {
    return false;
  }
  // nic_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->nic_status), &(rhs->nic_status)))
  {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  return true;
}

bool
base_interfaces_demo__msg__CoreInfo__copy(
  const base_interfaces_demo__msg__CoreInfo * input,
  base_interfaces_demo__msg__CoreInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // cpu_usage
  output->cpu_usage = input->cpu_usage;
  // memory_usage
  output->memory_usage = input->memory_usage;
  // disk_usage
  output->disk_usage = input->disk_usage;
  // cpu_frequency
  output->cpu_frequency = input->cpu_frequency;
  // nic_status
  if (!rosidl_runtime_c__String__copy(
      &(input->nic_status), &(output->nic_status)))
  {
    return false;
  }
  // temperature
  output->temperature = input->temperature;
  return true;
}

base_interfaces_demo__msg__CoreInfo *
base_interfaces_demo__msg__CoreInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__CoreInfo * msg = (base_interfaces_demo__msg__CoreInfo *)allocator.allocate(sizeof(base_interfaces_demo__msg__CoreInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__msg__CoreInfo));
  bool success = base_interfaces_demo__msg__CoreInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__msg__CoreInfo__destroy(base_interfaces_demo__msg__CoreInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces_demo__msg__CoreInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces_demo__msg__CoreInfo__Sequence__init(base_interfaces_demo__msg__CoreInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__CoreInfo * data = NULL;

  if (size) {
    data = (base_interfaces_demo__msg__CoreInfo *)allocator.zero_allocate(size, sizeof(base_interfaces_demo__msg__CoreInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__msg__CoreInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__msg__CoreInfo__fini(&data[i - 1]);
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
base_interfaces_demo__msg__CoreInfo__Sequence__fini(base_interfaces_demo__msg__CoreInfo__Sequence * array)
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
      base_interfaces_demo__msg__CoreInfo__fini(&array->data[i]);
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

base_interfaces_demo__msg__CoreInfo__Sequence *
base_interfaces_demo__msg__CoreInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__CoreInfo__Sequence * array = (base_interfaces_demo__msg__CoreInfo__Sequence *)allocator.allocate(sizeof(base_interfaces_demo__msg__CoreInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__msg__CoreInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__msg__CoreInfo__Sequence__destroy(base_interfaces_demo__msg__CoreInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces_demo__msg__CoreInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces_demo__msg__CoreInfo__Sequence__are_equal(const base_interfaces_demo__msg__CoreInfo__Sequence * lhs, const base_interfaces_demo__msg__CoreInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces_demo__msg__CoreInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces_demo__msg__CoreInfo__Sequence__copy(
  const base_interfaces_demo__msg__CoreInfo__Sequence * input,
  base_interfaces_demo__msg__CoreInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces_demo__msg__CoreInfo);
    base_interfaces_demo__msg__CoreInfo * data =
      (base_interfaces_demo__msg__CoreInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces_demo__msg__CoreInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          base_interfaces_demo__msg__CoreInfo__fini(&data[i]);
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
    if (!base_interfaces_demo__msg__CoreInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
