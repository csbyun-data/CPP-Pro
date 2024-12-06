//﻿→ Set(int x)를 operator <<로 변경
#include <stdio.h>

class CBase 
{
  private:
    int a;
  public:
    void operator << (int x)  //void Set(int x) 
    { a = x;}
    void Draw()
    { printf("%d\n", a); }
};

void main()
{
  CBase b;
  b.operator <<(7);  //동일표현: b << 7;  ← b.Set(1);
  b.Draw();
}
