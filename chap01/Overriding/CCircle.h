// CCircle.h
#include "CPoint.h"

class CCircle::public CPoint
{
  private:
    int m_iRadius;
  public:
    void SetRadius( int Radius);
    float Area();
    void Move( int iX, int iY);
};
