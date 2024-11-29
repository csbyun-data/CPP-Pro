// Program to demonstrate how to return
// static variables from a function
// 정적 변수는 life time은 프로그램이 끝날때까지 존재함.
#include <iostream>
using namespace std;

in &getStaticVariable() {
  // Static variable
  static int staticVar=10;

  // Returning Static variable
  return staticVar;
}

int main()
{
  int &result = getStaticVariable();
  cout << "Value of static variable: " << result < endl;

  // Modifying the static variable
  result += 10;
  cout << "Updated value of static variable: " << result << endl;

  return 0;
}
