// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from battery_monitoring:srv/RobotBatteryStatus.idl
// generated code does not contain a copyright notice
#include "battery_monitoring/srv/detail/robot_battery_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
battery_monitoring__srv__RobotBatteryStatus_Request__init(battery_monitoring__srv__RobotBatteryStatus_Request * msg)
{
  if (!msg) {
    return false;
  }
  // batterynum
  return true;
}

void
battery_monitoring__srv__RobotBatteryStatus_Request__fini(battery_monitoring__srv__RobotBatteryStatus_Request * msg)
{
  if (!msg) {
    return;
  }
  // batterynum
}

battery_monitoring__srv__RobotBatteryStatus_Request *
battery_monitoring__srv__RobotBatteryStatus_Request__create()
{
  battery_monitoring__srv__RobotBatteryStatus_Request * msg = (battery_monitoring__srv__RobotBatteryStatus_Request *)malloc(sizeof(battery_monitoring__srv__RobotBatteryStatus_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(battery_monitoring__srv__RobotBatteryStatus_Request));
  bool success = battery_monitoring__srv__RobotBatteryStatus_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
battery_monitoring__srv__RobotBatteryStatus_Request__destroy(battery_monitoring__srv__RobotBatteryStatus_Request * msg)
{
  if (msg) {
    battery_monitoring__srv__RobotBatteryStatus_Request__fini(msg);
  }
  free(msg);
}


bool
battery_monitoring__srv__RobotBatteryStatus_Request__Sequence__init(battery_monitoring__srv__RobotBatteryStatus_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  battery_monitoring__srv__RobotBatteryStatus_Request * data = NULL;
  if (size) {
    data = (battery_monitoring__srv__RobotBatteryStatus_Request *)calloc(size, sizeof(battery_monitoring__srv__RobotBatteryStatus_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = battery_monitoring__srv__RobotBatteryStatus_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        battery_monitoring__srv__RobotBatteryStatus_Request__fini(&data[i - 1]);
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
battery_monitoring__srv__RobotBatteryStatus_Request__Sequence__fini(battery_monitoring__srv__RobotBatteryStatus_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      battery_monitoring__srv__RobotBatteryStatus_Request__fini(&array->data[i]);
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

battery_monitoring__srv__RobotBatteryStatus_Request__Sequence *
battery_monitoring__srv__RobotBatteryStatus_Request__Sequence__create(size_t size)
{
  battery_monitoring__srv__RobotBatteryStatus_Request__Sequence * array = (battery_monitoring__srv__RobotBatteryStatus_Request__Sequence *)malloc(sizeof(battery_monitoring__srv__RobotBatteryStatus_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = battery_monitoring__srv__RobotBatteryStatus_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
battery_monitoring__srv__RobotBatteryStatus_Request__Sequence__destroy(battery_monitoring__srv__RobotBatteryStatus_Request__Sequence * array)
{
  if (array) {
    battery_monitoring__srv__RobotBatteryStatus_Request__Sequence__fini(array);
  }
  free(array);
}


bool
battery_monitoring__srv__RobotBatteryStatus_Response__init(battery_monitoring__srv__RobotBatteryStatus_Response * msg)
{
  if (!msg) {
    return false;
  }
  // percentage
  return true;
}

void
battery_monitoring__srv__RobotBatteryStatus_Response__fini(battery_monitoring__srv__RobotBatteryStatus_Response * msg)
{
  if (!msg) {
    return;
  }
  // percentage
}

battery_monitoring__srv__RobotBatteryStatus_Response *
battery_monitoring__srv__RobotBatteryStatus_Response__create()
{
  battery_monitoring__srv__RobotBatteryStatus_Response * msg = (battery_monitoring__srv__RobotBatteryStatus_Response *)malloc(sizeof(battery_monitoring__srv__RobotBatteryStatus_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(battery_monitoring__srv__RobotBatteryStatus_Response));
  bool success = battery_monitoring__srv__RobotBatteryStatus_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
battery_monitoring__srv__RobotBatteryStatus_Response__destroy(battery_monitoring__srv__RobotBatteryStatus_Response * msg)
{
  if (msg) {
    battery_monitoring__srv__RobotBatteryStatus_Response__fini(msg);
  }
  free(msg);
}


bool
battery_monitoring__srv__RobotBatteryStatus_Response__Sequence__init(battery_monitoring__srv__RobotBatteryStatus_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  battery_monitoring__srv__RobotBatteryStatus_Response * data = NULL;
  if (size) {
    data = (battery_monitoring__srv__RobotBatteryStatus_Response *)calloc(size, sizeof(battery_monitoring__srv__RobotBatteryStatus_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = battery_monitoring__srv__RobotBatteryStatus_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        battery_monitoring__srv__RobotBatteryStatus_Response__fini(&data[i - 1]);
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
battery_monitoring__srv__RobotBatteryStatus_Response__Sequence__fini(battery_monitoring__srv__RobotBatteryStatus_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      battery_monitoring__srv__RobotBatteryStatus_Response__fini(&array->data[i]);
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

battery_monitoring__srv__RobotBatteryStatus_Response__Sequence *
battery_monitoring__srv__RobotBatteryStatus_Response__Sequence__create(size_t size)
{
  battery_monitoring__srv__RobotBatteryStatus_Response__Sequence * array = (battery_monitoring__srv__RobotBatteryStatus_Response__Sequence *)malloc(sizeof(battery_monitoring__srv__RobotBatteryStatus_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = battery_monitoring__srv__RobotBatteryStatus_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
battery_monitoring__srv__RobotBatteryStatus_Response__Sequence__destroy(battery_monitoring__srv__RobotBatteryStatus_Response__Sequence * array)
{
  if (array) {
    battery_monitoring__srv__RobotBatteryStatus_Response__Sequence__fini(array);
  }
  free(array);
}
