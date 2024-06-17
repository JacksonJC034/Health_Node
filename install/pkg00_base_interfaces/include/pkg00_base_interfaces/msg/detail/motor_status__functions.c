// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pkg00_base_interfaces:msg/MotorStatus.idl
// generated code does not contain a copyright notice
#include "pkg00_base_interfaces/msg/detail/motor_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
pkg00_base_interfaces__msg__MotorStatus__init(pkg00_base_interfaces__msg__MotorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  // error
  // current
  // speed
  // status
  // driver_init_status
  // odometer
  // encoder_location
  return true;
}

void
pkg00_base_interfaces__msg__MotorStatus__fini(pkg00_base_interfaces__msg__MotorStatus * msg)
{
  if (!msg) {
    return;
  }
  // mode
  // error
  // current
  // speed
  // status
  // driver_init_status
  // odometer
  // encoder_location
}

bool
pkg00_base_interfaces__msg__MotorStatus__are_equal(const pkg00_base_interfaces__msg__MotorStatus * lhs, const pkg00_base_interfaces__msg__MotorStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // error
  if (lhs->error != rhs->error) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // driver_init_status
  if (lhs->driver_init_status != rhs->driver_init_status) {
    return false;
  }
  // odometer
  if (lhs->odometer != rhs->odometer) {
    return false;
  }
  // encoder_location
  if (lhs->encoder_location != rhs->encoder_location) {
    return false;
  }
  return true;
}

bool
pkg00_base_interfaces__msg__MotorStatus__copy(
  const pkg00_base_interfaces__msg__MotorStatus * input,
  pkg00_base_interfaces__msg__MotorStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  // error
  output->error = input->error;
  // current
  output->current = input->current;
  // speed
  output->speed = input->speed;
  // status
  output->status = input->status;
  // driver_init_status
  output->driver_init_status = input->driver_init_status;
  // odometer
  output->odometer = input->odometer;
  // encoder_location
  output->encoder_location = input->encoder_location;
  return true;
}

pkg00_base_interfaces__msg__MotorStatus *
pkg00_base_interfaces__msg__MotorStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pkg00_base_interfaces__msg__MotorStatus * msg = (pkg00_base_interfaces__msg__MotorStatus *)allocator.allocate(sizeof(pkg00_base_interfaces__msg__MotorStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pkg00_base_interfaces__msg__MotorStatus));
  bool success = pkg00_base_interfaces__msg__MotorStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pkg00_base_interfaces__msg__MotorStatus__destroy(pkg00_base_interfaces__msg__MotorStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pkg00_base_interfaces__msg__MotorStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pkg00_base_interfaces__msg__MotorStatus__Sequence__init(pkg00_base_interfaces__msg__MotorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pkg00_base_interfaces__msg__MotorStatus * data = NULL;

  if (size) {
    data = (pkg00_base_interfaces__msg__MotorStatus *)allocator.zero_allocate(size, sizeof(pkg00_base_interfaces__msg__MotorStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pkg00_base_interfaces__msg__MotorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pkg00_base_interfaces__msg__MotorStatus__fini(&data[i - 1]);
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
pkg00_base_interfaces__msg__MotorStatus__Sequence__fini(pkg00_base_interfaces__msg__MotorStatus__Sequence * array)
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
      pkg00_base_interfaces__msg__MotorStatus__fini(&array->data[i]);
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

pkg00_base_interfaces__msg__MotorStatus__Sequence *
pkg00_base_interfaces__msg__MotorStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pkg00_base_interfaces__msg__MotorStatus__Sequence * array = (pkg00_base_interfaces__msg__MotorStatus__Sequence *)allocator.allocate(sizeof(pkg00_base_interfaces__msg__MotorStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pkg00_base_interfaces__msg__MotorStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pkg00_base_interfaces__msg__MotorStatus__Sequence__destroy(pkg00_base_interfaces__msg__MotorStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pkg00_base_interfaces__msg__MotorStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pkg00_base_interfaces__msg__MotorStatus__Sequence__are_equal(const pkg00_base_interfaces__msg__MotorStatus__Sequence * lhs, const pkg00_base_interfaces__msg__MotorStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pkg00_base_interfaces__msg__MotorStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pkg00_base_interfaces__msg__MotorStatus__Sequence__copy(
  const pkg00_base_interfaces__msg__MotorStatus__Sequence * input,
  pkg00_base_interfaces__msg__MotorStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pkg00_base_interfaces__msg__MotorStatus);
    pkg00_base_interfaces__msg__MotorStatus * data =
      (pkg00_base_interfaces__msg__MotorStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pkg00_base_interfaces__msg__MotorStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          pkg00_base_interfaces__msg__MotorStatus__fini(&data[i]);
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
    if (!pkg00_base_interfaces__msg__MotorStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
