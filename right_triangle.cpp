#include "right_triangle.hpp"
#include <iostream>

Right_triangle::Right_triangle(int base, int height, int hypotenuse)
{
  this->base = base;
  this->hypotenuse = hypotenuse;
  this->height = height;
}

double Right_triangle::get_Perimeter()
{
  int total{base + height + hypotenuse};
  return total;
}

double Right_triangle::get_Area()
{
  double total = (base * height * (0.5));
  return total;
}
