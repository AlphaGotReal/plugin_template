#pragma once
#include <package_a/base_interface.hpp>

namespace package_b
{
class MyPlugin : public package_a::BaseInterface
{
public:
  std::string process(const std::string &input) override;
};
} // namespace package_b

