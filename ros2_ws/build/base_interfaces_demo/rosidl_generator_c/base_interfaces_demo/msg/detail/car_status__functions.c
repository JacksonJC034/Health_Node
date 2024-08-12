// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces_demo:msg/CarStatus.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/car_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
base_interfaces_demo__msg__CarStatus__init(base_interfaces_demo__msg__CarStatus * msg)
{
  if (!msg) {
    return false;
  }
  // task_state
  // initializing
  // checking
  // releasing
  // driving
  // fine_positioning
  // on_tag
  // on_track
  // error
  // warning
  // estop
  // sleeping
  // load
  // charging
  // mode
  // stand_alone_state
  return true;
}

void
base_interfaces_demo__msg__CarStatus__fini(base_interfaces_demo__msg__CarStatus * msg)
{
  if (!msg) {
    return;
  }
  // task_state
  // initializing
  // checking
  // releasing
  // driving
  // fine_positioning
  // on_tag
  // on_track
  // error
  // warning
  // estop
  // sleeping
  // load
  // charging
  // mode
  // stand_alone_state
}

bool
base_interfaces_demo__msg__CarStatus__are_equal(const base_interfaces_demo__msg__CarStatus * lhs, const base_interfaces_demo__msg__CarStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // task_state
  if (lhs->task_state != rhs->task_state) {
    return false;
  }
  // initializing
  if (lhs->initializing != rhs->initializing) {
    return false;
  }
  // checking
  if (lhs->checking != rhs->checking) {
    return false;
  }
  // releasing
  if (lhs->releasing != rhs->releasing) {
    return false;
  }
  // driving
  if (lhs->driving != rhs->driving) {
    return false;
  }
  // fine_positioning
  if (lhs->fine_positioning != rhs->fine_positioning) {
    return false;
  }
  // on_tag
  if (lhs->on_tag != rhs->on_tag) {
    return false;
  }
  // on_track
  if (lhs->on_track != rhs->on_track) {
    return false;
  }
  // error
  if (lhs->error != rhs->error) {
    return false;
  }
  // warning
  if (lhs->warning != rhs->warning) {
    return false;
  }
  // estop
  if (lhs->estop != rhs->estop) {
    return false;
  }
  // sleeping
  if (lhs->sleeping != rhs->sleeping) {
    return false;
  }
  // load
  if (lhs->load != rhs->load) {
    return false;
  }
  // charging
  if (lhs->charging != rhs->charging) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // stand_alone_state
  if (lhs->stand_alone_state != rhs->stand_alone_state) {
    return false;
  }
  return true;
}

bool
base_interfaces_demo__msg__CarStatus__copy(
  const base_interfaces_demo__msg__CarStatus * input,
  base_interfaces_demo__msg__CarStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // task_state
  output->task_state = input->task_state;
  // initializing
  output->initializing = input->initializing;
  // checking
  output->checking = input->checking;
  // releasing
  output->releasing = input->releasing;
  // driving
  output->driving = input->driving;
  // fine_positioning
  output->fine_positioning = input->fine_positioning;
  // on_tag
  output->on_tag = input->on_tag;
  // on_track
  output->on_track = input->on_track;
  // error
  output->error = input->error;
  // warning
  output->warning = input->warning;
  // estop
  output->estop = input->estop;
  // sleeping
  output->sleeping = input->sleeping;
  // load
  output->load = input->load;
  // charging
  output->charging = input->charging;
  // mode
  output->mode = input->mode;
  // stand_alone_state
  output->stand_alone_state = input->stand_alone_state;
  return true;
}

base_interfaces_demo__msg__CarStatus *
base_interfaces_demo__msg__CarStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__CarStatus * msg = (base_interfaces_demo__msg__CarStatus *)allocator.allocate(sizeof(base_interfaces_demo__msg__CarStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__msg__CarStatus));
  bool success = base_interfaces_demo__msg__CarStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__msg__CarStatus__destroy(base_interfaces_demo__msg__CarStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces_demo__msg__CarStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces_demo__msg__CarStatus__Sequence__init(base_interfaces_demo__msg__CarStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__CarStatus * data = NULL;

  if (size) {
    data = (base_interfaces_demo__msg__CarStatus *)allocator.zero_allocate(size, sizeof(base_interfaces_demo__msg__CarStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__msg__CarStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__msg__CarStatus__fini(&data[i - 1]);
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
base_interfaces_demo__msg__CarStatus__Sequence__fini(base_interfaces_demo__msg__CarStatus__Sequence * array)
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
      base_interfaces_demo__msg__CarStatus__fini(&array->data[i]);
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

base_interfaces_demo__msg__CarStatus__Sequence *
base_interfaces_demo__msg__CarStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__CarStatus__Sequence * array = (base_interfaces_demo__msg__CarStatus__Sequence *)allocator.allocate(sizeof(base_interfaces_demo__msg__CarStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__msg__CarStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__msg__CarStatus__Sequence__destroy(base_interfaces_demo__msg__CarStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces_demo__msg__CarStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces_demo__msg__CarStatus__Sequence__are_equal(const base_interfaces_demo__msg__CarStatus__Sequence * lhs, const base_interfaces_demo__msg__CarStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces_demo__msg__CarStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces_demo__msg__CarStatus__Sequence__copy(
  const base_interfaces_demo__msg__CarStatus__Sequence * input,
  base_interfaces_demo__msg__CarStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces_demo__msg__CarStatus);
    base_interfaces_demo__msg__CarStatus * data =
      (base_interfaces_demo__msg__CarStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces_demo__msg__CarStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          base_interfaces_demo__msg__CarStatus__fini(&data[i]);
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
    if (!base_interfaces_demo__msg__CarStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}