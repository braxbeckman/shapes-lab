#ifndef ISOSCELES_RIGHT_TRIANGLE_H
#define ISOSCELES_RIGHT_TRIANGLE_H

#include "RightTriangle.h"

class IsoscelesRightTriangle : public RightTriangle {
public:
    IsoscelesRightTriangle(double side) : RightTriangle(side, side) {}
    double getArea() const override;     // Optional override
    double getPerimeter() const override; // Optional override
};

#endif // ISOSCELES_RIGHT_TRIANGLE_H
