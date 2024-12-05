// In line function : 파일 1개로 head, function, driver 기능을 가짐
#include <stdio.h>

class CPoint {
  int ix;
  int iy;
public:
  void Assign(int x, int y) {
    ix = x;
    iy = y;
  }
  int Add() {
    return ix + iy;
  }
};

CPoint a;

void main()
{
  int iResult;
  a.Assign(2,3);
  iResult = a.Add();
  cout << iResult;
}
