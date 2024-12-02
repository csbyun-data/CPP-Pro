// arithmetic operations
// 산술 연산자를 입력받아 처리할 함수를 선택함
#include <iostream>

class Calculrate
{
public: 
	int add(int a, int b) { return a + b; }
	int subtract(int a, int b) { return a - b; }
};

int main()
{
	Calculrate* c1 = new Calculrate{};
	int (Calculrate::*cfp)(int, int);
	
	char operator1;
	
	std::cout << "input ( +, -):" ;
	std::cin >> operator1;
	
	 
	 if (operator1 == '+') {
	 	cfp = &Calculrate::add;
	 } else if (operator1 == '-') {
	 	cfp = &Calculrate::subtract;
	 } else {
	 	std::cout << "operator error! " << std::endl;
	 	return 1;
	 }
	 
	std::cout << (c1->*cfp)(10, 20) << std::endl;
	
	return 0;
}
