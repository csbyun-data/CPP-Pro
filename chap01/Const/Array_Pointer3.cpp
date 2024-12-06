#include <iostream>

using namespace std;

int main()
{
  int arr[] = { 10, 20, 30};
  cout << sizeof(arr) << endl; // sizeof(int) * 3

  int* arr_ptr = arr;          // arr_ptr의 주소의 저장되 변수 크기 
  cout << sizeof(arr_ptr) << endl;
}

/*
12
8
*/
