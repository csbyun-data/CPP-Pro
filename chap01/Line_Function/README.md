### In Line. Out Line Function
* 1 In Line. Out Line Function [Out Line [CPoint.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Line_Function/CPoint.h), [CPoint.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Line_Function/CPoint.cpp), [main.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Line_Function/main.cpp)]
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
  ```txt
  2. Out Line Function : 파일을 head, function , driver부로 분리해서 작성
  ```
