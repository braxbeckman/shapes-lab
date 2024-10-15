#ifndef ISOSCELES_RIGHT_TRIANGLE_H
#define ISOSCELES_RIGHT_TRIANGLE_H

#include "RightTriangle.h"
#include <string>

class IsoscelesRightTriangle : public RightTriangle
{
private:
  std::string shape{"Isosceles Right Triangle"};

public:
  IsoscelesRightTriangle(double side) : RightTriangle(side, side)
  {
  }
  double getArea() const override;      // Optional override
  double getPerimeter() const override; // Optional override
  std::string getShape() const override;
};

#endif // ISOSCELES_RIGHT_TRIANGLE_H
