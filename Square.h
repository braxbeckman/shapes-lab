#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle {
public:
    Square(double side) : Rectangle(side, side) {}
    double getArea() const override;     // Optional override
    double getPerimeter() const override; // Optional override
};

#endif // SQUARE_H
