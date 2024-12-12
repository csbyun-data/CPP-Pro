#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <memory.h>

using namespace std;

struct member {
	char name[10];
	char address[50];
	int age;
	int index;
};

int main()
{
	struct member mb;
	ifstream fin;
	
	fin.open("a.dat", ios::in);
	if(!fin.good()) {
		cout << "not exist file: a.data\n";
		exit(0);
	}
	
	cout << "번호 이름  주소   나이  " << endl;
	while(fin.read((char*)&mb, sizeof(mb))) {
		cout << setw(2) << mb.index << ":" << setw(7)<< mb.name 
		  << setw(20)<< mb.address << setw(10) << mb.age << endl;
		memset(&mb, 0, sizeof(mb));
	}
	fin.close();
		
	return 0;
}
