#include <iostream>
#include "Circle.h"
#include "Square.h"
#include "Point.h"

using namespace std;

int main() {
    // Testing Circle with custom constructor
    Circle c(5, 10, 10);
    cout << "Circle created with custom constructor: " << endl;
    cout << c.to_string() << endl;
    Point insideCircle(12, 12);
    Point outsideCircle(20, 20);

    cout << "Inside Circle (12,12)? " << (c.inside(insideCircle) ? "Yes" : "No") << endl;
    cout << "Inside Circle (20,20)? " << (c.inside(outsideCircle) ? "Yes" : "No") << endl;

    // Testing Square with custom constructor
    Square s(4, 2, 2);
    cout << "Square created with custom constructor: " << endl;
    cout << s.to_string() << endl;
    Point insideSquare(3, 3);
    Point outsideSquare(10, 10);

    cout << "Inside Square (3,3)? " << (s.inside(insideSquare) ? "Yes" : "No") << endl;
    cout << "Inside Square (10,10)? " << (s.inside(outsideSquare) ? "Yes" : "No") << endl;

    // Testing default constructors for both Circle and Square
    Circle defaultCircle;  // Uses default constructor of Circle
    Square defaultSquare;  // Uses default constructor of Square
    cout << "Default Circle created: " << endl;
    cout << defaultCircle.to_string() << endl;

    cout << "Default Square created: " << endl;
    cout << defaultSquare.to_string() << endl;

    return 0;
}


