#include "CCircle.h"

class CCllipse:public CCircle
{
  private:
    int m_iRadius2;
  public:
    void SetRadius2( int r);
    float Area();
};
