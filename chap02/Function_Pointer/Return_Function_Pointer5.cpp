// 위의 code와 동일한 예제
// https://www.geeksforgeeks.org/returning-a-function-pointer-from-a-function-in-c-cpp/

#include <iostream>
 
using namespace std;
 
int add(int a, int b) {
  return a + b;
}
 
int subtract(int a, int b) {
  return a - b;
}
 
int (*get_operation(char op))(int, int) {
  if (op == '+') {
    return &add;
  } else if (op == '-') {
    return &subtract;
  } else {
    return NULL;
  }
}
 
int main() 
{
  int (*op)(int, int) = get_operation('+');
  int result = op(3, 4);
  cout << "Result: " << result << endl;

  return 0;
}

// Result: 7
