#pragma once
#include "shape.hpp"
#include <string>

using namespace std;

class Rectangle : public Shape
{
private:
  int length{};
  int width{};

public:
  explicit Rectangle(int length, int width);
  double get_Area() override;
  double get_Perimeter() override;
};
