#include "Circle.h"
#include "IsoscelesRightTriangle.h"
#include "Rectangle.h"
#include "RightTriangle.h"
#include "Square.h"
#include <cassert>
#include <cmath>
#include <iostream>
#include <string>

std::string printAreaToScreen(Shape *s);

int main()
{
  Circle circle(5.0);
  assert(circle.getArea() - 78.5398 < 0.0001);
  assert(circle.getPerimeter() - 31.4159 < 0.0001);
  assert(printAreaToScreen(&circle) == "This Circle has an area of 78.539816 units.\n");
  std::cout << printAreaToScreen(&circle);

  Rectangle rectangle(4.0, 6.0);
  assert(rectangle.getArea() == 24.0);
  assert(rectangle.getPerimeter() == 20.0);
  assert(printAreaToScreen(&rectangle) == "This Rectangle has an area of 24.000000 units.\n");
  std::cout << printAreaToScreen(&rectangle);


  RightTriangle triangle(3.0, 4.0);
  assert(triangle.getArea() == 6.0);
  assert(triangle.getPerimeter() - 12.0 < 0.0001);
  assert(printAreaToScreen(&triangle) == "This Right Triangle has an area of 6.000000 units.\n");
  std::cout << printAreaToScreen(&triangle);


  Square square(4.0);
  assert(square.getArea() == 16.0);
  assert(square.getPerimeter() == 16.0);
  assert(printAreaToScreen(&square) == "This Square has an area of 16.000000 units.\n");
  std::cout << printAreaToScreen(&square);


  IsoscelesRightTriangle isoTriangle(5.0);
  assert(isoTriangle.getArea() == 12.5);
  assert(isoTriangle.getPerimeter() - (5.0 + 5.0 + std::sqrt(50)) < 0.0001);
  assert(printAreaToScreen(&isoTriangle) == "This Isosceles Right Triangle has an area of 12.500000 units.\n");
  std::cout << printAreaToScreen(&isoTriangle);

  return 0;
}


std::string printAreaToScreen(Shape *s)
{
  std::string output = "This " + s->getShape() + " has an area of " + std::to_string(s->getArea()) + " units.\n";
  return output;
}
