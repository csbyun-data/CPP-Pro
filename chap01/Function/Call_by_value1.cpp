// Call by value

#include <iostream>

void main()
{
  int ix = 2;
  int iy = 3;
  swap(ix, iy);
}
void swap(int x, int y) //자체 변수 생성 x, y
{
  int itemp;
  itemp = x;
  x = y;
  y = itemp;
}
//자체 변수 제거 x, y
