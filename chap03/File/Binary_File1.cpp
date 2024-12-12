// 파일출력 스트림 객체 생성
// ifstream (read) / ofstream (write) / fstream (read, write) 
#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
	char fname[] = "a.dat";
	int age = 21;
	char name[] = "name1";

	ofstream fout(fname); 
	if(!fout) {
		cout << "Failed to open file"  << endl;
		return 0;
	}
	
	fout << age << '\n';
	fout << name << endl;

    fout.close()
}
