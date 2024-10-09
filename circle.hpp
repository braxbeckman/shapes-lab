#pragma once
#include "angle.hpp"
#include <string>

using namespace std;

class circle : public angle
{
private:
  string name{};
  int radius{};

public:
  explicit circle(int);
  string get_Area() override;
  string get_Perimeter() override;
};
