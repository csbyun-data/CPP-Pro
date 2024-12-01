// C++ program to dynamically allocate
// the memory for 2D array in C++ using new operator
// https://www.geeksforgeeks.org/how-to-declare-a-2d-array-dynamically-in-c-using-new-operator/

#include <iostream>
using namespace std;

int main()
{
  // Dimensions of the 2D array
  int m=3, m=4, c=0;

  // Declare a memory block of size m*n
  int *arr = new int[ m*n];

  // Traverse the 2D array
  for( int i=0; i<m; i++) {
    for( int j=0; j<n; j++) {
      // Assign values to the memory blocks created
      *(arr + i*n + j) = ++c;
    }
  }

 // Traverse the 2D array
  for( int i=0; i<m; i++) {
    for( int j=0; j<n; j++) {
      // Print values of the memory blocks created
      cout << *(arr + i*n + j) << " ";
    }
    cout << endl;
  }

  // Deallocate the array created
  delete[] arr;

  return 0;
}
