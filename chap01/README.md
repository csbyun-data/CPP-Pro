## C++ Programming language code

### Index
* 1.문법
  *  1.1 배열 평균, 합, Max, Min [here](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Array/Calculates_Array1.cpp)
  *  1.1 함수 [here](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/README.md)
  *  1.2 얕은 복사와 깊은 복사, 정리 예정
  *  1.3 In Line. Out Line Function [InLine [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Line_Function/In_Line_Function.cpp)], [Out Line [CPoint.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Line_Function/CPoint.h), [CPoint.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Line_Function/CPoint.cpp), [main.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Line_Function/main.cpp)]
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
  *  1.8 Member변수 초기화 [상수변수 초기화](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Variable/Constant_init1.cpp), [참조 초기화](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Variable/Reference_init1.cpp), [지역변수 초기화](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Variable/Local_init1.cpp)
  ```c
  01) 상수형 member변수 초기화
  02) member reference 초기화
  03) 지역 변수를 이용한 초기화
  ```
  * 1.9 Stream출력 객체 [here](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Stream/README.md)
  * 1.10 Default Member Function [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Default_Member_Function.cpp)
  * 1.11 static member variable, function 사용 [code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Static/Static_Variable1.cpp), [code2](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Static/Static_Variable2.cpp), [code3](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Static/Static_Function1.cpp)
  ```txt
   1. static function, non-static function 활용, 초기화
   2. static, non-static function 사용법
  ```
  * 1.12 class, function template 사용법 [code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Template/Template1.cpp), [code2](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Template/Template2.cpp), [code3](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Template/Template_MFC.cpp), [code4](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Template/Function_Template1.cpp), [code5](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Template/Function_Template2.cpp)
  ```txt
   1. 자료형을 T로 1개 사용하는 예
   2. 자료형을 T1, T2로 2개를 사용하는 예
   3. MFC library 사용 Template
   4. 함수 템플릿(Function Template)
  ```
  * 1.13 const, static const 사용 [here](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Const/READMD.md)
  ```txt
    1-1. const keyword 사용
    1-2. const member 함수 사용
    1-3. static const 변수 사용
    2-1. 배열과 포인터
    2-2 포인터의 const 모드
  ```
  * 1.14 Method Chaining [code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Method_Chaining/method_chain1.cpp)
  * 1.15 this 포인터와 Chaining [[code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Method_Chaining/method_chain2.cpp), [code2](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Method_Chaining/method_chain3.cpp)], [[chain code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Method_Chaining/chain1_1.cpp), [chain code2](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Method_Chaining/chain1_1.cpp) ]

*  2.Class 간략정리 [[here](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Class/README.md)]



  
