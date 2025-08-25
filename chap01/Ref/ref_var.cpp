#include <iostream>

using namespace std;

int main(void) {
  int num1 = 100;
  int &num2 = num1;
  int &num3 = num2;

  cout << "Value : " << num1 << endl;
  cout << "Ref2  : " << num2 << endl;
  cout << "Ref3  : " << num3 << endl;
  cout << "Value: " << &num1 << endl;
  cout << "Ref2 : " << &num2 << endl;
  cout << "Ref3 : " << &num3 << endl;

  return 0;
}
