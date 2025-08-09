#include "package_b/my_plugin.hpp"
#include <pluginlib/class_list_macros.hpp>

namespace package_b
{
std::string MyPlugin::process(const std::string &input)
{
  return "What the muffin";
}
} // namespace package_b

PLUGINLIB_EXPORT_CLASS(package_b::MyPlugin, package_a::BaseInterface)

