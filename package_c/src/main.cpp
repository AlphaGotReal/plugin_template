#include <pluginlib/class_loader.hpp>
#include <package_a/base_interface.hpp>
#include <iostream>

int main() {
  pluginlib::ClassLoader<package_a::BaseInterface> loader(
    "package_a", "package_a::BaseInterface");

  try {
    auto plugin = loader.createSharedInstance("package_b/MyPlugin");
    std::cout << plugin->process("Hello World") << std::endl;
  }
  catch (const pluginlib::PluginlibException &ex) {
    std::cerr << "Plugin failed to load: " << ex.what() << std::endl;
  }
}

