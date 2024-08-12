// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces_demo:msg/DeviceInfo.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/device_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `disk_used`
#include "rosidl_runtime_c/string_functions.h"

bool
base_interfaces_demo__msg__DeviceInfo__init(base_interfaces_demo__msg__DeviceInfo * msg)
{
  if (!msg) {
    return false;
  }
  // cpu_used
  // cpu0_used
  // cpu1_used
  // cpu2_used
  // cpu3_used
  // disk_used
  if (!rosidl_runtime_c__String__init(&msg->disk_used)) {
    base_interfaces_demo__msg__DeviceInfo__fini(msg);
    return false;
  }
  // mem_used
  // ghz
  // network_status
  return true;
}

void
base_interfaces_demo__msg__DeviceInfo__fini(base_interfaces_demo__msg__DeviceInfo * msg)
{
  if (!msg) {
    return;
  }
  // cpu_used
  // cpu0_used
  // cpu1_used
  // cpu2_used
  // cpu3_used
  // disk_used
  rosidl_runtime_c__String__fini(&msg->disk_used);
  // mem_used
  // ghz
  // network_status
}

bool
base_interfaces_demo__msg__DeviceInfo__are_equal(const base_interfaces_demo__msg__DeviceInfo * lhs, const base_interfaces_demo__msg__DeviceInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cpu_used
  if (lhs->cpu_used != rhs->cpu_used) {
    return false;
  }
  // cpu0_used
  if (lhs->cpu0_used != rhs->cpu0_used) {
    return false;
  }
  // cpu1_used
  if (lhs->cpu1_used != rhs->cpu1_used) {
    return false;
  }
  // cpu2_used
  if (lhs->cpu2_used != rhs->cpu2_used) {
    return false;
  }
  // cpu3_used
  if (lhs->cpu3_used != rhs->cpu3_used) {
    return false;
  }
  // disk_used
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->disk_used), &(rhs->disk_used)))
  {
    return false;
  }
  // mem_used
  if (lhs->mem_used != rhs->mem_used) {
    return false;
  }
  // ghz
  if (lhs->ghz != rhs->ghz) {
    return false;
  }
  // network_status
  if (lhs->network_status != rhs->network_status) {
    return false;
  }
  return true;
}

bool
base_interfaces_demo__msg__DeviceInfo__copy(
  const base_interfaces_demo__msg__DeviceInfo * input,
  base_interfaces_demo__msg__DeviceInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // cpu_used
  output->cpu_used = input->cpu_used;
  // cpu0_used
  output->cpu0_used = input->cpu0_used;
  // cpu1_used
  output->cpu1_used = input->cpu1_used;
  // cpu2_used
  output->cpu2_used = input->cpu2_used;
  // cpu3_used
  output->cpu3_used = input->cpu3_used;
  // disk_used
  if (!rosidl_runtime_c__String__copy(
      &(input->disk_used), &(output->disk_used)))
  {
    return false;
  }
  // mem_used
  output->mem_used = input->mem_used;
  // ghz
  output->ghz = input->ghz;
  // network_status
  output->network_status = input->network_status;
  return true;
}

base_interfaces_demo__msg__DeviceInfo *
base_interfaces_demo__msg__DeviceInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__DeviceInfo * msg = (base_interfaces_demo__msg__DeviceInfo *)allocator.allocate(sizeof(base_interfaces_demo__msg__DeviceInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__msg__DeviceInfo));
  bool success = base_interfaces_demo__msg__DeviceInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__msg__DeviceInfo__destroy(base_interfaces_demo__msg__DeviceInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces_demo__msg__DeviceInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces_demo__msg__DeviceInfo__Sequence__init(base_interfaces_demo__msg__DeviceInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__DeviceInfo * data = NULL;

  if (size) {
    data = (base_interfaces_demo__msg__DeviceInfo *)allocator.zero_allocate(size, sizeof(base_interfaces_demo__msg__DeviceInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__msg__DeviceInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__msg__DeviceInfo__fini(&data[i - 1]);
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
base_interfaces_demo__msg__DeviceInfo__Sequence__fini(base_interfaces_demo__msg__DeviceInfo__Sequence * array)
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
      base_interfaces_demo__msg__DeviceInfo__fini(&array->data[i]);
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

base_interfaces_demo__msg__DeviceInfo__Sequence *
base_interfaces_demo__msg__DeviceInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__DeviceInfo__Sequence * array = (base_interfaces_demo__msg__DeviceInfo__Sequence *)allocator.allocate(sizeof(base_interfaces_demo__msg__DeviceInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__msg__DeviceInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__msg__DeviceInfo__Sequence__destroy(base_interfaces_demo__msg__DeviceInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces_demo__msg__DeviceInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces_demo__msg__DeviceInfo__Sequence__are_equal(const base_interfaces_demo__msg__DeviceInfo__Sequence * lhs, const base_interfaces_demo__msg__DeviceInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces_demo__msg__DeviceInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces_demo__msg__DeviceInfo__Sequence__copy(
  const base_interfaces_demo__msg__DeviceInfo__Sequence * input,
  base_interfaces_demo__msg__DeviceInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces_demo__msg__DeviceInfo);
    base_interfaces_demo__msg__DeviceInfo * data =
      (base_interfaces_demo__msg__DeviceInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces_demo__msg__DeviceInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          base_interfaces_demo__msg__DeviceInfo__fini(&data[i]);
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
    if (!base_interfaces_demo__msg__DeviceInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
