#include "Rectangle.h"

double Rectangle::getArea() const
{
  return width * height; // Use height instead of length
}

double Rectangle::getPerimeter() const
{
  return 2 * (width + height); // Use height instead of length
}
std::string Rectangle::getShape() const
{
  return shape;
}
