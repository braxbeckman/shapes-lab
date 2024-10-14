#pragma once
#include "shape.hpp"
#include <string>

class Right_triangle : public Shape
{
private:
  int base{};
  int height{};
  int hypotenuse{};

public:
  Right_triangle(int base, int height, int hypotenuse);
  double get_Area() override;
  double get_Perimeter() override;
};
