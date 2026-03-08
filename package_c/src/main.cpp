#include <pluginlib/class_loader.hpp>
#include <package_a/base_interface.hpp>
#include <iostream>

int main() {
  pluginlib::ClassLoader<package_a::BaseInterface> loader(
    "package_a", "package_a::BaseInterface");

  try {
    auto plugin = loader.createSharedInstance("package_b/MyPlugin");
    std::cout << plugin->read("Hello World")[0].val << std::endl;
    std::cout << plugin->write("Hello World")[0].val << std::endl;
  }
  catch (const pluginlib::PluginlibException &ex) {
    std::cerr << "Plugin failed to load: " << ex.what() << std::endl;
  }
}

