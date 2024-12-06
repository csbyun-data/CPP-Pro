#include <iostream>

void swap(int* x, int* y) //주소를 넘겨받아 처리함
{
  int itemp;
  itemp = *x;
  *x = *y;
  *y = itemp;
}

void main()
{
  int ix = 2;
  int iy = 3;
  //변수의 주소를 넘겨줌.
  swap(&ix, &iy);
}
