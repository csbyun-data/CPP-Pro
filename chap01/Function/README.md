## 1.Functions
### Index
* 1.Functions call [[call by value](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Call_by_value1.cpp), [call by address](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Call_by_address1.cpp), [call by reference1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Call_by_reference1.cpp)]
    ```cpp
    1. call by value
    2. call by address
    3. call by reference
    // Reference Variable 처리
    int a;
    int &b = a;

    // function 처리
    void Ref(int &b) {}  //2. 처리

    void main()
    {
      int a = 2;
      Ref(a);  //1. int &b = a;
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
    * 3.1 friend function을 class의 private variable의 접속이 가능하게 하는 함수, class에 권한 부여 [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Friend_Function1.cpp)
    * 3.2 function에서 private변수 사용 [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Friend_Function2.cpp)
    * 3.3 상속받은 class에서 private variable 사용  [code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Friend_Function3_1.cpp), [code2](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Friend_Function3_2.cpp)
    * 3.4 상속 class, nested class사용 error 해결 문장 [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Friend_Function4.cpp)

* 4.Member function을 연산자 <<로 사용
    * 4.1 Set Function을 사용하여 private variable 값을 변경 [code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Member_Function1.cpp), [code2](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Function/Member_Function2.cpp)
    * 4.2 Friend 함수 및 전역 함수로 활용
    * 4.3 Friend operator <<로 변경        
