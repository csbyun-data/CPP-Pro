// bin파일 입출력
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
  ofstream fop("test.bin", ios_base::out|ios_base::binary);

  char a = 'A';
  char b = 'B';
  char c = 'C';

  char str[6] = "abcde";

  fop.write(&a, sizeof(char));
  fop.write(str, sizeof(str)-1);
  fop.write(&b, sizeof(b));

  fop << "Hello" << ' ';
  fop.put('7');

  fop.write(&c, 1);
  fop.close();

  return 0;
}
