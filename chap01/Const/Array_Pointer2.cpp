// array와 array를 가르키는 pointer
#include <iostream>

using namespace std;

int main()
{
	int arr[] = { 10, 20, 30};
	
	cout << arr << endl;
	cout << *arr << endl;
	cout << arr[0] << endl;
	
	int* arr_ptr = arr;
	
	cout << arr_ptr << endl;
	cout << *arr_ptr << endl;
}

/*
0x6ffe00
10
10
0x6ffe00
10
*/
