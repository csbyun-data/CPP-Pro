#include <stdio.h>

class CBase 
{
  private:
    int a;
  public:
    friend void Set(CBase& db, int x);
    void Draw()
    { printf("%d\n", a); }
};

//전역함수 선언
void Set(CBase& db, int x)
{ db.a = x; }

void main()
{
  CBase d;
  Set(d, 1);
  d.Draw();
}
