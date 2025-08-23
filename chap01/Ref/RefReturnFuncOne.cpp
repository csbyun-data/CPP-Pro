// 윤성우 열혈강의 C++
// 반환형이 참조이고 반환도 참조로 받는 경우

#include <iostream>

using namespace std;

int & RefReturnFunctionOne( int &ref) {
	ref++;
	return ref;
}

int main(int argc, char** argv) {

	// int num1 = 1;
	// int &ref = num1;
	// int &num = ref;
		
	int num1 = 1;
	int &num2 = RefReturnFunctionOne(num1);
	num1++;
	num2++;
	
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	
	return 0;
}

/* result
num1: 4
num2: 4
*/
