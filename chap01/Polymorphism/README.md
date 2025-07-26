### Polymorphism
* 1.다형성(Polymorphism)  
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
* 2.함수의 재정의 (Overriding) [CPoint.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Overriding/CPoint.h), [CPoint.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Overriding/CPoint.cpp), [CCircle.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Overriding/CCircle.h), [CCircle.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Overriding/CCircle.cpp), [CEllipse.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Overriding/CEllipse.h), [CEllipse.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Overriding/CEllipse.cpp), [main.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Overriding/main.cpp)  
![image](https://github.com/user-attachments/assets/7b1ccab7-cf65-4593-aa81-db07098402db)
* 3.추상 클래스(Abstract Class) & 순수 가상 함수
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
* 4.캡술화(Encapsulation)
  ```
  class BankAccount {
  private:
    double balance;
  public:
    void deposit(double amount) { balance += amount; }
    double getBalance() { return balance; }
  };
  ```
