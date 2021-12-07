// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from battery_monitoring:srv/RobotBatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_MONITORING__SRV__DETAIL__ROBOT_BATTERY_STATUS__STRUCT_HPP_
#define BATTERY_MONITORING__SRV__DETAIL__ROBOT_BATTERY_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__battery_monitoring__srv__RobotBatteryStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__battery_monitoring__srv__RobotBatteryStatus_Request __declspec(deprecated)
#endif

namespace battery_monitoring
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotBatteryStatus_Request_
{
  using Type = RobotBatteryStatus_Request_<ContainerAllocator>;

  explicit RobotBatteryStatus_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->batterynum = 0ll;
    }
  }

  explicit RobotBatteryStatus_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->batterynum = 0ll;
    }
  }

  // field types and members
  using _batterynum_type =
    int64_t;
  _batterynum_type batterynum;

  // setters for named parameter idiom
  Type & set__batterynum(
    const int64_t & _arg)
  {
    this->batterynum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    battery_monitoring::srv::RobotBatteryStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const battery_monitoring::srv::RobotBatteryStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<battery_monitoring::srv::RobotBatteryStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<battery_monitoring::srv::RobotBatteryStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      battery_monitoring::srv::RobotBatteryStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<battery_monitoring::srv::RobotBatteryStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      battery_monitoring::srv::RobotBatteryStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<battery_monitoring::srv::RobotBatteryStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<battery_monitoring::srv::RobotBatteryStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<battery_monitoring::srv::RobotBatteryStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__battery_monitoring__srv__RobotBatteryStatus_Request
    std::shared_ptr<battery_monitoring::srv::RobotBatteryStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__battery_monitoring__srv__RobotBatteryStatus_Request
    std::shared_ptr<battery_monitoring::srv::RobotBatteryStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotBatteryStatus_Request_ & other) const
  {
    if (this->batterynum != other.batterynum) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotBatteryStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotBatteryStatus_Request_

// alias to use template instance with default allocator
using RobotBatteryStatus_Request =
  battery_monitoring::srv::RobotBatteryStatus_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace battery_monitoring


#ifndef _WIN32
# define DEPRECATED__battery_monitoring__srv__RobotBatteryStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__battery_monitoring__srv__RobotBatteryStatus_Response __declspec(deprecated)
#endif

namespace battery_monitoring
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotBatteryStatus_Response_
{
  using Type = RobotBatteryStatus_Response_<ContainerAllocator>;

  explicit RobotBatteryStatus_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->percentage = 0.0;
    }
  }

  explicit RobotBatteryStatus_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->percentage = 0.0;
    }
  }

  // field types and members
  using _percentage_type =
    double;
  _percentage_type percentage;

  // setters for named parameter idiom
  Type & set__percentage(
    const double & _arg)
  {
    this->percentage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    battery_monitoring::srv::RobotBatteryStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const battery_monitoring::srv::RobotBatteryStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<battery_monitoring::srv::RobotBatteryStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<battery_monitoring::srv::RobotBatteryStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      battery_monitoring::srv::RobotBatteryStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<battery_monitoring::srv::RobotBatteryStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      battery_monitoring::srv::RobotBatteryStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<battery_monitoring::srv::RobotBatteryStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<battery_monitoring::srv::RobotBatteryStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<battery_monitoring::srv::RobotBatteryStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__battery_monitoring__srv__RobotBatteryStatus_Response
    std::shared_ptr<battery_monitoring::srv::RobotBatteryStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__battery_monitoring__srv__RobotBatteryStatus_Response
    std::shared_ptr<battery_monitoring::srv::RobotBatteryStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotBatteryStatus_Response_ & other) const
  {
    if (this->percentage != other.percentage) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotBatteryStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotBatteryStatus_Response_

// alias to use template instance with default allocator
using RobotBatteryStatus_Response =
  battery_monitoring::srv::RobotBatteryStatus_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace battery_monitoring

namespace battery_monitoring
{

namespace srv
{

struct RobotBatteryStatus
{
  using Request = battery_monitoring::srv::RobotBatteryStatus_Request;
  using Response = battery_monitoring::srv::RobotBatteryStatus_Response;
};

}  // namespace srv

}  // namespace battery_monitoring

#endif  // BATTERY_MONITORING__SRV__DETAIL__ROBOT_BATTERY_STATUS__STRUCT_HPP_
