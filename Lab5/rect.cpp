#include "Rectangle.h"
#include <iostream>

using namespace std;

int main() {
    // Testing == operator
    cout << "Testing == as a member function:\n";

    Rectangle first;
    Rectangle second;
    second.setWidth(10);
    second.setLength(5);

    Rectangle third;
    third.setWidth(4);
    third.setLength(6);

    cout << "First rectangle: " << first.to_string() << endl;
    cout << "Second rectangle: " << second.to_string() << endl;
    cout << "Third rectangle: " << third.to_string() << endl;

    cout << "Compare first with itself: " << (first == first ? "true" : "false") << endl;
    cout << "Compare first with second: " << (first == second ? "true" : "false") << endl;
    cout << "Compare second with third: " << (second == third ? "true" : "false") << endl;

    // Testing += operator
    cout << "\nTesting +=:\n";

    Rectangle r1;
    cout << "First rectangle: " << r1.to_string() << endl;
    
    r1 += 2;
    cout << "After += 2: " << r1.to_string() << endl;
    
    r1 += 3;
    cout << "After += 3: " << r1.to_string() << endl;

    // Additional edge cases for +=
    cout << "After += 0 (no change): ";
    r1 += 0;
    cout << r1.to_string() << endl;

    cout << "After += 100 (large increase): ";
    r1 += 100;
    cout << r1.to_string() << endl;

    // Testing > operator
    cout << "\nTesting > as a friend function:\n";
    cout << "Compare first with second: " << (first > second ? "true" : "false") << endl;
    cout << "Compare second with third: " << (second > third ? "true" : "false") << endl;
    cout << "Compare third with first: " << (third > first ? "true" : "false") << endl;

    // Edge case: Compare rectangle with itself
    cout << "Compare first with itself: " << (first > first ? "true" : "false") << endl;

    // Testing != operator
    cout << "\nTesting != as a friend function:\n";
    unsigned value = 50;
    cout << value << " != first.area(): " << (value != first ? "true" : "false") << endl;
    cout << "100 != first.area(): " << (100 != first ? "true" : "false") << endl; // Should be true
    cout << "20 != first.area(): " << (20 != first ? "true" : "false") << endl; // Should be false if correct

    // Testing << operator
    cout << "\nTesting << as a friend function:\n";
    cout << first << endl;
    cout << second << endl;
    cout << third << endl;

    // Additional edge case testing
    Rectangle emptyRect;
    emptyRect.setWidth(0);
    emptyRect.setLength(0);
    cout << "Empty rectangle: " << emptyRect << endl; // Should properly handle zero values

    return 0;
}
