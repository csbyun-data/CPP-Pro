#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char* name;

public:
    Person(const char* pname) {
        name = new char[strlen(pname) + 1];
        strcpy(name, pname);
    }

    // 복사 생성자를 구현하지 않음 → 얕은 복사
    // 소멸자
    ~Person() {
        delete[] name;
        cout << "메모리 해제됨: " << name << endl;
    }

    void print() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Person p1("Alice");
    Person p2 = p1;  // 기본 복사 생성자 → 얕은 복사

    p1.print();  // Alice
    p2.print();  // Alice

    // 프로그램 종료 시 p1, p2 모두 소멸자 호출 → 같은 메모리 두 번 해제!!(Error)
    return 0;
}

