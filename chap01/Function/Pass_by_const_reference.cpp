#include <iostream>

using namespace std;

void foo(const int& a);

int main()
{
  const int x = 1;  //non-const variable 도 전달 가능, int x = 1;
  
  foo(x);
  cout << x << endl;
  
  return 0;
}

void foo(const int& a)
{
  a = 2;  // 컴파일 [Error] assignment of read-only reference 'a'
}
