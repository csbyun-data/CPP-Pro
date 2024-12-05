#include <stdio.h>

int m_iX = 0; //전역 변수

class CBase
{
  public:
    int &a;
    CBase():a(m_ix) {}
};

void main()
{
  CBase base;
  printf("%d \n", base.a);
}
