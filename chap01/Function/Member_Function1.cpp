#include <stdio.h>

class CBase 
{
  private:
    int a;
  public:
    void Set(int x) 
    { a = x;}
    void Draw()
    { printf("%d\n", a); }
};

void main()
{
  CBase b;
  b.Set(1);
  b.Draw();
}
