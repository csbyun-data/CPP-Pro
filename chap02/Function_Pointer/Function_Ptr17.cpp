#include <iostream>
#include <functional>

int numberInput() {
  int x{};
  std::cout << "Enter an integer: \n";
  std::cin >> x;
  return x;
}

char operationInput() {
  char op{};

  do {
    std::cout << "Enter one of the operator(+,-,*,/): \n";
    std::cin >> op;
  }
  while(op != '+' && op != '-' && op != '*' && op != '/');

  return op;
}

namespace simpleMath {
  double add(int x, int y) {
    return x+y;
  }

  double subtract(int x, int y) {
    return x-y;
  }

  double multiply(int x, int y) {
    return x*y;
  }

  double divide(int x, int y) {
    return static_cast<double>(x)/y;
  }
}


std::function<double(int,int)> getArithmeticFunction( char op ) {
  switch(op) {
    case '+': return &simpleMath::add;
    case '-': return &simpleMath::subtract;
    case '*': return &simpleMath::multiply;
    case '/': return &simpleMath::divide;
  }
}

int main()
{
  int x{ numberInput() };
  int y{ numberInput() };
  char op {operationInput()};

  std::function<double(int,int)> functions{ getArithmeticFunction(op) };
  std::cout << functions(x,y);

  return 0;
}
