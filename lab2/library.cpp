#include <iostream>
#include "library.h"
using namespace std;

void display(const int a[], int n) {
for (int i = 0; i < n; i++) {
cout << a[i] << ' ';
}
cout << endl;
}

// This function sorts the first n elements using insertion sort.

void insertion_sort(int a[], int n) {
    int compares, swaps;




for (int i = 1; i < n; i++) {
    //cout << "The value of i is: " << i << endl;
 
for (int j = i; j > 0 && a[j - ]]; j--) {
  //  cout << "The value of j is: " << j << endl;
  

    compares++;
    cout << "The number of compares is: " << compares << endl;

swap(a[j - 1], a[j]);
    swaps++;
    cout << "The number of swaps is: " << swaps << endl;
    

} //end of loop on j
} //end of loop on i


} //end of insertion_sort


//shuffle the first n elements of an array

void shuffle(int a[], int n) {
    srand(time(NULL));
    int randNum = rand() % n;
    for(int i = 0; i < n; i++) {
     swap(a[i], a[randNum]);
    }
}




//sort elements the first n elements of an array in descending order

void selection_sort(int a[], int n);
