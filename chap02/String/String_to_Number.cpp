#include <iostream>
#include <string>
#include <sstream> // stringstream을 사용

using namespace std;

int main() {
  stringstream ss;
  string str = "7";
  int num;

  // str 변수에서 string 값을 추출
  ss << str;

 // 변환된 값을 int 변수에
 ss >> num;

 cout << num << endl; 
}
