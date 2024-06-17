// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pkg00_base_interfaces:msg/ObsLaser.idl
// generated code does not contain a copyright notice
#include "pkg00_base_interfaces/msg/detail/obs_laser__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
pkg00_base_interfaces__msg__ObsLaser__init(pkg00_base_interfaces__msg__ObsLaser * msg)
{
  if (!msg) {
    return false;
  }
  // device_id
  // subpeak_quality
  // temp_code
  // subpeak_strength
  // mainpeak
  // mainpeak_correct
  // mainpeak_strength
  // sunlight_base
  return true;
}

void
pkg00_base_interfaces__msg__ObsLaser__fini(pkg00_base_interfaces__msg__ObsLaser * msg)
{
  if (!msg) {
    return;
  }
  // device_id
  // subpeak_quality
  // temp_code
  // subpeak_strength
  // mainpeak
  // mainpeak_correct
  // mainpeak_strength
  // sunlight_base
}

bool
pkg00_base_interfaces__msg__ObsLaser__are_equal(const pkg00_base_interfaces__msg__ObsLaser * lhs, const pkg00_base_interfaces__msg__ObsLaser * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // device_id
  if (lhs->device_id != rhs->device_id) {
    return false;
  }
  // subpeak_quality
  if (lhs->subpeak_quality != rhs->subpeak_quality) {
    return false;
  }
  // temp_code
  if (lhs->temp_code != rhs->temp_code) {
    return false;
  }
  // subpeak_strength
  if (lhs->subpeak_strength != rhs->subpeak_strength) {
    return false;
  }
  // mainpeak
  if (lhs->mainpeak != rhs->mainpeak) {
    return false;
  }
  // mainpeak_correct
  if (lhs->mainpeak_correct != rhs->mainpeak_correct) {
    return false;
  }
  // mainpeak_strength
  if (lhs->mainpeak_strength != rhs->mainpeak_strength) {
    return false;
  }
  // sunlight_base
  if (lhs->sunlight_base != rhs->sunlight_base) {
    return false;
  }
  return true;
}

bool
pkg00_base_interfaces__msg__ObsLaser__copy(
  const pkg00_base_interfaces__msg__ObsLaser * input,
  pkg00_base_interfaces__msg__ObsLaser * output)
{
  if (!input || !output) {
    return false;
  }
  // device_id
  output->device_id = input->device_id;
  // subpeak_quality
  output->subpeak_quality = input->subpeak_quality;
  // temp_code
  output->temp_code = input->temp_code;
  // subpeak_strength
  output->subpeak_strength = input->subpeak_strength;
  // mainpeak
  output->mainpeak = input->mainpeak;
  // mainpeak_correct
  output->mainpeak_correct = input->mainpeak_correct;
  // mainpeak_strength
  output->mainpeak_strength = input->mainpeak_strength;
  // sunlight_base
  output->sunlight_base = input->sunlight_base;
  return true;
}

pkg00_base_interfaces__msg__ObsLaser *
pkg00_base_interfaces__msg__ObsLaser__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pkg00_base_interfaces__msg__ObsLaser * msg = (pkg00_base_interfaces__msg__ObsLaser *)allocator.allocate(sizeof(pkg00_base_interfaces__msg__ObsLaser), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pkg00_base_interfaces__msg__ObsLaser));
  bool success = pkg00_base_interfaces__msg__ObsLaser__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pkg00_base_interfaces__msg__ObsLaser__destroy(pkg00_base_interfaces__msg__ObsLaser * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pkg00_base_interfaces__msg__ObsLaser__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pkg00_base_interfaces__msg__ObsLaser__Sequence__init(pkg00_base_interfaces__msg__ObsLaser__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pkg00_base_interfaces__msg__ObsLaser * data = NULL;

  if (size) {
    data = (pkg00_base_interfaces__msg__ObsLaser *)allocator.zero_allocate(size, sizeof(pkg00_base_interfaces__msg__ObsLaser), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pkg00_base_interfaces__msg__ObsLaser__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pkg00_base_interfaces__msg__ObsLaser__fini(&data[i - 1]);
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
pkg00_base_interfaces__msg__ObsLaser__Sequence__fini(pkg00_base_interfaces__msg__ObsLaser__Sequence * array)
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
      pkg00_base_interfaces__msg__ObsLaser__fini(&array->data[i]);
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

pkg00_base_interfaces__msg__ObsLaser__Sequence *
pkg00_base_interfaces__msg__ObsLaser__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pkg00_base_interfaces__msg__ObsLaser__Sequence * array = (pkg00_base_interfaces__msg__ObsLaser__Sequence *)allocator.allocate(sizeof(pkg00_base_interfaces__msg__ObsLaser__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pkg00_base_interfaces__msg__ObsLaser__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pkg00_base_interfaces__msg__ObsLaser__Sequence__destroy(pkg00_base_interfaces__msg__ObsLaser__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pkg00_base_interfaces__msg__ObsLaser__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pkg00_base_interfaces__msg__ObsLaser__Sequence__are_equal(const pkg00_base_interfaces__msg__ObsLaser__Sequence * lhs, const pkg00_base_interfaces__msg__ObsLaser__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pkg00_base_interfaces__msg__ObsLaser__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pkg00_base_interfaces__msg__ObsLaser__Sequence__copy(
  const pkg00_base_interfaces__msg__ObsLaser__Sequence * input,
  pkg00_base_interfaces__msg__ObsLaser__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pkg00_base_interfaces__msg__ObsLaser);
    pkg00_base_interfaces__msg__ObsLaser * data =
      (pkg00_base_interfaces__msg__ObsLaser *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pkg00_base_interfaces__msg__ObsLaser__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          pkg00_base_interfaces__msg__ObsLaser__fini(&data[i]);
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
    if (!pkg00_base_interfaces__msg__ObsLaser__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
