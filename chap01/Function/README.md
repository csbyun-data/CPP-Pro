### Functions
* 1.Functions call [[call by value](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Call_by_value1.cpp), [call by address](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Call_by_address1.cpp), [call by reference1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Call_by_reference1.cpp)]
  ```cpp
  1. call by value
  void swap(int x, int y) {}
  int main(void) {
    int x, y;
    swap( x, y);
  }
  ```
  ```cpp
  2. call by address, call by pointer
   void swap(int *x, int *y) {};
   void main() {
     int ix = 2;
     int iy = 3;
     swap(&ix, &iy);
   }
  ```
  ```cpp
  3. call by reference
  // Reference Variable 처리
  int a;
  int &b = a;

  // function 처리
  void Ref(int &b) {}  //2. 처리

  void main()
  {
    int a = 2;
    Ref(a);  // int &b = a;
  }

  ```
  * 1.1 Pass by reference( Call by Reference) [code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Passing_Array.cpp), [code2](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Pass_by_Reference.cpp), [code3](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Constant_Variable.cpp), [code4](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Pass_by_const_reference.cpp), [code5](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/References_to_pointers.cpp)
  ```txt
  01) 함수에 배열 전달(Passing arrays to function)
    배열의 이름은 배열의 address를 가르킨다. 배열의 개수를 반드시 넘겨야 함
    void prt_array(int (&numbers)[5], int size);
    int main() {
       int my_numbers[] = {1, 2, 3, 4, 5};
       prt_array(my_numbers, 5);
    }
  ```
  <img width="645" height="414" alt="image" src="https://github.com/user-attachments/assets/ad484766-9c17-43d3-b439-dc560d55c687" />
  
  ```
  // 배열을 참조자로 넘길때, 배열릥 개수를 넘기지 않는 방법 -> std::array, std::vector 사용
  #include <iostream>
  #include <vector>

  void printVector( const std::vector<int> &arr ) {
    for( int x:arr ) {
      std::cout << x << " ";
    }
  }

  int main() {
    std::vector<int> data = { 1, 2, 3, 4};
    printVector(data);
  }
  ```
  
  02) Pass by reference( Call by reference), 참조자 전달
    void swap(int& a, int& b);
    
    int main() {
      int x = 1, y = 2;
      swap(x, y);
    }  
  
  03) Constant variable을 참조전달 error확인
    [Error] invalid initialization of reference of type 'int&' from expression of type 'const int'
    [Note] in passing argument 1 of 'void foo(int&)'
  
  04) const 참조는 변수가 참조를 통해 변경되는 것을 허용하지 않는 참조, 변경하면 컴파일 Error발생
    [Error] assignment of read-only reference 'a'
    const 매개 변수를 사용하면 non-const 및 const 인수를 함수에 전달가능
  
    void foo(const int& a);
    int main() {
      const int x = 1;  //non-const variable 도 전달 가능, int x = 1;
      foo(x);
    }
  05) 포인터 참조(References to pointers)
    // pass pointer by reference
    void foo(int*& ptr) {}
    
    int main() {
      int x = 5;
      int *ptr = &x;
      foo(ptr);
    }
  ```
  * 1.2 define a default value
  ```
  #include <iostream>
  int Adder( int num1=1, int num2=2);
  int main(void) {
    std::cout << Adder() << std::endl;
    std::cout << Adder(5) << std::endl;
    std::cout << Adder(3, 5) << std::endl;

    return 0;
  }
  int Adder( int num1, int num2) {
    return num1+num2;
  }
  ```
* 2.Functions return
  * 2.1 함수에서 Local Variable 반환 [문제있는 [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Return_Local_Variable1.cppp)],[동적배열 반환[code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Return_Dynamic_Array2.cpp)], [정적변수 반환[code2](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Return_Static_Variable1.cpp)]
  
  * 2.2 함수에서 Local Array 반환 [문제있는 [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Return_Local_Array1.cpp), [code2](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Return_Local_Pointer1.cpp)], [동적배열 반환[code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Return_Dynamic_Array1.cpp), [code2](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Return_Dynamic_Array3.cpp)], [정적배열 반환 [code2](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Return_Static_Array1.cpp)], [구조체 반환 [code3](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Return_Struct_Array1.cpp)]
  ```txt
  함수에서 배열을 올바르게 반환 방법
  1) Using Dynamically Allocated Array
  2) Using Static Array
  3) Using Structure
  ```
  * 2.3 함수에서 2D 배열 반환 [동적배열 반환[code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Return_Dynamic_2D_Array1.cpp)], [정적배열 반환 [code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Return_Static_2D_Array1.cpp)], [구조체 반환 [code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Return_Struct_2D_Array1.cpp)]
  
  * 2.4 2D 배열 사용 [단일 포인터 사용 [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Single_Pointer_2D.cpp)], [포인터 배열 사용 [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Array_Pointer_2D.cpp)]
  * 2.5 3D 배열 사용 [단일 포인터 사용 [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Single_Pointer_3D.cpp)], [트리플 포인터 사용[code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Triple_Pointer_3D.cpp)]

* 3.Friend Function
  ```
  -- Friend Function : class의 외부함수가 private member에 접근이 필요할때,
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
  * 3.1 friend function을 class의 private variable의 접속이 가능하게 하는 함수, class에 권한 부여 [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Friend_Function1.cpp)
  * 3.2 function에서 private변수 사용 [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Friend_Function2.cpp)
  * 3.3 상속받은 class에서 private variable 사용  [code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Friend_Function3_1.cpp), [code2](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Friend_Function3_2.cpp)
  * 3.4 상속 class, nested class사용 error 해결 문장 [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Friend_Function4.cpp)

* 4.Member function을 연산자 <<로 사용
  * 4.1 Set Function을 사용하여 private variable 값을 변경 [code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Member_Function1.cpp), [code2](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Member_Function2.cpp)
  * 4.2 Friend 함수 및 전역 함수로 활용 [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Member_Function3.cpp)
  * 4.3 Friend operator <<로 변경 [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Member_Function4.cpp)       
