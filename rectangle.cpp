
#include "Rectangle.h"

double Rectangle::getArea() const {
    return width * height; 
}

double Rectangle::getPerimeter() const {
    return 2 * (width + height); 
}