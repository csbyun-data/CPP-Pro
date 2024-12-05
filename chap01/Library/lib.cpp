#include "lib.h"

extern CBase theApp;

CBase* AfxGetApp()
{ return &theApp; }

void main()
{
  CBase* p;
  p = AfxGetApp();
  p->WhoAreYou();
}
