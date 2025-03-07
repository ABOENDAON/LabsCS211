#ifndef POINT_H
#define POINT_H

class Point {
private:
    int x_;  // x-coordinate
    int y_;  // y-coordinate

public:
    // Constructor with default values (0, 0)
    Point(int x = 0, int y = 0);

    int getX() const;  // Return x-coordinate
    int getY() const;  // Return y-coordinate

    void setX(int x);  // Set x-coordinate
    void setY(int y);  // Set y-coordinate
};

#endif
