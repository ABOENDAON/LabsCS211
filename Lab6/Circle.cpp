#include "Circle.h"
#include <cmath>  // For sqrt and pow

Circle::Circle() : Shape(10, 10, 10) {}  // Default constructor with center at (10,10) and radius 10

Circle::Circle(int x, int y, int radius) : Shape(x, y, radius) {}

bool Circle::inside(const Point& p) const {
    int dx = p.getX() - anchor_.getX();
    int dy = p.getY() - anchor_.getY();
    // Calculate the distance from the point to the center of the circle
    double distance = sqrt(pow(dx, 2) + pow(dy, 2));
    // The point is inside if the distance is less than or equal to the radius
    return distance <= dimension_;
}
