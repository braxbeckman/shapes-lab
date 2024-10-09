#include "rectangle.hpp"
#include <iostream>
#include <string>

using namespace std;

rectangle::rectangle(string area)
{
  this->area = area;
}
string rectangle::get_Area()
{
  return area;
};

void rectangle::shape()
{
  cout << area << "area of rectangle" << endl;
}
