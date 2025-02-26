#include "Rectangle.h"
#include <iostream>
#include <string>

using namespace std;

// Default constructor
Rectangle::Rectangle() : width_(5), length_(10) {}

// Mutators
void Rectangle::setWidth(unsigned w) { this->width_ = w; }
void Rectangle::setLength(unsigned l) { this->length_ = l; }

// Accessors
double Rectangle::area() const { return this->width_ * this->length_; }

// Convert to string
string Rectangle::to_string() const {
    return "Dimension: " + std::to_string(this->width_) + " by " +
           std::to_string(this->length_);
}

// Overloaded == operator (member function)
bool Rectangle::operator==(const Rectangle& other) const {
    return (width_ == other.width_ && length_ == other.length_) ||
           (width_ == other.length_ && length_ == other.width_);
}

// Overloaded += operator (member function)
Rectangle& Rectangle::operator+=(unsigned value) {
    width_ += value;
    length_ += value;
    return *this;
}

// Overloaded > operator (friend function)
bool operator>(const Rectangle& r1, const Rectangle& r2) {
    return r1.area() > r2.area();
}

// Overloaded != operator (friend function)
bool operator!=(unsigned value, const Rectangle& rect) {
    return value != rect.area();
}

// Overloaded << operator (friend function)
ostream& operator<<(ostream& os, const Rectangle& rect) {
    os << "Rectangle: Width = " << rect.width_ << ", Length = " << rect.length_;
    return os;
}
