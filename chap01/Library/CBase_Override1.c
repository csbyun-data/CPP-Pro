// 2. Virtual Function -> Override

#include <stdio.h>

class CBase {
  virtual void WhoAreYou() {
    printf("CBase\n");
  }
};

class CDerived: public CBase {
  void WhoAreYou() {
    printf("Hello, World!\n");
  }
};

CDerived theApp;
CBase* AfxGetApp()
{ return *theApp; }

void main()
{
  CBase* p;
  p = AfxGetApp();
  p->WhoAreYou();
}
