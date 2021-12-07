#include "battery_monitoring/srv/robot_battery_status.hpp" // custom service
#include "rclcpp/rclcpp.hpp"

#include <chrono>
#include <cstdlib>
#include <memory>
int battery_num = 0; // To trace the battery number
using namespace std::chrono_literals;
int main(int argc, char **argv) {
  rclcpp::init(argc, argv);

  std::shared_ptr<rclcpp::Node> node =
      rclcpp::Node::make_shared("Robot"); // Creating a node "Robot"
  rclcpp::Client<battery_monitoring::srv::RobotBatteryStatus>::SharedPtr
      client = node->create_client<
          battery_monitoring::srv::RobotBatteryStatus>( // Creating a client for
                                                        // the service
                                                        // robot_battery_tatus
          "robot_battery_status");
  rclcpp::Rate loop_rate(
      0.1); // loop rate 0.1Hz, to make the robot query every 10 seconds
  while (rclcpp::ok()) {
    auto request = std::make_shared<
        battery_monitoring::srv::RobotBatteryStatus::Request>();
    request->batterynum = battery_num;

    while (!client->wait_for_service(1s)) {
      if (!rclcpp::ok()) {
        RCLCPP_ERROR(
            rclcpp::get_logger("rclcpp"),
            "Interrupted while waiting for the service. Exiting."); // To check
                                                                    // whether
                                                                    // the
                                                                    // server is
                                                                    // alive
        return 0;
      }
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"),
                  "service not available, waiting again...");
    }

    auto result =
        client->async_send_request(request); // Making a request to the server
    // Wait for the result.
    if (rclcpp::spin_until_future_complete(node, result) ==
        rclcpp::executor::FutureReturnCode::SUCCESS) {
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"),
                  "batter num: %d"
                  "    Percentage: %f %%",
                  request->batterynum, result.get()->percentage);
    } else {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"),
                   "Failed to call service robot_battery_status");
    }
    loop_rate.sleep();
    if (battery_num >= 3) { // Reseting/incrementing (based on the condition)
                            // the battery_num ,to make the robot query the four
                            // battery statuses continiously in a sequence.
      battery_num = 0;
    } else {
      battery_num += 1;
    }
  }

  rclcpp::shutdown();
  return 0;
}