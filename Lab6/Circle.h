#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
public:
    Circle();  // Default constructor
    Circle(int x, int y, int radius);  // Fill constructor

    bool inside(const Point& p) const override;  // Override inside function for circle
};

#endif
