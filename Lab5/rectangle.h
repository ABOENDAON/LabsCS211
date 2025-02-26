#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <string>

using namespace std;

class Rectangle {
private:
    unsigned width_, length_;

public:
    // Constructor
    Rectangle();

    // Mutators
    void setWidth(unsigned);
    void setLength(unsigned);

    // Accessors
    double area() const;
    string to_string() const;

    // Overloaded operator member functions
    bool operator==(const Rectangle& other) const;  // Compare congruency
    Rectangle& operator+=(unsigned value);          // Increase dimensions

    // Overloaded non-member friend functions
    friend bool operator>(const Rectangle& r1, const Rectangle& r2);   // Compare area
    friend bool operator!=(unsigned value, const Rectangle& rect);     // Compare with area
    friend ostream& operator<<(ostream& os, const Rectangle& rect);    // Print rectangle info
};

#endif
