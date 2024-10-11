#include "Circle.h"
#include <cmath>

double Circle::getArea() const
{
  return M_PI * radius * radius;
}

double Circle::getPerimeter() const
{
  return 2 * M_PI * radius;
}
