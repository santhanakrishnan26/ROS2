// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from battery_monitoring:srv/RobotBatteryStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "battery_monitoring/srv/detail/robot_battery_status__rosidl_typesupport_introspection_c.h"
#include "battery_monitoring/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "battery_monitoring/srv/detail/robot_battery_status__functions.h"
#include "battery_monitoring/srv/detail/robot_battery_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void RobotBatteryStatus_Request__rosidl_typesupport_introspection_c__RobotBatteryStatus_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  battery_monitoring__srv__RobotBatteryStatus_Request__init(message_memory);
}

void RobotBatteryStatus_Request__rosidl_typesupport_introspection_c__RobotBatteryStatus_Request_fini_function(void * message_memory)
{
  battery_monitoring__srv__RobotBatteryStatus_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotBatteryStatus_Request__rosidl_typesupport_introspection_c__RobotBatteryStatus_Request_message_member_array[1] = {
  {
    "batterynum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(battery_monitoring__srv__RobotBatteryStatus_Request, batterynum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotBatteryStatus_Request__rosidl_typesupport_introspection_c__RobotBatteryStatus_Request_message_members = {
  "battery_monitoring__srv",  // message namespace
  "RobotBatteryStatus_Request",  // message name
  1,  // number of fields
  sizeof(battery_monitoring__srv__RobotBatteryStatus_Request),
  RobotBatteryStatus_Request__rosidl_typesupport_introspection_c__RobotBatteryStatus_Request_message_member_array,  // message members
  RobotBatteryStatus_Request__rosidl_typesupport_introspection_c__RobotBatteryStatus_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotBatteryStatus_Request__rosidl_typesupport_introspection_c__RobotBatteryStatus_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotBatteryStatus_Request__rosidl_typesupport_introspection_c__RobotBatteryStatus_Request_message_type_support_handle = {
  0,
  &RobotBatteryStatus_Request__rosidl_typesupport_introspection_c__RobotBatteryStatus_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_battery_monitoring
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_monitoring, srv, RobotBatteryStatus_Request)() {
  if (!RobotBatteryStatus_Request__rosidl_typesupport_introspection_c__RobotBatteryStatus_Request_message_type_support_handle.typesupport_identifier) {
    RobotBatteryStatus_Request__rosidl_typesupport_introspection_c__RobotBatteryStatus_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotBatteryStatus_Request__rosidl_typesupport_introspection_c__RobotBatteryStatus_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "battery_monitoring/srv/detail/robot_battery_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "battery_monitoring/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "battery_monitoring/srv/detail/robot_battery_status__functions.h"
// already included above
// #include "battery_monitoring/srv/detail/robot_battery_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void RobotBatteryStatus_Response__rosidl_typesupport_introspection_c__RobotBatteryStatus_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  battery_monitoring__srv__RobotBatteryStatus_Response__init(message_memory);
}

void RobotBatteryStatus_Response__rosidl_typesupport_introspection_c__RobotBatteryStatus_Response_fini_function(void * message_memory)
{
  battery_monitoring__srv__RobotBatteryStatus_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotBatteryStatus_Response__rosidl_typesupport_introspection_c__RobotBatteryStatus_Response_message_member_array[1] = {
  {
    "percentage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(battery_monitoring__srv__RobotBatteryStatus_Response, percentage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotBatteryStatus_Response__rosidl_typesupport_introspection_c__RobotBatteryStatus_Response_message_members = {
  "battery_monitoring__srv",  // message namespace
  "RobotBatteryStatus_Response",  // message name
  1,  // number of fields
  sizeof(battery_monitoring__srv__RobotBatteryStatus_Response),
  RobotBatteryStatus_Response__rosidl_typesupport_introspection_c__RobotBatteryStatus_Response_message_member_array,  // message members
  RobotBatteryStatus_Response__rosidl_typesupport_introspection_c__RobotBatteryStatus_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotBatteryStatus_Response__rosidl_typesupport_introspection_c__RobotBatteryStatus_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotBatteryStatus_Response__rosidl_typesupport_introspection_c__RobotBatteryStatus_Response_message_type_support_handle = {
  0,
  &RobotBatteryStatus_Response__rosidl_typesupport_introspection_c__RobotBatteryStatus_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_battery_monitoring
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_monitoring, srv, RobotBatteryStatus_Response)() {
  if (!RobotBatteryStatus_Response__rosidl_typesupport_introspection_c__RobotBatteryStatus_Response_message_type_support_handle.typesupport_identifier) {
    RobotBatteryStatus_Response__rosidl_typesupport_introspection_c__RobotBatteryStatus_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotBatteryStatus_Response__rosidl_typesupport_introspection_c__RobotBatteryStatus_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "battery_monitoring/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "battery_monitoring/srv/detail/robot_battery_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers battery_monitoring__srv__detail__robot_battery_status__rosidl_typesupport_introspection_c__RobotBatteryStatus_service_members = {
  "battery_monitoring__srv",  // service namespace
  "RobotBatteryStatus",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // battery_monitoring__srv__detail__robot_battery_status__rosidl_typesupport_introspection_c__RobotBatteryStatus_Request_message_type_support_handle,
  NULL  // response message
  // battery_monitoring__srv__detail__robot_battery_status__rosidl_typesupport_introspection_c__RobotBatteryStatus_Response_message_type_support_handle
};

static rosidl_service_type_support_t battery_monitoring__srv__detail__robot_battery_status__rosidl_typesupport_introspection_c__RobotBatteryStatus_service_type_support_handle = {
  0,
  &battery_monitoring__srv__detail__robot_battery_status__rosidl_typesupport_introspection_c__RobotBatteryStatus_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_monitoring, srv, RobotBatteryStatus_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_monitoring, srv, RobotBatteryStatus_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_battery_monitoring
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_monitoring, srv, RobotBatteryStatus)() {
  if (!battery_monitoring__srv__detail__robot_battery_status__rosidl_typesupport_introspection_c__RobotBatteryStatus_service_type_support_handle.typesupport_identifier) {
    battery_monitoring__srv__detail__robot_battery_status__rosidl_typesupport_introspection_c__RobotBatteryStatus_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)battery_monitoring__srv__detail__robot_battery_status__rosidl_typesupport_introspection_c__RobotBatteryStatus_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_monitoring, srv, RobotBatteryStatus_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_monitoring, srv, RobotBatteryStatus_Response)()->data;
  }

  return &battery_monitoring__srv__detail__robot_battery_status__rosidl_typesupport_introspection_c__RobotBatteryStatus_service_type_support_handle;
}
