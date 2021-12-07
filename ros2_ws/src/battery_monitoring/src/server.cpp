#include "battery_monitoring/srv/robot_battery_status.hpp" //custom service
#include "rclcpp/rclcpp.hpp"
#include <memory>

// callback funciton checks for the battery number and respond with the battery
// percentage
void battery_status_query(
    const std::shared_ptr<battery_monitoring::srv::RobotBatteryStatus::Request>
        request,
    std::shared_ptr<battery_monitoring::srv::RobotBatteryStatus::Response>
        response) {
  if (request->batterynum == 0) {
    response->percentage = 90.1;
  } else if (request->batterynum == 1) {
    response->percentage = 83.2;
  } else if (request->batterynum == 2) {
    response->percentage = 75.2;
  } else if (request->batterynum == 3) {
    response->percentage = 97.4;
  }
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"),
              "Incoming request\nbattery number: %ld", request->batterynum);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"),
              "sending back response percentage: %f %%", response->percentage);
}

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared(
      "Battery_monitor"); // Creating a node "Battery_monitor"
  std::function<void(
      const std::shared_ptr<
          battery_monitoring::srv::RobotBatteryStatus::Request>,
      std::shared_ptr<battery_monitoring::srv::RobotBatteryStatus::Response>)>
      fcn2 = std::bind(
          battery_status_query,
          std::placeholders::_1, // bind function with two placeholders, one for
                                 // request and one for response
          std::placeholders::_2);

  rclcpp::Service<
      battery_monitoring::srv::RobotBatteryStatus>::SharedPtr service =
      node->create_service<battery_monitoring::srv::
                               RobotBatteryStatus>( // Creating a service
                                                    // "robot_battery_status"
                                                    // with bind function of
                                                    // the callback function
          "robot_battery_status", fcn2);

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "*******Ready***********");

  rclcpp::spin(node);
  rclcpp::shutdown();
}