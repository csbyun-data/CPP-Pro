### Member 변수
* 1.Member private 변수 초기화 방법
  ```
  1. 생성자 이용 초기화
  2. setter 함수
  3. friend 함수
  4. 대입 연산자를 사용
  ```
  ```C
  // 1.1 생성자 이용 초기화
  class Person {
  private:
    int age;
  public:
    Person(int a) : age(a) {}
  };
  
  // 1.2 member initializer lists
  #include <iostream>
  #include <string>
  namespace std;
  
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
  ```
  //2.1 setter()이용
  class Person {
  private:
    int age;
  public:
    void setAge(int a) {
      age = a;
    }
    int getAge() const {
      return age;
    }
  };

  int main() {
    Person p;
    p.setAge(25);  // OK
    //p.age = 30;  // Error!, private 접근 불가
    cout << p.getAge() << "\n";
  }
  ```
  * 2.상수형 member 변수 초기화  
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
  * 3.member reference 초기화
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
  * 4.지역 변수를 이용한 초기화
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
