// function pointer의 type을 선언하고 사용
#include <iostream>

class Calculrate
{
public:
  int add( int a, int b) { return a+b; }
  int subtract( int a, int b) { return a-b; }
};

typedef int (Calculrate::T_cfp)( int, int);

int main()
{
  Calculrate *c1 = new Calculrate{};
  t_cfp cfp;

  char operator1;

  std::cout << "input ( +, -):";
  std::cin >> operator1;

  if( operator1 == '+' {
    cfp = &Calculrate::add;
  } else if ( operator1 == '-') {
    cfp = &Calculrate::subtract;
  } else {
    std::cout << "operator error! " << std::endl;
    return 1;
  }
}
// input ( +, -):+
// 30
  
