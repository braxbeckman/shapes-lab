#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
#include <string>

class Rectangle : public Shape
{
private:
  std::string shape{"Rectangle"};
  double width;
  double height;

public:
  Rectangle(double w, double h) : width(w), height(h)
  {
  }
  double getArea() const override;
  double getPerimeter() const override;
  std::string getShape() const override;
};

#endif // RECTANGLE_H
