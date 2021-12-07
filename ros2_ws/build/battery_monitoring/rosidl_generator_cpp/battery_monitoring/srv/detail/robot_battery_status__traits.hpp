// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from battery_monitoring:srv/RobotBatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_MONITORING__SRV__DETAIL__ROBOT_BATTERY_STATUS__TRAITS_HPP_
#define BATTERY_MONITORING__SRV__DETAIL__ROBOT_BATTERY_STATUS__TRAITS_HPP_

#include "battery_monitoring/srv/detail/robot_battery_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<battery_monitoring::srv::RobotBatteryStatus_Request>()
{
  return "battery_monitoring::srv::RobotBatteryStatus_Request";
}

template<>
inline const char * name<battery_monitoring::srv::RobotBatteryStatus_Request>()
{
  return "battery_monitoring/srv/RobotBatteryStatus_Request";
}

template<>
struct has_fixed_size<battery_monitoring::srv::RobotBatteryStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<battery_monitoring::srv::RobotBatteryStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<battery_monitoring::srv::RobotBatteryStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<battery_monitoring::srv::RobotBatteryStatus_Response>()
{
  return "battery_monitoring::srv::RobotBatteryStatus_Response";
}

template<>
inline const char * name<battery_monitoring::srv::RobotBatteryStatus_Response>()
{
  return "battery_monitoring/srv/RobotBatteryStatus_Response";
}

template<>
struct has_fixed_size<battery_monitoring::srv::RobotBatteryStatus_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<battery_monitoring::srv::RobotBatteryStatus_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<battery_monitoring::srv::RobotBatteryStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<battery_monitoring::srv::RobotBatteryStatus>()
{
  return "battery_monitoring::srv::RobotBatteryStatus";
}

template<>
inline const char * name<battery_monitoring::srv::RobotBatteryStatus>()
{
  return "battery_monitoring/srv/RobotBatteryStatus";
}

template<>
struct has_fixed_size<battery_monitoring::srv::RobotBatteryStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<battery_monitoring::srv::RobotBatteryStatus_Request>::value &&
    has_fixed_size<battery_monitoring::srv::RobotBatteryStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<battery_monitoring::srv::RobotBatteryStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<battery_monitoring::srv::RobotBatteryStatus_Request>::value &&
    has_bounded_size<battery_monitoring::srv::RobotBatteryStatus_Response>::value
  >
{
};

template<>
struct is_service<battery_monitoring::srv::RobotBatteryStatus>
  : std::true_type
{
};

template<>
struct is_service_request<battery_monitoring::srv::RobotBatteryStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<battery_monitoring::srv::RobotBatteryStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BATTERY_MONITORING__SRV__DETAIL__ROBOT_BATTERY_STATUS__TRAITS_HPP_
