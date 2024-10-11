#pragma once
#include "shape.hpp"
#include <string>

using namespace std;

class Circle : public Shape
{
private:
  string name{};
  int radius{};

public:
  explicit Circle(int);
  double get_Area() override;
  double get_Perimeter() override;
};
