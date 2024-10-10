#include "circle.hpp"
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

circle::circle(int radius)
{
  this->radius = radius;
}

double circle::get_Area()
{
  double total{};
  total = pow((radius * 3.14), 2);
  return total;
}

double circle::get_Perimeter()
{
  return 0;
}
