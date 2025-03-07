#include "Shape.h"

// Initialize static nextID to 1 (or another starting value)
int Shape::nextID = 1;

Shape::Shape() : anchor_(0, 0), dimension_(10), ID_(nextID++) {}

Shape::Shape(int x, int y, int s) : anchor_(x, y), dimension_(s), ID_(nextID++) {}

void Shape::setAnchor(int x, int y) {
    anchor_.setX(x);
    anchor_.setY(y);
}

std::string Shape::to_string() const {
    return "Shape ID: " + std::to_string(ID_) + ", Dimension: " + std::to_string(dimension_) +
           ", Anchor: (" + std::to_string(anchor_.getX()) + ", " + std::to_string(anchor_.getY()) + ")";
}

bool Shape::inside(const Point& p) const {
    return false;  // Base class doesn't know how to check "inside" for generic shapes
}

