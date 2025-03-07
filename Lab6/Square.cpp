#include "Square.h"

Square::Square() : Shape() {}  // Calls Shape default constructor

Square::Square(int x, int y, int sideLength) : Shape(x, y, sideLength) {}

bool Square::inside(const Point& p) const {
    int x = p.getX();
    int y = p.getY();
    // A square's boundaries are from (anchor.x, anchor.y) to (anchor.x + dimension, anchor.y + dimension)
    return (x >= anchor_.getX() && x <= anchor_.getX() + dimension_) &&
           (y >= anchor_.getY() && y <= anchor_.getY() + dimension_);
}
