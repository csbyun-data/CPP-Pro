#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
	ifstream fip("test.bin", ios_base::in|ios_base::binary);
	
	int a, b;
	double c;
	int arr[3];
	string str;
	
	fip.read((char *)&a, sizeof(int));
	fip.read((char *)arr, sizeof(arr));
	fip >> b >> c >> str;
	
	cout << "int a: " << a << endl;
	cout << "int b: " << b << endl;
	cout << "double c: " << c << endl;
	
	cout << "int arr[3]: ";
	for( int i=0; i<3; i++)
		cout << arr[i] << ' ';
	cout << endl;
	
	cout << "string str: " << str << endl;
	
	fip.close();
	
	return 0;
}
