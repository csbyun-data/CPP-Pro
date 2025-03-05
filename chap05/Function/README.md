
## 1. Function Using STL
### INDEX
* 1.Function 활용
    * 1.1 double형 배열을 매개변수로 전달받은 template 구현 [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap05/Function/Template_Arrays1.cpp)
    * 1.2 vector를 매개변수로 전달받은 template 구현 [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap05/Function/Template_Arrays2.cpp)
    * 1.3 전달된 인수를 출력하는 함수[for_each문 사용] [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap05/Function/for_each.cpp)
    * 1.4 함수 인자: int vector 활용 [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap05/Function/Min_Max.cpp)
    * 1.5 Function object 활용 Accumulator [code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap05/Function/accumulate_sum.cpp), [code2](https://github.com/csbyun-data/CPP-Pro/blob/main/chap05/Function/accumulate_operator.cpp)
    ```txt
    accumulator 함수는 배열의 합, 리스트의 모든 원소의 합, 곱.. 등 나열된 원소의 특정한 연산을 할때 사용
    // accumulate의 함수 예
      inline int accumulate (int* _F, int* _L, int _V, int (*_B)(int, int));
    
    // accumulate의 함수 예
      inline int accumulate (int* _F, int* _L, int _V, CAdd _B);
    ```

* 3.참조
   * [참조: [www.java2s.com/Code/Cpp/STL-Basics/template-Array.htm](http://www.java2s.com/Code/Cpp/STL-Basics/template-Array.htm)]
   * [참조: [en.cppreference.com/w/cpp/algorithm/for_each](https://en.cppreference.com/w/cpp/algorithm/for_each)]
   * [참조: [en.cppreference.com/w/cpp/algorithm/max_element](https://en.cppreference.com/w/cpp/algorithm/max_element)]

