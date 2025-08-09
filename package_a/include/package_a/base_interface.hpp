#pragma once
#include <string>

namespace package_a
{
class BaseInterface
{
public:
  virtual ~BaseInterface() = default;
  virtual std::string process(const std::string &input) = 0;
};
} // namespace package_a

