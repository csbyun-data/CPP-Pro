// Program to demostrate how to return dynamic arrays from a function
// 동적 메모리 할당은 heap 메모리에 생성됨
#include <iostream>
using namespace std;

int *createDynamicArray( int size) {
  // Dynamically allocation an array
  int *dynamicArray = new int[size];
  
  for( int i=0; i<size; ++i) {
    // Set values in the array
    dynamicArray[i] = i*2;
  }

  // Return the dynamically allocated array
  return dynamicArray;
}

int main()
{
  // Create and get the dynamically allocated array
  int *returnedArray = createDynamicArray(5);

  // use the returned array
  for( int i=0; i<5; ++i) {
    cout << "Element " << i << ": " << returnedArray[i] << endl;
  }

  // Dellocate the dynamic array
  delete[] returnedArray;
}

// Element 0: 0
// Element 1: 2
// Element 2: 4
// Element 3: 6
// Element 4: 8
