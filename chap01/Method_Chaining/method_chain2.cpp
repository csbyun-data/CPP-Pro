// https://blog.naver.com/bulljy/222422816562
// this 포인터와 연쇄호출
#include<iostream>
#include <string>

using namespace std;

class Simple {
  int id;
public:
  Simple(const int& in) {
    setid(in);
    cout << "주소 : " << this << endl;
  }

  void setid(const int& input) {
    id = input;
  }
};

int main() {
  Simple s1(1);
  Simple s2(2);
  cout << "s1의 주소 : " << &s1 << endl;
  cout << "s2의 주소 : " << &s2 << endl;
}



