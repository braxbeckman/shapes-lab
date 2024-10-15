#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape
{
public:
  virtual std::string getShape() const = 0;
  virtual double getArea() const = 0;
  virtual double getPerimeter() const = 0;
};

#endif
