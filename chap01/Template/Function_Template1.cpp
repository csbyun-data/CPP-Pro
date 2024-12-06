#include <stdio.h>
int max(int a, int b)
{
  if(a > b)
    return a;
  else
    return b;
}

double max(double a, double b)
int max1(double a, double b)
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

  c = max(a, b);
  c1 = max1(a1, b1);
}
