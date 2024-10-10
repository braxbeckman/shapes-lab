#pragma once
#include "shape.hpp"
#include <string>

using namespace std;

class circle : public shape
{
private:
  string name{};
  int radius{};

public:
  explicit circle(int);
  double get_Area() override;
  double get_Perimeter() override;
};
