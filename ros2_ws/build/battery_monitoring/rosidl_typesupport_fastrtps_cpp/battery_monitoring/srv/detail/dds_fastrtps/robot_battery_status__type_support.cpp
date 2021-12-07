// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from battery_monitoring:srv/RobotBatteryStatus.idl
// generated code does not contain a copyright notice
#include "battery_monitoring/srv/detail/robot_battery_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "battery_monitoring/srv/detail/robot_battery_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace battery_monitoring
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_monitoring
cdr_serialize(
  const battery_monitoring::srv::RobotBatteryStatus_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: batterynum
  cdr << ros_message.batterynum;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_monitoring
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  battery_monitoring::srv::RobotBatteryStatus_Request & ros_message)
{
  // Member: batterynum
  cdr >> ros_message.batterynum;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_monitoring
get_serialized_size(
  const battery_monitoring::srv::RobotBatteryStatus_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: batterynum
  {
    size_t item_size = sizeof(ros_message.batterynum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_monitoring
max_serialized_size_RobotBatteryStatus_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: batterynum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _RobotBatteryStatus_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const battery_monitoring::srv::RobotBatteryStatus_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotBatteryStatus_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<battery_monitoring::srv::RobotBatteryStatus_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotBatteryStatus_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const battery_monitoring::srv::RobotBatteryStatus_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotBatteryStatus_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RobotBatteryStatus_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _RobotBatteryStatus_Request__callbacks = {
  "battery_monitoring::srv",
  "RobotBatteryStatus_Request",
  _RobotBatteryStatus_Request__cdr_serialize,
  _RobotBatteryStatus_Request__cdr_deserialize,
  _RobotBatteryStatus_Request__get_serialized_size,
  _RobotBatteryStatus_Request__max_serialized_size
};

static rosidl_message_type_support_t _RobotBatteryStatus_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotBatteryStatus_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace battery_monitoring

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_battery_monitoring
const rosidl_message_type_support_t *
get_message_type_support_handle<battery_monitoring::srv::RobotBatteryStatus_Request>()
{
  return &battery_monitoring::srv::typesupport_fastrtps_cpp::_RobotBatteryStatus_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, battery_monitoring, srv, RobotBatteryStatus_Request)() {
  return &battery_monitoring::srv::typesupport_fastrtps_cpp::_RobotBatteryStatus_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace battery_monitoring
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_monitoring
cdr_serialize(
  const battery_monitoring::srv::RobotBatteryStatus_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: percentage
  cdr << ros_message.percentage;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_monitoring
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  battery_monitoring::srv::RobotBatteryStatus_Response & ros_message)
{
  // Member: percentage
  cdr >> ros_message.percentage;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_monitoring
get_serialized_size(
  const battery_monitoring::srv::RobotBatteryStatus_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: percentage
  {
    size_t item_size = sizeof(ros_message.percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_monitoring
max_serialized_size_RobotBatteryStatus_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: percentage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _RobotBatteryStatus_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const battery_monitoring::srv::RobotBatteryStatus_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotBatteryStatus_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<battery_monitoring::srv::RobotBatteryStatus_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotBatteryStatus_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const battery_monitoring::srv::RobotBatteryStatus_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotBatteryStatus_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RobotBatteryStatus_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _RobotBatteryStatus_Response__callbacks = {
  "battery_monitoring::srv",
  "RobotBatteryStatus_Response",
  _RobotBatteryStatus_Response__cdr_serialize,
  _RobotBatteryStatus_Response__cdr_deserialize,
  _RobotBatteryStatus_Response__get_serialized_size,
  _RobotBatteryStatus_Response__max_serialized_size
};

static rosidl_message_type_support_t _RobotBatteryStatus_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotBatteryStatus_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace battery_monitoring

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_battery_monitoring
const rosidl_message_type_support_t *
get_message_type_support_handle<battery_monitoring::srv::RobotBatteryStatus_Response>()
{
  return &battery_monitoring::srv::typesupport_fastrtps_cpp::_RobotBatteryStatus_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, battery_monitoring, srv, RobotBatteryStatus_Response)() {
  return &battery_monitoring::srv::typesupport_fastrtps_cpp::_RobotBatteryStatus_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace battery_monitoring
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _RobotBatteryStatus__callbacks = {
  "battery_monitoring::srv",
  "RobotBatteryStatus",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, battery_monitoring, srv, RobotBatteryStatus_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, battery_monitoring, srv, RobotBatteryStatus_Response)(),
};

static rosidl_service_type_support_t _RobotBatteryStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotBatteryStatus__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace battery_monitoring

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_battery_monitoring
const rosidl_service_type_support_t *
get_service_type_support_handle<battery_monitoring::srv::RobotBatteryStatus>()
{
  return &battery_monitoring::srv::typesupport_fastrtps_cpp::_RobotBatteryStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, battery_monitoring, srv, RobotBatteryStatus)() {
  return &battery_monitoring::srv::typesupport_fastrtps_cpp::_RobotBatteryStatus__handle;
}

#ifdef __cplusplus
}
#endif
