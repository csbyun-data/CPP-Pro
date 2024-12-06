#include<iostream>
#include <string>
using namespace std;

class Calculation {
	int a;
public:
	Calculation(const int& a_in)
		: a(a_in)
	{}
	Calculation* add(const int& b) { a += b; return this; }
	Calculation* sub(const int& b) { a -= b; return this; }
	Calculation* mul(const int& b) { a *= b; return this; }
	int getnum() { return a; }
	void print() { cout << a << endl; }
};
int main() {
	Calculation calc(0);
	calc.add(5)->sub(2)->mul(6)->print();
}
[출처] [C/C++] 8.7 this 포인터와 연쇄 호출 Chaining Member Functions|작성자 2je0

