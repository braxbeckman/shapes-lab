#include "rectangle.hpp"
#include <iostream>
#include <string>

using namespace std;

Rectangle::Rectangle(int length, int width)
{
  this->length = length;
  this->width = width;
}
double Rectangle::get_Area()
{
  int total{};
  total = length * width;
  return total;
}

double Rectangle::get_Perimeter()
{
  int total{};
  total = (2 * length) + (2 * width);
  return total;
}
