#include <iostream>
using namespace std;

class X {
  public:
    static const int a;
};

const int X::a=3;  // 반드시 변수 재선언과 초기값 입력

int main()
{
  cout << X::a << endl;

  return 0;
}
