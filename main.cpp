#include "circle.hpp"
#include "rectangle.hpp"
#include "right_triangle.hpp"
#include <cassert>
#include <iostream>
using namespace std;

int main()
{
  // declaring the three subobjects and passing in their required variables
  Circle c(3);
  Rectangle r(4, 5);
  Right_triangle rt(3, 4, 5);


  assert(c.get_Perimeter() > 18);
  assert(c.get_Perimeter() < 19);
  assert(c.get_Area() > 88);
  assert(c.get_Area() < 89);
  assert(r.get_Area() == 20);
  assert(r.get_Perimeter() == 18);
  assert(rt.get_Area() == 6);
  assert(rt.get_Perimeter() == 12);
}
