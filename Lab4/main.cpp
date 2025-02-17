#include "Student.h"
#include <iostream>

int main() {
    // Create student objects
    Student s1;
    Student s2("Marika", "she/her/hers");

    // Print initial state
    cout << s1.to_string() << endl;
    cout << s2.to_string() << endl;

    // Update a specific lab
    s2.update_lab(2, 8);
    cout << "\nAfter updating lab 2:\n" << s2.to_string() << endl;

    // Update all labs using a string
    s2.update_labs("9,8,7,6,5,4,3,2,1,0");
    cout << "\nAfter updating all labs with string:\n" << s2.to_string() << endl;

    // Update all labs using an array
    unsigned new_grades[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    s1.update_labs(new_grades);
    cout << "\nAfter updating all labs with an array:\n" << s1.to_string() << endl;

    return 0;
}
