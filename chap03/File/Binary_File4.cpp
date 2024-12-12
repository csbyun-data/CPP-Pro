// 숫자형, 배열, 문자열 저장

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	ofstream fop("test.bin", ios_base::out|ios_base::binary);
	
	int a = 143;
	int b = 27;
	double c = 3.14;
	
	int arr[3] = {2, 4, 6};
	string str = "Hello";
	
	fop.write((char *)&a, sizeof(int));
	fop.write((char *)arr, sizeof(arr));
	
	fop << b << c << str;
	
	fop.close();
	
	return 0;
}
