#pragma once
#include "angle.hpp"
#include <string>

using namespace std;

class rectangle : public angle
{
private:
  string area{};

public:
  explicit rectangle(string area);
  string get_Area() override;
  string get_Perimeter() override;
  void shape() override;
};
