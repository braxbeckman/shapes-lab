#include "RightTriangle.h"
#include <cmath>

double RightTriangle::getArea() const {
    return 0.5 * base * height;
}

double RightTriangle::getPerimeter() const {
    double hypotenuse = std::sqrt(base * base + height * height);
    return base + height + hypotenuse;
}
