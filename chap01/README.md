## C++ Programming language code

### Index
* 1.문법
  *   1.1 함수 [here](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/README.md)
  *   1.2 얕은 복사와 깊은 복사, 정리 예정
  *   1.3 In Line. Out Line Function [InLine [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Line_Function/In_Line_Function.cpp)], [Out Line [CPoint.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Line_Function/CPoint.h), [CPoint.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Line_Function/CPoint.cpp), [main.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Line_Function/main.cpp)]
  ```txt
  In Line Function : head, function, main을 한개의 파일로 작성
  Out Line Function : 파일을 head, function , driver부로 분리해서 작성
  ```
  *  1.4 Library화 작업 [code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Library/CBase1.cpp), [code2](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Library/CBase_Override1.cpp), [code3](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Library/CBase2.cpp), [code4](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Library/CBase3.cpp)
  *  ![image](https://github.com/user-attachments/assets/333438ed-fb44-4741-b5be-80c06a762853)
  ```c
  class A {
    virtual void Set( int a, int b) {...}
    virtial void Move( int a, int b) {...}
  };
  
  A theApp;
  ```
  *  ![image](https://github.com/user-attachments/assets/37c01e40-3873-428e-b958-4febb8c4947c)
  ```c
  class B : public A {
    void Move( int a, int b) { ... }
    void Reset() {...}
  };

  B theApp2;
  ```
  *  1.5 Library화 작업2 [lib.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Library/lib.h), [lib.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Library/lib.cpp), [run.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Library/run.cpp)
  *  1.6 함수의 재정의 (Overriding) [CPoint.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Overriding/CPoint.h), [CPoint.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Overriding/CPoint.cpp), [CCircle.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Overriding/CCircle.h), [CCircle.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Overriding/CCircle.cpp), [CEllipse.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Overriding/CEllipse.h), [CEllipse.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Overriding/CEllipse.cpp), [main.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Overriding/main.cpp)
  *  ![image](https://github.com/user-attachments/assets/7b1ccab7-cf65-4593-aa81-db07098402db)
  *  1.7 상속(inheritance), Reuse [here](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Inheritance/README.md)


  
