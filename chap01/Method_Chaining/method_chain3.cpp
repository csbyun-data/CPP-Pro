#include<iostream>
#include <string>
using namespace std;

class Calculation {
	int a;
public:
	Calculation(const int& a_in)
		: a(a_in)
	{}
	void add(const int& b) { a += b; }
	void sub(const int& b) { a -= b; }
	void mul(const int& b) { a *= b; }
	int getnum() { return a; }
	void print() { cout << a << endl; }
};

int main() {
	Calculation calc(0);
	calc.add(5);
	calc.sub(2);
	calc.mul(6);
	calc.print();
}


