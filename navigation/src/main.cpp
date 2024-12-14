// TODO: use here the navigation from px4-ros2-interface-lib/examples/cpp/modes/goto

#include "rclcpp/rclcpp.hpp"

#include <global_navigation.hpp>

#include <local_navigation.hpp>

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ExampleLocalNavigationNode>());
  rclcpp::shutdown();
  return 0;
}
