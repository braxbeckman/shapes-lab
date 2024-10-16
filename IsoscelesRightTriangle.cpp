#include "IsoscelesRightTriangle.h"
#include <cmath>

double IsoscelesRightTriangle::getArea() const
{
  return 0.5 * base * height; // Now this works
}

double IsoscelesRightTriangle::getPerimeter() const
{
  double hypotenuse = std::sqrt(base * base + height * height);
  return base + height + hypotenuse; // Now this works
}

std::string IsoscelesRightTriangle::getShape() const
{
  return shape;
}
