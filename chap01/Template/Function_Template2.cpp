#include <stdio.h>
template <typename T>  //동일표현: template <class T> 자료형 template
T max(T a, T b)
{
  if(a > b)
    return a;
  else
    return b;
}

void main()
{
  int a, b, c;
  double a1, b1, c1;
  a = 1, b = 2;
  a1 = 1, b1 = 2;

  c = max(a, b);      //interger형
  c1 = max1(a1, b1);  //double형
}
