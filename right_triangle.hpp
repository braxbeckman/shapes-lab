#pragma once
#include "angle.hpp"
#include <string>

class right_triangle : public angle
{
private:
  double base{};
  double height{};

public:
  right_triangle(int length, int width);
  // string getArea() override;
  // string getPerimeter() override;
};
