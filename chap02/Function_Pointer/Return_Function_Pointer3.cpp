// C++ program for the above approach
// https://www.geeksforgeeks.org/returning-a-function-pointer-from-a-function-in-c-cpp/
#include <iostream>
using namespace std;
 
// This defines a type for function prototypes
typedef void (*ptr)(int&);
typedef ptr (*pm)();
 
void fun1(int& z) {
  printf("geeks!!\n");
  cout << z + 10 << endl;
}
 
// Function that returns type ptr
ptr fun() {
  printf("Hello ");
 
  // or return fun1;
  /* or
    int(*pt)(int*)=fun1;
    return pt
  */
  return &fun1;
}
 
// Driver Code
int main()
{
  int a = 10;
  pm u = fun;
  
    /*
    Above line assigns 'u' which is 
    of type 'pm' to an array of size 
    1 which has function pointers as its
    elements and these function pointers
    in turn return other function pointer 
    which points to other functions.
 
    Now this 'p' array contains a function 
    pointer 'u' which points to fun() and 
    this fun() returns another function 
    pointer which points to fun1() and
    this fun1() returns void.
  */
  
  void (*(*p[1])())(int&) = { u };

  (*p[0]())(a);
}

// Hello geeks!!
// 20
