// C++ Program to return a local array from a function while
// violating some rules

// [Warning] address of local variable 'arr' returned [-Wreturn-local-addr]
// local variable은 stack 메모리에 생성
// 함수호출이 끝난후 local variable가 존재하지 않은 수 있음, segmentation fault
#include <iostream>

using namespace std;

int *fun() {
  int arr[100];

  // some operations on arr[]
  arr[0] = 10;
  arr[1] = 20;

  return arr;
}

int main()
{
  int *ptr = fun();
  count << ptr[0] << " " << ptr[1];

  return 0;
}
