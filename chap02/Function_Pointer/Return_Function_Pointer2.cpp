// C++ program for the above approach

#include <iostream>
using namespace std;
typedef int (*ptr)(int*);
typedef ptr (*pm)();
 
int fun1(int* y) {
  cout << "geeks!!" << endl;
  return *y + 10;
}
 
// Function that returns the type ptr
ptr fun() {
  cout << "Hello ";
  return &fun1;
}
 
// Driver Code
int main()
{
  int a = 10;
  pm u = fun;
  cout << (*u())(&a) << endl;
 
  return 0;
}

// Hello geeks!!
// 20
