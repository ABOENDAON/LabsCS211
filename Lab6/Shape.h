#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include "Point.h"

class Shape {
protected:
    static int nextID;  // Static member to track the next ID value
    int ID_;            // Unique ID for each Shape
    Point anchor_;      // The anchor point of the shape
    int dimension_;     // The size of the shape (side length for Square, radius for Circle)

public:
    Shape();  // Default constructor
    Shape(int x, int y, int s);  // Fill constructor

    void setAnchor(int x, int y);  // Set anchor without changing dimension
    std::string to_string() const;  // Returns string representation of the shape

    virtual bool inside(const Point& p) const;  // Checks if point is inside the shape (overridden in derived classes)
};

#endif
