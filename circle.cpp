#include "circle.hpp"
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

Circle::Circle(int radius)
{
  this->radius = radius;
}

double Circle::get_Area()
{
  double pi = 2 * acos(0.0);
  double total{};
  total = pow((radius * pi), 2);
  return total;
}

double Circle::get_Perimeter()
{
  double pi = 2 * acos(0.0);
  double total{};
  total = (2 * pi * radius);
  return total;
}
