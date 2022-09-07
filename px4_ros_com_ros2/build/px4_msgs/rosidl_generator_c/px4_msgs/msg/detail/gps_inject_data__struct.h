// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/GpsInjectData.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GPS_INJECT_DATA__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__GPS_INJECT_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ORB_QUEUE_LENGTH'.
enum
{
  px4_msgs__msg__GpsInjectData__ORB_QUEUE_LENGTH = 8
};

// Struct defined in msg/GpsInjectData in the package px4_msgs.
typedef struct px4_msgs__msg__GpsInjectData
{
  uint64_t timestamp;
  uint32_t device_id;
  uint8_t len;
  uint8_t flags;
  uint8_t data[300];
} px4_msgs__msg__GpsInjectData;

// Struct for a sequence of px4_msgs__msg__GpsInjectData.
typedef struct px4_msgs__msg__GpsInjectData__Sequence
{
  px4_msgs__msg__GpsInjectData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__GpsInjectData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__GPS_INJECT_DATA__STRUCT_H_