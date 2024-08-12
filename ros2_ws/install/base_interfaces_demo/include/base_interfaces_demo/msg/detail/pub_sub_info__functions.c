// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces_demo:msg/PubSubInfo.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/pub_sub_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `text`
#include "rosidl_runtime_c/string_functions.h"

bool
base_interfaces_demo__msg__PubSubInfo__init(base_interfaces_demo__msg__PubSubInfo * msg)
{
  if (!msg) {
    return false;
  }
  // current_x
  // current_y
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    base_interfaces_demo__msg__PubSubInfo__fini(msg);
    return false;
  }
  // type
  return true;
}

void
base_interfaces_demo__msg__PubSubInfo__fini(base_interfaces_demo__msg__PubSubInfo * msg)
{
  if (!msg) {
    return;
  }
  // current_x
  // current_y
  // text
  rosidl_runtime_c__String__fini(&msg->text);
  // type
}

bool
base_interfaces_demo__msg__PubSubInfo__are_equal(const base_interfaces_demo__msg__PubSubInfo * lhs, const base_interfaces_demo__msg__PubSubInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_x
  if (lhs->current_x != rhs->current_x) {
    return false;
  }
  // current_y
  if (lhs->current_y != rhs->current_y) {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->text), &(rhs->text)))
  {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  return true;
}

bool
base_interfaces_demo__msg__PubSubInfo__copy(
  const base_interfaces_demo__msg__PubSubInfo * input,
  base_interfaces_demo__msg__PubSubInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // current_x
  output->current_x = input->current_x;
  // current_y
  output->current_y = input->current_y;
  // text
  if (!rosidl_runtime_c__String__copy(
      &(input->text), &(output->text)))
  {
    return false;
  }
  // type
  output->type = input->type;
  return true;
}

base_interfaces_demo__msg__PubSubInfo *
base_interfaces_demo__msg__PubSubInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__PubSubInfo * msg = (base_interfaces_demo__msg__PubSubInfo *)allocator.allocate(sizeof(base_interfaces_demo__msg__PubSubInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__msg__PubSubInfo));
  bool success = base_interfaces_demo__msg__PubSubInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__msg__PubSubInfo__destroy(base_interfaces_demo__msg__PubSubInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces_demo__msg__PubSubInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces_demo__msg__PubSubInfo__Sequence__init(base_interfaces_demo__msg__PubSubInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__PubSubInfo * data = NULL;

  if (size) {
    data = (base_interfaces_demo__msg__PubSubInfo *)allocator.zero_allocate(size, sizeof(base_interfaces_demo__msg__PubSubInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__msg__PubSubInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__msg__PubSubInfo__fini(&data[i - 1]);
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
base_interfaces_demo__msg__PubSubInfo__Sequence__fini(base_interfaces_demo__msg__PubSubInfo__Sequence * array)
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
      base_interfaces_demo__msg__PubSubInfo__fini(&array->data[i]);
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

base_interfaces_demo__msg__PubSubInfo__Sequence *
base_interfaces_demo__msg__PubSubInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__PubSubInfo__Sequence * array = (base_interfaces_demo__msg__PubSubInfo__Sequence *)allocator.allocate(sizeof(base_interfaces_demo__msg__PubSubInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__msg__PubSubInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__msg__PubSubInfo__Sequence__destroy(base_interfaces_demo__msg__PubSubInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces_demo__msg__PubSubInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces_demo__msg__PubSubInfo__Sequence__are_equal(const base_interfaces_demo__msg__PubSubInfo__Sequence * lhs, const base_interfaces_demo__msg__PubSubInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces_demo__msg__PubSubInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces_demo__msg__PubSubInfo__Sequence__copy(
  const base_interfaces_demo__msg__PubSubInfo__Sequence * input,
  base_interfaces_demo__msg__PubSubInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces_demo__msg__PubSubInfo);
    base_interfaces_demo__msg__PubSubInfo * data =
      (base_interfaces_demo__msg__PubSubInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces_demo__msg__PubSubInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          base_interfaces_demo__msg__PubSubInfo__fini(&data[i]);
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
    if (!base_interfaces_demo__msg__PubSubInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
