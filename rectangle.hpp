#pragma once
#include "shape.hpp"
#include <string>

using namespace std;

class rectangle : public shape
{
private:
  int length{};
  int width{};
  string area{};

public:
  explicit rectangle(string area);
  double get_Area() override;
  double get_Perimeter() override;
};
