#pragma once
#include <vector>
#include <string>

namespace package_a {

typedef struct {
  std::string val;
  int r; 
} mouse;

class BaseInterface{
public:
  virtual ~BaseInterface() = default;
  virtual std::vector<mouse> read(const std::string &input) = 0;
  virtual std::vector<mouse> write(const std::string &input) = 0;
};

} // namespace package_a

