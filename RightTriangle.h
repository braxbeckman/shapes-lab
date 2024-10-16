#ifndef RIGHT_TRIANGLE_H
#define RIGHT_TRIANGLE_H

#include "Shape.h"

class RightTriangle : public Shape
{
protected:
  std::string shape{"Right Triangle"};
  double base{};
  double height{};

public:
  RightTriangle(double b, double h) : base(b), height(h)
  {
  }
  double getArea() const override;
  double getPerimeter() const override;
  std::string getShape() const override;
};

#endif // RIGHT_TRIANGLE_H
