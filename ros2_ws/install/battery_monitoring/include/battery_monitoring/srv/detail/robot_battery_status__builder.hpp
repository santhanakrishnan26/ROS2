// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from battery_monitoring:srv/RobotBatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_MONITORING__SRV__DETAIL__ROBOT_BATTERY_STATUS__BUILDER_HPP_
#define BATTERY_MONITORING__SRV__DETAIL__ROBOT_BATTERY_STATUS__BUILDER_HPP_

#include "battery_monitoring/srv/detail/robot_battery_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace battery_monitoring
{

namespace srv
{

namespace builder
{

class Init_RobotBatteryStatus_Request_batterynum
{
public:
  Init_RobotBatteryStatus_Request_batterynum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::battery_monitoring::srv::RobotBatteryStatus_Request batterynum(::battery_monitoring::srv::RobotBatteryStatus_Request::_batterynum_type arg)
  {
    msg_.batterynum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::battery_monitoring::srv::RobotBatteryStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::battery_monitoring::srv::RobotBatteryStatus_Request>()
{
  return battery_monitoring::srv::builder::Init_RobotBatteryStatus_Request_batterynum();
}

}  // namespace battery_monitoring


namespace battery_monitoring
{

namespace srv
{

namespace builder
{

class Init_RobotBatteryStatus_Response_percentage
{
public:
  Init_RobotBatteryStatus_Response_percentage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::battery_monitoring::srv::RobotBatteryStatus_Response percentage(::battery_monitoring::srv::RobotBatteryStatus_Response::_percentage_type arg)
  {
    msg_.percentage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::battery_monitoring::srv::RobotBatteryStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::battery_monitoring::srv::RobotBatteryStatus_Response>()
{
  return battery_monitoring::srv::builder::Init_RobotBatteryStatus_Response_percentage();
}

}  // namespace battery_monitoring

#endif  // BATTERY_MONITORING__SRV__DETAIL__ROBOT_BATTERY_STATUS__BUILDER_HPP_
