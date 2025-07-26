#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char* name;

public:
    // 생성자
    Person(const char* pname) {
        name = new char[strlen(pname) + 1];
        strcpy(name, pname);
    }

    // 얕은 복사 (컴파일러가 생성한 기본 복사 생성자)
    // Person(const Person& other) = default;

    // 깊은 복사 생성자
    Person(const Person& other) {
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
    }

    // 소멸자
    ~Person() {
        delete[] name;
    }

    void setName(const char* newName) {
        strcpy(name, newName);
    }

    void print() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Person p1("Alice");
    Person p2 = p1;  // 복사 생성자 호출 (깊은 복사)

    p2.setName("Bob");

    p1.print();  // Name: Alice
    p2.print();  // Name: Bob

    return 0;
}
