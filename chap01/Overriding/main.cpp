// main.cpp

#include "CElipse.h"

void main()
{
  CPoint a;
  a.Assign( 2, 3);

  CCircle b;
  b.SetRadius(10);
  cout << b.Area();

  CElipse c;
  c.SetRadius2(20);
  cout << c.Area(); // 3.14 * 10 * 20
}
