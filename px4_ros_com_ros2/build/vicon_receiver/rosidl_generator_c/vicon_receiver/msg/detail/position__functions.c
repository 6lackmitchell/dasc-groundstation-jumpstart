// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vicon_receiver:msg/Position.idl
// generated code does not contain a copyright notice
#include "vicon_receiver/msg/detail/position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `segment_name`
// Member `subject_name`
// Member `translation_type`
#include "rosidl_runtime_c/string_functions.h"

bool
vicon_receiver__msg__Position__init(vicon_receiver__msg__Position * msg)
{
  if (!msg) {
    return false;
  }
  // x_trans
  // y_trans
  // z_trans
  // x_rot
  // y_rot
  // z_rot
  // w
  // segment_name
  if (!rosidl_runtime_c__String__init(&msg->segment_name)) {
    vicon_receiver__msg__Position__fini(msg);
    return false;
  }
  // subject_name
  if (!rosidl_runtime_c__String__init(&msg->subject_name)) {
    vicon_receiver__msg__Position__fini(msg);
    return false;
  }
  // frame_number
  // translation_type
  if (!rosidl_runtime_c__String__init(&msg->translation_type)) {
    vicon_receiver__msg__Position__fini(msg);
    return false;
  }
  return true;
}

void
vicon_receiver__msg__Position__fini(vicon_receiver__msg__Position * msg)
{
  if (!msg) {
    return;
  }
  // x_trans
  // y_trans
  // z_trans
  // x_rot
  // y_rot
  // z_rot
  // w
  // segment_name
  rosidl_runtime_c__String__fini(&msg->segment_name);
  // subject_name
  rosidl_runtime_c__String__fini(&msg->subject_name);
  // frame_number
  // translation_type
  rosidl_runtime_c__String__fini(&msg->translation_type);
}

vicon_receiver__msg__Position *
vicon_receiver__msg__Position__create()
{
  vicon_receiver__msg__Position * msg = (vicon_receiver__msg__Position *)malloc(sizeof(vicon_receiver__msg__Position));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vicon_receiver__msg__Position));
  bool success = vicon_receiver__msg__Position__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
vicon_receiver__msg__Position__destroy(vicon_receiver__msg__Position * msg)
{
  if (msg) {
    vicon_receiver__msg__Position__fini(msg);
  }
  free(msg);
}


bool
vicon_receiver__msg__Position__Sequence__init(vicon_receiver__msg__Position__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  vicon_receiver__msg__Position * data = NULL;
  if (size) {
    data = (vicon_receiver__msg__Position *)calloc(size, sizeof(vicon_receiver__msg__Position));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vicon_receiver__msg__Position__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vicon_receiver__msg__Position__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
vicon_receiver__msg__Position__Sequence__fini(vicon_receiver__msg__Position__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vicon_receiver__msg__Position__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

vicon_receiver__msg__Position__Sequence *
vicon_receiver__msg__Position__Sequence__create(size_t size)
{
  vicon_receiver__msg__Position__Sequence * array = (vicon_receiver__msg__Position__Sequence *)malloc(sizeof(vicon_receiver__msg__Position__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = vicon_receiver__msg__Position__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
vicon_receiver__msg__Position__Sequence__destroy(vicon_receiver__msg__Position__Sequence * array)
{
  if (array) {
    vicon_receiver__msg__Position__Sequence__fini(array);
  }
  free(array);
}
