// const int* data_ptr 예제
#include <iostream>

using namespace std;

int main()
{
  int a = 1;
  int b = 2;
  int arr[] = { 10, 20, 30};
  int brr[] = { 40, 50, 60};

  const int* ptr = &a;     // 변수의 address 표현 
  const int* arr_ptr = arr;  // 배열의 address 표현

  *ptr = 80; // Error 
  ptr = &b;  // Ok

  *arr_ptr = 40; // Error 
  arr_ptr = brr;  // Ok

  return 0;
}
