// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from battery_monitoring:srv/RobotBatteryStatus.idl
// generated code does not contain a copyright notice
#include "battery_monitoring/srv/detail/robot_battery_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "battery_monitoring/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "battery_monitoring/srv/detail/robot_battery_status__struct.h"
#include "battery_monitoring/srv/detail/robot_battery_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RobotBatteryStatus_Request__ros_msg_type = battery_monitoring__srv__RobotBatteryStatus_Request;

static bool _RobotBatteryStatus_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotBatteryStatus_Request__ros_msg_type * ros_message = static_cast<const _RobotBatteryStatus_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: batterynum
  {
    cdr << ros_message->batterynum;
  }

  return true;
}

static bool _RobotBatteryStatus_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotBatteryStatus_Request__ros_msg_type * ros_message = static_cast<_RobotBatteryStatus_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: batterynum
  {
    cdr >> ros_message->batterynum;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_battery_monitoring
size_t get_serialized_size_battery_monitoring__srv__RobotBatteryStatus_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotBatteryStatus_Request__ros_msg_type * ros_message = static_cast<const _RobotBatteryStatus_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name batterynum
  {
    size_t item_size = sizeof(ros_message->batterynum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RobotBatteryStatus_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_battery_monitoring__srv__RobotBatteryStatus_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_battery_monitoring
size_t max_serialized_size_battery_monitoring__srv__RobotBatteryStatus_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: batterynum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RobotBatteryStatus_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_battery_monitoring__srv__RobotBatteryStatus_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RobotBatteryStatus_Request = {
  "battery_monitoring::srv",
  "RobotBatteryStatus_Request",
  _RobotBatteryStatus_Request__cdr_serialize,
  _RobotBatteryStatus_Request__cdr_deserialize,
  _RobotBatteryStatus_Request__get_serialized_size,
  _RobotBatteryStatus_Request__max_serialized_size
};

static rosidl_message_type_support_t _RobotBatteryStatus_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotBatteryStatus_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, battery_monitoring, srv, RobotBatteryStatus_Request)() {
  return &_RobotBatteryStatus_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "battery_monitoring/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "battery_monitoring/srv/detail/robot_battery_status__struct.h"
// already included above
// #include "battery_monitoring/srv/detail/robot_battery_status__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RobotBatteryStatus_Response__ros_msg_type = battery_monitoring__srv__RobotBatteryStatus_Response;

static bool _RobotBatteryStatus_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotBatteryStatus_Response__ros_msg_type * ros_message = static_cast<const _RobotBatteryStatus_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: percentage
  {
    cdr << ros_message->percentage;
  }

  return true;
}

static bool _RobotBatteryStatus_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotBatteryStatus_Response__ros_msg_type * ros_message = static_cast<_RobotBatteryStatus_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: percentage
  {
    cdr >> ros_message->percentage;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_battery_monitoring
size_t get_serialized_size_battery_monitoring__srv__RobotBatteryStatus_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotBatteryStatus_Response__ros_msg_type * ros_message = static_cast<const _RobotBatteryStatus_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name percentage
  {
    size_t item_size = sizeof(ros_message->percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RobotBatteryStatus_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_battery_monitoring__srv__RobotBatteryStatus_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_battery_monitoring
size_t max_serialized_size_battery_monitoring__srv__RobotBatteryStatus_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: percentage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RobotBatteryStatus_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_battery_monitoring__srv__RobotBatteryStatus_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RobotBatteryStatus_Response = {
  "battery_monitoring::srv",
  "RobotBatteryStatus_Response",
  _RobotBatteryStatus_Response__cdr_serialize,
  _RobotBatteryStatus_Response__cdr_deserialize,
  _RobotBatteryStatus_Response__get_serialized_size,
  _RobotBatteryStatus_Response__max_serialized_size
};

static rosidl_message_type_support_t _RobotBatteryStatus_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotBatteryStatus_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, battery_monitoring, srv, RobotBatteryStatus_Response)() {
  return &_RobotBatteryStatus_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "battery_monitoring/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "battery_monitoring/srv/robot_battery_status.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t RobotBatteryStatus__callbacks = {
  "battery_monitoring::srv",
  "RobotBatteryStatus",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, battery_monitoring, srv, RobotBatteryStatus_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, battery_monitoring, srv, RobotBatteryStatus_Response)(),
};

static rosidl_service_type_support_t RobotBatteryStatus__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &RobotBatteryStatus__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, battery_monitoring, srv, RobotBatteryStatus)() {
  return &RobotBatteryStatus__handle;
}

#if defined(__cplusplus)
}
#endif
