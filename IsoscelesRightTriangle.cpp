#include "IsoscelesRightTriangle.h"
#include <cmath>

double IsoscelesRightTriangle::getArea() const {
    return 0.5 * base * height; 
}

double IsoscelesRightTriangle::getPerimeter() const {
    double hypotenuse = std::sqrt(base * base + height * height);
    return base + height + hypotenuse; 
}
