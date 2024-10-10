#pragma once
#include "shape.hpp"
#include <string>

class right_triangle : public shape
{
private:
  double base{};
  double height{};

public:
  right_triangle(int length, int width);
  double get_Area() override;
  double get_Perimeter() override;
};
