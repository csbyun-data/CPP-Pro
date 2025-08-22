#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  int num1 = 100;
  int &num2 = num1;

  cout << "Value: " << num1 << endl;
  cout << "Ref  : " << num2 << endl;
  cout << "Value: " << &num1 << endl;
  cout << "Ref  : " << &num2 << endl;

  return 0;
}
