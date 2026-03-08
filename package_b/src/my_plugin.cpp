#include "package_b/my_plugin.hpp"
#include <pluginlib/class_list_macros.hpp>

namespace package_b {
std::vector<package_a::mouse> MyPlugin::read(const std::string &input) {
  package_a::mouse m;
  m.val = "reading";
  return {m};
}
std::vector<package_a::mouse> MyPlugin::write(const std::string &input) {
  package_a::mouse m;
  m.val = "writing";
  return {m};
}
} // namespace package_b

PLUGINLIB_EXPORT_CLASS(package_b::MyPlugin, package_a::BaseInterface)

