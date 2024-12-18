// pass by reference (call by reference), 참조자 전달
#include <iostream>

using namespace std;

void swap(int& a, int& b);

int main()
{
	int x = 1, y = 2;
	cout << x << ' ' << y << endl;
	
	swap(x, y);
	cout << x << ' ' << y << endl;
	
	return 0;
}

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

/*
1 2
2 1
*/
