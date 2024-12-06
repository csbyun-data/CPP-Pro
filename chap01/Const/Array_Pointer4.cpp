#include <iostream>

using namespace std;

int main()
{
  int arr[] = { 10, 20, 30};
  int* arr_ptr = arr;

  cout << arr_ptr << endl;
  cout << (arr_ptr + 1) << endl;
  cout << (arr_ptr + 2) << endl;

  cout << *arr_ptr << endl;
  cout << *(arr_ptr + 1) << endl;
  cout << *(arr_ptr + 2) << endl;
}

/*
0x6ffe00
0x6ffe04
0x6ffe08
10
20
30
*/
