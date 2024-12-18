## 1.String
### INDEX
* 1.String
  * 1.1 문자열 기본 사용법 [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap02/String/Strings1..cpp)
  * 1.2 문자열 배열, 포인터 활용법 [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap02/String/String_Array1.cpp)
  * 1.3 문자열 Class생성 [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap02/String/Class_String.cpp)
  * 1.4 문자열 iterator사용 [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap02/String/String_iterator.cpp)
  * 1.5 문자열형 숫자를 숫자형 변수로 변경
  ```txt
  // [Error] invalid cast from type 'std::string {aka std::basic_string<char>}' to type 'int'
  #include <iostream>
  #include <string>
  using namespace std;
  
  int main() {
    string str = "7";
    int num;
  
    num = (int)str; //<- Error 발생
  }
  ```
  


### 참조 LIST
* 1 [참조: [www.java2s.com/Code/Cpp/String](http://www.java2s.com/Code/Cpp/String/CatalogString.htm)]
* 2 [참조: [www.tutorialspoint.com/cplusplus/cpp_strings](https://www.tutorialspoint.com/cplusplus/cpp_strings.htm)]
