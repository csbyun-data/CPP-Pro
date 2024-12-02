// https://www.geeksforgeeks.org/returning-a-function-pointer-from-a-function-in-c-cpp/

#include <stdio.h>
 
int add(int a, int b) {
  return a + b;
}
 
int subtract(int a, int b) {
  return a - b;
}
 
int (*operation(char op))(int, int) {
  if (op == '+') {
    return &add;
  } else if (op == '-') {
    return &subtract;
  } else {
    return NULL;
  }
}
 
int main() {
  int (*func_ptr)(int, int) = operation('+');
  printf("%d\n", func_ptr(4, 5));

  return 0;
}

// 9
