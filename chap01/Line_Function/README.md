### In Line, Out Line Function
* 1 In Line Function [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Line_Function/In_Line_Function.cpp)
  ```txt
  1. In Line Function : head, function, main을 한개의 파일로 작성
  
  // In_Line_Function.cpp
  #include <stdio.h>

  class CPoint {
    int ix;
    int iy;
  public:
    void Assign(int x, int y) {
      ix = x;
      iy = y;
    }
    int Add() {
      return ix + iy;
    }
  };

  CPoint a;

  void main()
  {
    int iResult;
    a.Assign(2,3);
    iResult = a.Add();
    cout << iResult;
  }
  ```
* 2.Out Line Function [[CPoint.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Line_Function/CPoint.h), [CPoint.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Line_Function/CPoint.cpp), [main.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Line_Function/main.cpp)] 
  ```txt
  2. Out Line Function : 파일을 head, function , driver부로 분리해서 작성
  // CPoint.h
  #include <stdio.h>
  class CPoint {
    int ix;
    int iy;
  public:
    void Assign(int x, int y);
    int Add();
  };

  //CPoint.cpp
  void CPoint::Assign(int x, int y) {
    ix = x;
    iy = y;
  }
  int CPoint::Add() {
    return ix + iy;
  }

  //main.cpp
  CPoint a;

  void main()
  {
    int IResult;
    a.Assign(2, 3);
    iResult = a.Add();
    cout << iResult;
  }
  ```
  
