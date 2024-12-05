// CEllipse.cpp

#include "CEllipse.h"

CEllipse::SetRadius2( int r)
{
  m_iRadius2 = r;
}

float CEllipse::Area()
{
  return float( 3.14 * m_Radius * m_Radius2);
}
