#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
	char fname[20];
	string data("Hello!"), tmp, line;
	
	cout << "input file name (a.out): ";
	cin.getline(fname, 20);
	
	cout << "input string line: ";
	getline(cin, line);
	
	ofstream fout(fname);
	if(!fout) {
		cout << "Failed to open file"  << endl;
		return 0;
	}
	
	fout << data << endl;
	fout << line << endl;
	
	fout.close();
	
	ifstream fin(fname);
	while(getline(fin, tmp))
		cout << "read  data: " << tmp << endl;
	fin.close();

}
