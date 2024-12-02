#include <iostream>

class Calculrate
{
public:
  int add(int a, int b) { return a+b; }
  int subtract( int a, int b) { return a-b; }
};

int main()
{
  Calculrate *c1 = new Calculrate{};
  
  int (Calculrate::*cfp)( int, int) = &Calculrate::add;
  std::cout << (c1->*cfp)( 10, 20) << std::endl;

  cfp = &Calculrate::subtract;
  std::cout << (c1->*cfp)( 10, 20) << std::endl;

  return 0;
}

// 30
// -10
