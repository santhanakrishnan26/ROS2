// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from battery_monitoring:srv/RobotBatteryStatus.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "battery_monitoring/srv/detail/robot_battery_status__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace battery_monitoring
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _RobotBatteryStatus_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotBatteryStatus_Request_type_support_ids_t;

static const _RobotBatteryStatus_Request_type_support_ids_t _RobotBatteryStatus_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RobotBatteryStatus_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotBatteryStatus_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotBatteryStatus_Request_type_support_symbol_names_t _RobotBatteryStatus_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, battery_monitoring, srv, RobotBatteryStatus_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, battery_monitoring, srv, RobotBatteryStatus_Request)),
  }
};

typedef struct _RobotBatteryStatus_Request_type_support_data_t
{
  void * data[2];
} _RobotBatteryStatus_Request_type_support_data_t;

static _RobotBatteryStatus_Request_type_support_data_t _RobotBatteryStatus_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotBatteryStatus_Request_message_typesupport_map = {
  2,
  "battery_monitoring",
  &_RobotBatteryStatus_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RobotBatteryStatus_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RobotBatteryStatus_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RobotBatteryStatus_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotBatteryStatus_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace battery_monitoring

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<battery_monitoring::srv::RobotBatteryStatus_Request>()
{
  return &::battery_monitoring::srv::rosidl_typesupport_cpp::RobotBatteryStatus_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, battery_monitoring, srv, RobotBatteryStatus_Request)() {
  return get_message_type_support_handle<battery_monitoring::srv::RobotBatteryStatus_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "battery_monitoring/srv/detail/robot_battery_status__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace battery_monitoring
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _RobotBatteryStatus_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotBatteryStatus_Response_type_support_ids_t;

static const _RobotBatteryStatus_Response_type_support_ids_t _RobotBatteryStatus_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RobotBatteryStatus_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotBatteryStatus_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotBatteryStatus_Response_type_support_symbol_names_t _RobotBatteryStatus_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, battery_monitoring, srv, RobotBatteryStatus_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, battery_monitoring, srv, RobotBatteryStatus_Response)),
  }
};

typedef struct _RobotBatteryStatus_Response_type_support_data_t
{
  void * data[2];
} _RobotBatteryStatus_Response_type_support_data_t;

static _RobotBatteryStatus_Response_type_support_data_t _RobotBatteryStatus_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotBatteryStatus_Response_message_typesupport_map = {
  2,
  "battery_monitoring",
  &_RobotBatteryStatus_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RobotBatteryStatus_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RobotBatteryStatus_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RobotBatteryStatus_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotBatteryStatus_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace battery_monitoring

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<battery_monitoring::srv::RobotBatteryStatus_Response>()
{
  return &::battery_monitoring::srv::rosidl_typesupport_cpp::RobotBatteryStatus_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, battery_monitoring, srv, RobotBatteryStatus_Response)() {
  return get_message_type_support_handle<battery_monitoring::srv::RobotBatteryStatus_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "battery_monitoring/srv/detail/robot_battery_status__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace battery_monitoring
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _RobotBatteryStatus_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotBatteryStatus_type_support_ids_t;

static const _RobotBatteryStatus_type_support_ids_t _RobotBatteryStatus_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RobotBatteryStatus_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotBatteryStatus_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotBatteryStatus_type_support_symbol_names_t _RobotBatteryStatus_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, battery_monitoring, srv, RobotBatteryStatus)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, battery_monitoring, srv, RobotBatteryStatus)),
  }
};

typedef struct _RobotBatteryStatus_type_support_data_t
{
  void * data[2];
} _RobotBatteryStatus_type_support_data_t;

static _RobotBatteryStatus_type_support_data_t _RobotBatteryStatus_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotBatteryStatus_service_typesupport_map = {
  2,
  "battery_monitoring",
  &_RobotBatteryStatus_service_typesupport_ids.typesupport_identifier[0],
  &_RobotBatteryStatus_service_typesupport_symbol_names.symbol_name[0],
  &_RobotBatteryStatus_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RobotBatteryStatus_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotBatteryStatus_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace battery_monitoring

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<battery_monitoring::srv::RobotBatteryStatus>()
{
  return &::battery_monitoring::srv::rosidl_typesupport_cpp::RobotBatteryStatus_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
