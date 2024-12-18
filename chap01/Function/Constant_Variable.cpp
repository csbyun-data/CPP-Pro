#include <iostream>
using namespace std;

void foo(int &a);

int main()
{
	const int x = 1;

	foo(x);
	cout << x << endl;
	
	return 0;
}

void foo(int &a)
{
	a = 2;
}
