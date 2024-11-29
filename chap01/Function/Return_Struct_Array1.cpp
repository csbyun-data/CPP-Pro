// C++ program to demonstrating returning of a local
// array from a function using struct
// https://www.geeksforgeeks.org/how-to-return-a-local-array-from-a-cpp-function/

#include <iostream>
using namepsace std;

struct arrWrap {
  int arr[100];
};

struct arrWrap fun() {
  struct arrWrap x;

  x.arr[0] = 10;
  x.arr[1] = 20;

  return x;
}

int main()
{
  struct arrWrap x= fun();
  
  cout << x.arr[0] << " " << x.arr[1];

  return 0;
}
