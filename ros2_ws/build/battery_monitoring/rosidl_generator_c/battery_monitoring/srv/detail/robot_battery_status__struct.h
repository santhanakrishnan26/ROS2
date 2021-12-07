// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from battery_monitoring:srv/RobotBatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_MONITORING__SRV__DETAIL__ROBOT_BATTERY_STATUS__STRUCT_H_
#define BATTERY_MONITORING__SRV__DETAIL__ROBOT_BATTERY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/RobotBatteryStatus in the package battery_monitoring.
typedef struct battery_monitoring__srv__RobotBatteryStatus_Request
{
  int64_t batterynum;
} battery_monitoring__srv__RobotBatteryStatus_Request;

// Struct for a sequence of battery_monitoring__srv__RobotBatteryStatus_Request.
typedef struct battery_monitoring__srv__RobotBatteryStatus_Request__Sequence
{
  battery_monitoring__srv__RobotBatteryStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} battery_monitoring__srv__RobotBatteryStatus_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/RobotBatteryStatus in the package battery_monitoring.
typedef struct battery_monitoring__srv__RobotBatteryStatus_Response
{
  double percentage;
} battery_monitoring__srv__RobotBatteryStatus_Response;

// Struct for a sequence of battery_monitoring__srv__RobotBatteryStatus_Response.
typedef struct battery_monitoring__srv__RobotBatteryStatus_Response__Sequence
{
  battery_monitoring__srv__RobotBatteryStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} battery_monitoring__srv__RobotBatteryStatus_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BATTERY_MONITORING__SRV__DETAIL__ROBOT_BATTERY_STATUS__STRUCT_H_
