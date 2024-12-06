#include <stdio.h>

class CPoint
{
  private:
    int m_iX;
    int m_iY;
  public:
    CPoint() {}  //Constructor, 생성자
    ~CPoint() {} //Destructor, 소멸자
    CPoint(CPoint &p) { //default copy constructor, 복사 생성자
      m_iX = p.m_iX;
      m_iY = p.m_iY;
    }

    void operator = (CPointer& p) { //default assign operator, 대입 연산자
      m_iX = p.m_iX;
      m_iY = p.m_iY;
    }

    void Set(int x, int y) {
      m_iX = x;
      m_iY = y;
    }

    void Draw()
    { printf("%d, %d\n", m_iX, m_iY); }
};

void main()
{
  CPoint a; //생성자 활용
  a.Set(2, 3);
  a.Draw();

  CPoint b(a); //복사 생성자 활용
  b.Draw();

  CPoint c = a; //대입 연산자 활용
  c.Draw();
}
