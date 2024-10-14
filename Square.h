#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle {
public:
    Square(double side) : Rectangle(side, side) {}
    double getArea() const override;     
    double getPerimeter() const override; 
};

#endif // SQUARE_H
