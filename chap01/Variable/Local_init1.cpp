#include <stdio.h>

class CBase
{
  public:
    int &a;
    CBase( int& m_iX):a(m_iX) {}
};

void main()
{
  int a = 100;
  CBase my(a);
  printf("%d \n", my.a);
}
