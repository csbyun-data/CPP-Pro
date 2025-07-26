## C++ Programming language code

### Index
* 1.문법
  *  1.8 Member변수 초기화
  ```C
  #include <iostream>
  #include <string>

  class Person {
  private:
    string name;
    int age;
  public:
    Person(string n, int a) : name(n), age(a) {}
    void show() {
      cout << "name: " << name << ", age " << age << endl;
    }
  };

  int main() {
    Person p("홍길동", 30);
    p.show();
  
    return 0;
  } 
  ```
  ```c
  1. 상수형 member변수 초기화
  #include <stdio.h>
  class CBase {
    const int a;
    CBase:a(100) {}
  };
  void main() {
    CBase base;
    printf("%d \n", base.a);
  }

  class MyClass {
  private:
    const int id;
  public:
    MyClass(int i):id(i) {}
  };
  ```
  ```C  
  2. member reference 초기화
  #include <stdio.h>
  int m_iX = 0; //전역 변수

  class CBase {
  public:
    int &a;
    CBase():a(m_ix){}
  };
  void main() {
    CBase base;
    printf("%d \n", base.a);
  }
  ```
  ```C  
  3. 지역 변수를 이용한 초기화
  #include <stdio.h>

  class CBase {
  public:
    int &a;
    CBase( int &m_iX):a(m_iX) {}
  };
  void main() {
    int a = 100;
    CBase my(a);
    printf("%d \n", my.a);
  }  
  ```
  * 1.9 Stream출력 객체 [here](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Stream/README.md)
  * 1.10 Default Member Function [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Default_Member_Function.cpp)
  * 1.11 static member variable, function 사용 [code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Static/Static_Variable1.cpp), [code2](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Static/Static_Variable2.cpp), [code3](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Static/Static_Function1.cpp)
  ```txt
   1. static variable
   class Counter {
   public:
     static int count;
     Counter() { count++; }
   };
   int Counter::count = 0;
   2. static function, non-static function 활용, 초기화
   3. static, non-static function 사용법
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
  * 1.15 this 포인터와 Chaining [[code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Method_Chaining/method_chain2.cpp), [code2](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Method_Chaining/method_chain3.cpp)], [[chain code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Method_Chaining/chain1_1.cpp), [chain code2](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Method_Chaining/chain1_2.cpp) ]
