#include <iostream>

class CPoint
{
  private:       //상속된 CCircle은 변수사용 불가
    int m_iX;
    int m_iY;
  public:
    void Assign(int x, int y);
    int Add();
};

void CPoint::Assign(int x, int y)
{
  m_iX = x;
  m_iY = y;
}

int CPoint::Add()
{
  return m_iX + m_iY;
}

class CCircle: public CPoint 
{
  private:
    int m_iRadius;
  public:
    void SetRadius(int iRadius);
    float Area();
};

void CCircle::SetRadius(int iRadius)
{ m_iRadius = iRadius; }
float CCircle:Area()
{ return float(3.14 * m_iRadius * m_iRadius); }

void main()
{
  CPoint a;
  a.Assign(2, 3);
  cout << a.Add();

  CCircle b;
  b.SetRadius(10);
  cout << b.Area();
}
