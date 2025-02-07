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
    int compare = 0;
    int swaps = 0;

    for(int i = 1; i <n; i++) {
        int key = a[ i ];
        int j = i - 1;

        while(j >= 0 && a[ j ] > key) {
            compares++;
            cout << "The number of compares is: " << compares << endl;
            a[ j + 1 ] = a[ j ];
            j --;
        }

        a [ j + 1 ] = key;
        swaps++;
        cout << "The number of swaps is: " << swaps << endl;
    }
}
 /*

 int compares = 0, swaps = 0;

    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j;

        
        // Insert key at the correct position
        a[j] = key;
        swaps++;
        cout << "The number of swaps is: " << swaps << endl;
}


for (int j = i; j > 0 ; j--) {
  //  cout << "The value of j is: " << j << endl;
  for (j = i; j > 0 && a[j - 1] > key; j--) {
            compares++;
            cout << "The number of compares is: " << compares << endl;
            a[j] = a[j - 1];  // Shift element to the right
        }


    compares++;
    cout << "The number of compares is: " << compares << endl;

swap(a[j - 1], a[j]);
    swaps++;
    cout << "The number of swaps is: " << swaps << endl;
    

} // end of loop on j
} // end of loop on i

*/
}
 // end of insertion_sort


// shuffle the first n elements of an array

void shuffle(int a[], int n) {
    srand(time(NULL));
    int randNum = rand() % n;
    for(int i = 0; i < n; i++) {
     swap(a[i], a[randNum]);
    }
}




// Sort elements the first n elements of an array in descending order

void selection_sort(int a[], int n) {
    int compares = 0;
    int swaps = 0;
    int compareCounter = 0;
    // Displays the array before it starts to sort
    cout << "Selection Sorting, Before sorting: ";
    for( int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    cout << endl;

    // Selection Sort Algorithmn
    for(int i = 0; i < n; i++) {
        int max = i;
        int compare = 0;
       

        // Find Largest Number in the Array
        for(int j = i + 1; j < n; j++) {
          
            compare++;
            compareCounter++;
            if (a[j] > a[max]) {
                max = j;
            }
        }

 
    bool swapped = false;
    if(max != i) {
        swap(a[i], a[max]);
        swaps++;
        swapped = true;
    }

    // Print number of pass
    cout << "Pass " << (i + 1) <<  ": " << compare << " comparisons and ";
    cout << (swapped ? "1 swaps." : "0 swaps.") << endl;
   
    // Print array after swapping process
    cout << "The array is now ";
    for(int k = 0; k < n; k++) {
        cout << a[k] << " ";
    }
    cout << endl;
}
    // Display final output

    cout << "End of Selection Sort." << endl;
    cout << "Total Number of Comparisons: " << compareCounter << endl;
    cout << "Total Number of Swaps: " << swaps << endl;

}



