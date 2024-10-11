#include "Circle.h"
#include "IsoscelesRightTriangle.h"
#include "Rectangle.h"
#include "RightTriangle.h"
#include "Square.h"
#include <cassert>
#include <cmath>

int main()
{
  Circle circle(5.0);
  assert(circle.getArea() - 78.5398 < 0.0001);
  assert(circle.getPerimeter() - 31.4159 < 0.0001);


  Rectangle rectangle(4.0, 6.0);
  assert(rectangle.getArea() == 24.0);

  assert(rectangle.getPerimeter() == 20.0);


  RightTriangle triangle(3.0, 4.0);
  assert(triangle.getArea() == 6.0);
  assert(triangle.getPerimeter() - 12.0 < 0.0001);


  Square square(4.0);
  assert(square.getArea() == 16.0);
  assert(square.getPerimeter() == 16.0);


  IsoscelesRightTriangle isoTriangle(5.0);
  assert(isoTriangle.getArea() == 12.5);
  assert(isoTriangle.getPerimeter() - (5.0 + 5.0 + std::sqrt(50)) < 0.0001);

  return 0;
}
