### Library화 작업
* Library화 작업 1
  * 1.Virtual Function code [code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Library/CBase1.cpp), [code2](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Library/CBase_Override1.cpp), [code3](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Library/CBase2.cpp), [code4](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Library/CBase3.cpp)  
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
  * Virtual Function -> Override
  ```
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
  
  // Hello, World!
  ```
  * Virtual function 사용  
  ![image](https://github.com/user-attachments/assets/333438ed-fb44-4741-b5be-80c06a762853)
  ```
  // Vrutual function 사용
  
  class A {
  protected:
    int m_ix;
    int m_iy;
  public:
    virtual void Set(int a, int b) {
      m_ix = a;
      m_iy = b;
    }

    virtual void Move(int a, int b) {
      m_ix += a;
      m_iy += b;
    }
  };
  
  void main()
  {
    A theApp;
  }
  ```  
  ![image](https://github.com/user-attachments/assets/37c01e40-3873-428e-b958-4febb8c4947c)
  ```
  class A {
  protected:
    int m_ix;
    int m_iy;
  public:
    virtual void Set(int a, int b) {
      m_ix = a;
      m_iy = b;
    }
    virtual void Move(int a, int b) {
      m_ix += a;
      m_iy += b;
    }
  };
  
  class B: publuc A {
  public:
    void Move(int a, int b) {
      m_ix += a*2;
      m_iy += b*2;
    }
    void Reset() {
      m_ix = 0;
      m_iy = 0;
    }
  };
  
  void main()
  {
    A theApp;
    B theApp2;
  }
  ```
* Library화 작업 2 
  * lib [lib.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Library/lib.h), [lib.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Library/lib.cpp), [run.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Library/run.cpp)  
  ```
  //lib.h
  #include <stdio.h>
  class CBase {
  public:
    virtual void WhoAraYou() {
      printf("CBase!\n");
  };

  //lib.cpp
  #include "lib.h"
  extern CBase theApp;

  CBase* AfxGetApp() {
    return &theApp;
  }

  void main()
  {
    CBase* p;
    p = AfxGetApp();
    p->WhoAreYou();
  }

  //run.cpp
  #include "lib.h"

  CBase theApp;
  ```
  
