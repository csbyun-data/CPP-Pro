## C++ Programming language code

### Index
* 1.문법
  *  1.1 배열 평균, 합, Max, Min [here](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Array/Calculates_Array1.cpp)
  *  1.1 함수 [here](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/README.md)
  ```txt
  1.Functions call
  1.1 Pass by reference( Call by Reference)
  2.Functions return
  ```
  ```txt
  3.Friend Function : class의 외부함수가 private member에 접근이 필요할때,
    operator overloading시, 두 객체의 비공개 member의 접근이 필요할때 사용
    상속되지 않음, encapsulation 파괴
  class Box {
  private:
    int width;
  public:
    Box(int w) : width(w) {}
    friend void showWidth(Box b);
  }

  void ShowWidth(Box b) {
    cout << "width: " << b.width << endl;
  }
  
  -- 연산자 overloading, friend 함수
  class Point {
  private:
    int x, y;
  public:
    Point(int a, int b) : x(a), y(b) {}
    frined Point operator+(Point a, Point b);
  };
  Point operator+(Point a, Point b) {
    return Point(a.x + b.x, a.y + b.y);
  }
  ``` 
  ```txt  
  4.Member function을 연산자 <<로 사용
  ```
  *  1.2 얕은 복사와 깊은 복사, 정리 예정
  *  1.3 In Line. Out Line Function [Out Line [CPoint.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Line_Function/CPoint.h), [CPoint.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Line_Function/CPoint.cpp), [main.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Line_Function/main.cpp)]
  ```txt
  In Line Function : head, function, main을 한개의 파일로 작성
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
  *  1.6 상속(inheritance), Reuse [here](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Inheritance/README.md)
  *  1.7 다형성(Polymorphism)  
  ```
  -- Function Overloading
  -- Operator Overloading
  class Point {
  public:
    int x, y;
    Point(int a, int b) : x(a), y(b) {}
    Point operator+(const Point& p) {
      return Point(x+p.x, y+p.y);
    }
  };
  -- Virtual Function & Overriding : 상속관계, parent는 virtual key word, child는 override key word
  class Animal {
  public:
    virtial void sound() { cout << "Some sound" << endl; }
  };
  
  class Dog : public Animal {
  public:
    void sound() overried { cout << "Bark" << endl; }
  };
  ```
    * 1.7.1 함수의 재정의 (Overriding) [CPoint.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Overriding/CPoint.h), [CPoint.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Overriding/CPoint.cpp), [CCircle.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Overriding/CCircle.h), [CCircle.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Overriding/CCircle.cpp), [CEllipse.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Overriding/CEllipse.h), [CEllipse.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Overriding/CEllipse.cpp), [main.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Overriding/main.cpp)  
  ![image](https://github.com/user-attachments/assets/7b1ccab7-cf65-4593-aa81-db07098402db)
  * 1.7.2 추상 클래스(Abstract Class) & 순수 가상 함수
  ```
  -- 추상 class는 instance를 만들수 없음
  -- 순수 가상함수 :=0으로 선언된 가상 함수
  class Shape {
  public:
    virtual void draw() = 0;
  };

  class Circle : public Shape {
  public:
    void draw() override { cout << "Drawing Circle" << endl; }
  };  
  ```
  * 1.7.3 캡술화(Encapsulation)
  ```
  class BankAccount {
  private:
    double balance;
  public:
    void deposit(double amount) { balance += amount; }
    double getBalance() { return balance; }
  };
  ```
  *  1.8 Member변수 초기화 
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

*  2.Class 간략정리
   * 2.1 구현부와 선언부
   ```cpp
   -- class : object를 만들기 위한 구조체
   -- object : class를 이용하여 만든 instance(메모리에 생성된 객체)

   -- 접근 지정자(Access Specifiers)
   -- public: 전체 접근가능 , private : class 내부에서만 접근가능, protected: 상속 class에서 접근가능

   -- 생성자, Constructor : object가 생성될때 호출되는 함수(ClassName())
   -- 소멸자, Destructor : object가 소멸될때 호출되는 함수 (~ClassName())
   
   /*	Person.h	*/
   // 선언부 Person.h
    
   //여러번 include 되는걸 방지하기 위한 전처리문이다.
   #ifndef PROJECT_PERSON_H // 보통 '영어_대문자_H' 로 이름을 짓는다.
   #define PROJECT_PERSON_H
    
   class Person
   {
       private: // 접근 제한자(비공개)
           char* m_name;
           int m_age = 0; // c++11 부터는 기본값 설정(생성자가 없을 때)도 가능하다.
           bool m_gender;
           
       public: //접근 제한자(공개)
           Person(); // 디폴트 생성자
           ~Person(); //소멸자
           void SetPerson(char* name, int age, bool gender); 
           
       	//함수도 public 선언 가능
           void ShowPerson();
   };
   #endif // ifndef 종료
   ```
 
   ```cpp
   // Person.cpp, 구현부
    
   #include "Person.h" // 선언부를 include 한다.
    
   Person::Person(){
   }
    
   Person::~Person(){
       // delete[] 배열이름
   }
    
   void Person::SetPerson(char* name, int age, bool gender){
       this->m_name = name; // 참고로 지역변수의 이름이 다르다면 this를 생략해도 된다.
       this->m_age = age;
       this->m_gender = gender;
   }
    
   void Person::ShowPerson(){
       printf("%s, %d, ", this->m_name, this->m_age);
       
       if(this->m_gender == true)
           printf("남성\n");
       else
           pring("여성\n);
   }
   ```
   
   ```cpp
   #include "Person.h"
   // main.cpp
    
   int main()
   {
       Person p1;
       p1.SetPerson("홍길동",20,true);
       p1.ShowPerson();
    
       return 0;
   }
   ```
   
   * 2.2 Class 객체 생성
   ```txt
   Class c; 와 Class *c = new Class(); 차이
   
   // 일반 자료형 처럼 사용하면 스택 메모리에 할당 됨
   // 변수의 생성범위를 벗어나면 자동으로 메모리에서 할당 해제됨
   Class c;
   c.method();
   
   // new keyword는 포인터를 사용한 동적할당에 사용
   // 힙 메모리에 저장되고, new연산자에 의해 생성자가 자동으로 호출 됨
   Class *c;
   c = new Class;
   c.showData();  // pointer를 이용 class접근 (->)
   
   free(c);   // 소멸자를 실행하지 않고 힙 메모리 삭제
   delete c;  // 소멸자를 실행하고 힙 메모리 삭제
   ```
 
   * 2.3 생성자 Overriding
     * 2.3.1 생성자(Constructor)
     ```cpp
     class Rectangle {
       private: // 명시하지않으면 기본값은 private입니다.
         int length;
         int breadth;
       public:
         Rectangle() { // 생성자
           length = 0;
           breadth = 0;
         }
    
         Rectangle(int l, int b) { // 생성자 오버라이딩
           length = l;
           breadth = b;
         }
         ~Rectangle(){ // 소멸자
           cout << "Destructor";
         }
      };
     ```
     * 2.3.2 생성자 위임
     ```cpp
     Class_init() {
         // Code A
     }
   
     Class_init(int value) : Class_init() {// 다른 생성자를 위임한다.
         // Code B
         // 여기에 Class_init()를 직접 호출하는 건 권장하는 방법이 아니다.
     }
     ```
   
   * 2.4 소멸자(Destructor)
   ```cpp
   // 객체가 소멸될때 자동으로 실행되는 class의 맴버 함수
   // delete를 이용하여 소멸자를 호출
   class MyArray {
   private:
       int* Array;
       int Length;
    
   public:
       MyArray(int length) { // 생성자
           this->Array = new int[static_cast<size_t>(length)]{};
           this->Length = length;
       }
    
       ~MyArray(){ // 소멸자
           delete[] Array; 
           // 메모리가 그룹 형식(리스트)이라면 delete[] 키워드를 사용하자.
       }
   };
   ```
   
   * 2.5 Class member 초기화
   ```cpp
   // int x=5, 동일표현 int x {5};
   #include <iostream>
    
   class Rectangle {
   private:
       double m_Length = 1.0; // 또는 m_Length { 1.0 };
       double m_Width = 1.0;
    
   public:
       Rectangle(double length, double width) : m_Length(length), m_Width(width){
           // 기본값을 사용하지 않는 초기화. + 이렇게하면 메모리를 더 아낄 수 있다.
       }
    
       Rectangle(double length) : m_Length(length){
           // m_Length 변수는 값이 초기화된다. // m_Width 변수는 기본값 1.0
       }
   };
    
   int main() {
       int x = {3};
       Rectangle y{ 2.0, 3.0}; // length = 2 , width = 3
       Rectangle z{2.0}; // length =2 , width = 기본값 (기본값을 안적었다면 쓰레기값)
       return 0;
   }
   ```
   
   * 2.6 Class Chaining
   ```cpp
   -- this pointer : class 내부에서 object 자신을 가리키는 pointer
   class Box {
     int width;
   public:
     Box(int width) {
       this->width = width;
     }
   };
   ```
   ```cpp
   // 클래스의 this 포인터를 응용하면 Number.Add(5).Add(5).Mul(6) 표현이 가능
   class Calc {
   private: 
       int m_Value = 0;
       
   public: 
       Calc& Add(int value) {
           m_Value += value; return *this; 
           // 헷갈리지말자. this 자체는 4바이트 포인터 주소값이다.
           // Calc 클래스를 반환할려면 값(*this)을 반환해야 한다
       } 
       
       Calc& Sub(int value) {
           m_Value -= value; return *this; 
       }
       
       Calc& Mul(int value) {
           m_Value *= value; return *this; 
       }
       
       int GetValue() { return m_Value; }
   }; // 세미콜론 까먹지 말자.
    
   int main() { 
       Calc calc; 
       calc.Add(5).Sub(3).Mul(4); 
       cout << calc.GetValue() << endl; // (+5-3)*4 = 8 
       return 0; 
   }
   ```
   
   * 2.7 Template Method
     * 2.7.1 Template 사용법
     ```cpp
     // 다양한 자료형을 overloading 구현할때 사용
      
     int sum(int a, int b){
         return a + b;
     }
     double sum(double a, double b){
         return a + b;
     }
     ```
     
     ```cpp
     // typename T 과 class T 제공 //
      
     template <typename T>
     T sum(T a, T b){ // sum<int>(a,b) 처럼 사용
         return a + b;
     }
      
     template <class T1, class T2>
     void printAll(T1 a, T2 b){ 
     	// printAll(m1,m2) 처럼 사용
         // 클래스의 경우 컴파일러가 자료형을 판단 가능하기에 생략가능.
     	
         cout << "T1 : " << a << endl;
         cout << "T2 : " << b << endl;
         cout << "T1 + T2 : " << a + b << endl;
     }
     ```
     * 2.7.2 메소드가 자료형에 따라 다라게 동작
     ```cpp
     template <class T> // 원형
     T sum(T a, T b){
        return a + b;
     }
      
     template<>
     char * sum<char*> (char* s1, char* s2){ // char형
        char * str= "[char *]문자열은 더할 수 없습니다."; 
        cout << "s1 : " << s1 << endl;
        cout << "s2 : " << s2 << endl;
        return str; 
     }
        
     template<>
     const char * sum<const char*> (const char * s1,const char *s2){ // const char 형
        char * str= "[const char *]문자열은 더할 수 없습니다.";
        cout << "const s1 : " << s1 << endl;
        cout << "const s2 : " << s2 << endl;
        return str; 
     }
      
     template<>
     string sum<string>(string s1, string s2){ // string 형
        string str = "[string]문자열은 더할 수 없습니다.";
        cout << "string s1 : " << s1 << endl;
        cout << "string s2 : " << s2 << endl; 
        return str;
     }
     ```
     * 2.7.3 클래스에서 template method사용
     ```cpp
     template <class T> // 클래스 내부에서 템플릿 사용
     class Person{
     private:
         string name;
         T height;
     public:
         Person(string name, T height):name(name), height(height){}
      
         void printAll(){
             cout << "name : " << name << endl;
             cout << "number : " << height << endl;
         };
      
         void setName(string name){
             this->name = name;
         }
         void setNumber(T height){
             this->height = height;
         }
     };
     ```
     * 2.7.4 구현부와 선언부 분리
     ```cpp
     //클래스 외부에서 해당 메서드를 구현할 때 (헤더파일 분리)
     template <class T>
     class Person{
      
     private:
         string name;
         T height;
     public:
         Person(string name, T height);
         void printAll();
         void setName(string name);
         void setNumber(T height);
     }; // 선언부 끝 (.h)
     ```
     ```cpp
     //구현부 시작 (.cpp)
     template <class T> // :: 처럼, 각 메서드마다 새롭게 적어주어야 함.
     Person<T>::Person(string name, T height):name(name), height(height){}
      
     template <class T>
     void Person<T>::printAll(){
         cout << "name : " << name << endl;
         cout << "number : " << height << endl;
     };
     // ... 이하 생략
     ```
  
  







  
