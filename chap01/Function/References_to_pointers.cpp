#include <iostream>

// pass pointer by reference
void foo(int*& ptr) {
  ptr = NULL;
}

int main()
{
  int x = 5;
  int *ptr = &x;
  std::cout << "ptr is: " << (ptr ? "non-null" : "null") << '\n';
  foo(ptr);
  std::cout << "ptr is: " << (ptr ? "non-null" : "null") << '\n';
  
  return 0;
}

/*
ptr is: non-null
ptr is: null
*/
