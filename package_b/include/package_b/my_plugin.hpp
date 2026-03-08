#pragma once
#include <package_a/base_interface.hpp>

namespace package_b {
class MyPlugin : public package_a::BaseInterface {
public:
  std::vector<package_a::mouse> read(const std::string &input) override;
  std::vector<package_a::mouse> write(const std::string &input) override;
private:
  std::vector<package_a::mouse> t;
};
} // namespace package_b

