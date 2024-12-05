## 1.Class
### INDEX
* 1.구현부와 선언부
```cpp
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
