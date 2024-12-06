#include <stdio.h>

class CBase 
{
  private:
    int a;
  public:
    friend void operator << (CBase db, int x);   //friend void Set(CBase& db, int x);
    void Draw()
    { printf("%d\n", a); }
};

//전역함수 선언
void operator << (CBase& db, int x)   //void Set(CBase& db, int x)
{ db.a = x; }

void main()
{
  CBase d;
  Set(d, 1);
  d.Draw();
}
