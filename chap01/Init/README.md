### Member 변수
* Member 변수 초기화
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
  * 1.상수형 member 변수 초기화  
  ```c

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
  * 2.member reference 초기화
  ```C  
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
  * 3.지역 변수를 이용한 초기화
  ```C  
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
