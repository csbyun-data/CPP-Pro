// CCircle.cpp

#include "CCircle.h"
void CCircle:SetRadius( int iRadius)
{
  m_iRadius = iRadius; 
}

float CCircle::Area()
{
  return float (3.14 * m_iRadius * m_iRadius);
}

void CCircle::Move( int iX, int iY)
{
  m_iX = m_iX + iX;
  m_iY = m_iY + iY;
}
