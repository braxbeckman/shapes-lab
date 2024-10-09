#include <iostream>
#include <string>
#include "rectangle.hpp"

using namespace std;

rectangle::rectangle(string area)
{
    this->area = area;

}
string rectangle::get_area()
{
    return Area;
};

void rectangle::shape()
{
cout << area << "area of rectangle" << endl;
}