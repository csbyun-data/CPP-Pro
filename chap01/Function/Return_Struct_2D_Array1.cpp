// return시 깊이 복사로 배열값이 전달 됨
// C++ code for returning 2D array from function
// using struct keyword

#include <iostream>
using namespace std;
const int N=3;

// structure of array
struct ArrStruct {
  int arr[N][N];
};

// function for display array
void printArray( ArrStruct var) {
  for( int i=0; i<N; ++i) {
    for( int j=0; j<N; ++j) {
      cout << var.arr[i][j] << " ";
    }
    cout << endl;
  }
}

// function to initialize and returning array
ArrStruct getArray() {
  ArrStruct var;
  for( int i=0; i<N; ++i) {
    for( int j=0; j<N; ++j) {
      var.arr[i][j] = i+j;
    }
  }
  return var;
}

int main()
{
  ArrStruct arr;
  arr = getArray();

  printArray( arr);

  return 0;
}
  
