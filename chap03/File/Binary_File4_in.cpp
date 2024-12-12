// https://blog.naver.com/errxp/222881810759, 이진파일 입출력하기

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
  cout << "double c: " << c << endl; //저장 자료와 read자료의 error문제 

  cout << "int arr[3]: ";
  for( int i=0; i<3; i++)
    cout << arr[i] << ' ';
  cout << endl;

  cout << "string str: " << str << endl;
  fip.close();

  return 0;
}
