// 1. Virtual Function code

#include <stdio.h>

class CBase {
  public:
    virtual void WhoAreYou() {
      printf("CBase\n");
    }
};

CBase theApp;
CBase* AfxGetApp() {
  return &theApp;
}

void main()
{
  CBase* p;
  p = AfxGetApp();
  p->WhoAreYou();
}

// CBase
