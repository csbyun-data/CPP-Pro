// C++ code for returning 2D array from function using Dynamic array
// https://www.geeksforgeeks.org/cpp-return-2d-array-from-function/

#include <iostream>

using namespace std;

const int N=3;

// function to display array
void printArray(int **arr) {
  for( int i=0; i<N; ++i) {
    for( int j=0; j<N; ++j) {
      cout << arr[i][j]<<" ";
    }
    cout << endl;
  }
}

// function to initialize and returning array
int **getArray() {
  int **arr = new int*[N];

  for( int i=0; i<N; ++i) {
    arr[i] = new int[N];
    for( int j=0; j<N; ++j) {
      arr[i][j] = i+j;
    }
  }
  return arr;
}

int main()
{
  int **arr;
  arr = getArray();

  printArray( arr);

  // Delete the array created
  for( int i-0; i<N; i++) // To delete the inner arrays
    delete[] arr[i];
  delete[] arr; // To delete the outer array which contained the pointers
                // of all the inner arrays
  return 0;
}

// 0 1 2
// 1 2 3
// 2 3 4

  
