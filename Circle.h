#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include <string>

class Circle : public Shape
{
private:
  std::string shape{"Circle"};
  double radius{};

public:
  Circle(double r) : radius(r)
  {
  }
  double getArea() const override;
  double getPerimeter() const override;
  std::string getShape() const override;
};

#endif // CIRCLE_H
