#include "Square.h"

double Square::getArea() const
{
  return Rectangle::getArea(); // Use the inherited method from Rectangle
}

double Square::getPerimeter() const
{
  return Rectangle::getPerimeter(); // Use the inherited method from Rectangle
}

std::string Square::getShape() const
{
  return shape;
}
