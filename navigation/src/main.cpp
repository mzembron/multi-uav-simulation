// TODO: use here the navigation from px4-ros2-interface-lib/examples/cpp/modes/goto

#include "rclcpp/rclcpp.hpp"

#include <global_navigation.hpp>

#include <local_navigation.hpp>

#include <goto_navigation.hpp>

#include <px4_ros2/components/node_with_mode.hpp>

#include <iostream>

using MyNodeWithMode = px4_ros2::NodeWithMode<FlightModeTest>;

static const std::string kNodeName = "example_mode_goto";
static const bool kEnableDebugOutput = true;

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  std::cout<<"starting main"<<std::endl;
  // rclcpp::spin(std::make_shared<ExampleGlobalNavigationNode>());
  rclcpp::spin(std::make_shared<MyNodeWithMode>(kNodeName, kEnableDebugOutput));
  rclcpp::shutdown();
  return 0;
}
