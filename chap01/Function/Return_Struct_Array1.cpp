// C++ program to demonstrating returning of a local
// array from a function using struct
// https://www.geeksforgeeks.org/how-to-return-a-local-array-from-a-cpp-function/
// struct의 멤버 배열이 깊이 복사가 되어 return value로 전달됨
// 지역변수가 메모리에서 제거되어도 전달됨

#include <iostream>
using namepsace std;

struct arrWrap {
  int arr[100];
};

struct arrWrap fun() {
  struct arrWrap x;

  x.arr[0] = 10;
  x.arr[1] = 20;

  return x;
}

int main()
{
  struct arrWrap x= fun();
  
  cout << x.arr[0] << " " << x.arr[1];

  return 0;
}
