### Library화 작업
* Library화 작업
  * 1.Virtual Function code
  ```
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
  ```
  
  *  1.4 Library화 작업 [code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Library/CBase1.cpp), [code2](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Library/CBase_Override1.cpp), [code3](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Library/CBase2.cpp), [code4](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Library/CBase3.cpp)  
