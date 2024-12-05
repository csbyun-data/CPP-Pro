#include <iostream.h>

class CPoint
{
  protected:       //private -> protected변경
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
    void Move(int iX, int iY);   //Method 추가
};

void CCircle::SetRadius(int iRadius)
{ 
  m_iRadius = iRadius;
}

float CCircle:Area()
{ 
  return float(3.14 * m_iRadius * m_iRadius);
}

//Method 추가, m_iX, m_iY protected변경후 사용
void CCircle::Move(int iX, int iY)
{
  m_iX = m_iX + iX;
  m_iY = m_iY + iY;
}

void main()
{
  CPoint a;
  a.Assign(2, 3);
  cout << a.Add();

  CCircle b;
  b.SetRadius(10);
  cout << b.Area();
}
