#include <iostream>

using namespace std;

int *dont_do_this() {
  int num=10;
  int *num_ptr = &num;

  return num_ptr;
}

int main()
{
  int *a = NULL;

  a = dont_do_this();
  cout << *a << endl;

  return 0;
}

// run result ? 출력 결과는 OK
// 프로그램에서 포인터 주소가 제거된 것을 반환
// 10
