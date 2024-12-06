//constant value
#include <stdio.h>
void main()
{
  int a = 0;
  a = 3;
  const int b = 0;
  b = 3;  //Error

  //reference variable활용
  int c = 0;
  int& ref = c;
  ref = 3;

 //reference variable constant
  const int& cref = d;
  d = 3;
  cref = 3;  //Error

  //p가 가리키는 것은 상수
  int i = 0;
  const int* p = &i;
  *p = 3; //Error

  //p2는 상수
  int* const p2 = &i;
  p2 = &d; //Error 
}
