#include <iostream>
#include <cstdlib>
#include <ctime>
#include "library.h"
using namespace std;
int main() {
int capacity;
cout << "Enter the capacity of the array:\t";
cin >> capacity;
int test[capacity];

for (int i = 0; i < capacity; i++) {
test[i] = i ;
}
cout << "Before shuffling:\n";
display(test, capacity); 
cout << "After calling the shuffle function once: ";
shuffle(test, capacity);
display(test, capacity); 
insertion_sort(test,capacity);
cout << "After calling the shuffle function again: ";
shuffle(test, capacity);
display(test, capacity); 
insertion_sort(test,capacity);
//Expand the main function with calls to the shuffle and sorting functions.

shuffle(test,capacity);
selection_sort(test,capacity);
}
