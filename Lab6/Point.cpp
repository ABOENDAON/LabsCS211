#include "Point.h"

// Constructor for Point
Point::Point(int x, int y) : x_(x), y_(y) {}

// Setters
void Point::setX(int x) {
    x_ = x;
}

void Point::setY(int y) {
    y_ = y;
}

// Getters
int Point::getX() const {
    return x_;
}

int Point::getY() const {
    return y_;
}
