
#include <iostream>

void swap(int& x, int& y)
{
  int itemp;
  itemp = x;
  x = y;
  y = itemp;
}

void main()
{
  int ix = 2;
  int iy = 3;
  swap(ix, iy);
}
