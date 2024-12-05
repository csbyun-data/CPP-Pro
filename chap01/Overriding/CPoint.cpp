// CPoint.cpp
#include "CPoint.h"

void CPoint::Assign( int x, int y)
{
  m_iX = x;
  m_iY = y;
}

int CPoint::Add()
{
  return m_iX + m_iY;
}
