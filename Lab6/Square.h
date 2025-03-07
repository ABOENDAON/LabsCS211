#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public Shape {
public:
    Square();  // Default constructor
    Square(int x, int y, int sideLength);  // Fill constructor

    bool inside(const Point& p) const override;  // Override inside function for square
};

#endif
