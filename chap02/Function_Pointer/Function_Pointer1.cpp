// Warning error 발생 // Calculrate* c1 = new Calculrate{};
// [Warning] extended initializer lists only available with -std=c++11 or -std=gnu++11
​// Dev-C++ Tools 해결
// Project Options > Compiler > Code Generation > (-std) GNU C++ 11 선택 후 컴파일 실행   
    
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
