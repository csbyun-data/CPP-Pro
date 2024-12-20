## 1. Function Pointer

###  Index
* 1.Function Pointer
  * 1.1 member function pointer [code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap02/Function_Pointer/Function_Pointer1.cpp), [code2](https://github.com/csbyun-data/CPP-Pro/blob/main/chap02/Function_Pointer/Function_Pointer2.cpp)
  * 1.2 Function pointer to member function of class [code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap02/Function_Pointer/Function_Pointer3.cpp), [typedef사용[code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap02/Function_Pointer/Function_Pointer_typedef.cpp), [code2](https://github.com/csbyun-data/CPP-Pro/blob/main/chap02/Function_Pointer/Function_Pointer_typedef2.cpp)]
  ```c
  // Function pointer의 typedef 사용 예
  typedef int (Calculrate::*t_cfp)(int, int);
  ...
  cfp = &Calculrate::add;
  ```
  * 1.3 함수를 객체로 사용(Functor) [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap02/Function_Pointer/Functor1.cpp)    
  * 1.4 STL의 copy, vector, for_each함수 사용(Functor) [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap02/Function_Pointer/Functor2.cpp)
  * 1.5 함수에서 함수 포인터를 반환하는 예제 [잘못된 [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap02/Function_Pointer/Return_Function_Pointer1.cpp) ], [수정된 [code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap02/Function_Pointer/Return_Function_Pointer2.cpp), [code2](https://github.com/csbyun-data/CPP-Pro/blob/main/chap02/Function_Pointer/Return_Function_Pointer3.cpp) ], [code3](https://github.com/csbyun-data/CPP-Pro/blob/main/chap02/Function_Pointer/Return_Function_Pointer4.cpp), [code4](https://github.com/csbyun-data/CPP-Pro/blob/main/chap02/Function_Pointer/Return_Function_Pointer5.cpp)
  * 1.6 C++ 17, 함수 포인터 [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap02/Function_Pointer/Function_Ptr17.cpp)

* 2.참조SITE
  * 2.1 [참조: 함수에서 함수포인터 반환] [here](https://www.geeksforgeeks.org/returning-a-function-pointer-from-a-function-in-c-cpp/)
  * 2.2 [참조: pointer to member function] [here](https://paladin.tistory.com/385)
  * 2.3 [참조: www.learncpp.com/cpp-tutorial/function-pointers/](https://www.learncpp.com/cpp-tutorial/function-pointers/)
  
