#include <stdio.h>

class CBase
{
  const int a;
  CBase():a(100) {}
};

void main()
{
  CBase base;
  printf("%d \n", base.a);
}
