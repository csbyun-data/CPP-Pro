// 구조체를 이용한 파일 입출력

#include <iostream>
#include <stdlib.h>
#include <malloc.h>
#include <fstream>

using namespace std;
struct member {
  char name[10];
  char address[50];
  int age;
  int index;
};

int main()
{
  ofstream fout;
  fout.open("a.dat", ios::out|ios::binary);
  // if(!fout) {...} 파일 열기 실패를 한 경우

  char buf[5];
  int size = 3;
  struct member* pm = (struct member*) malloc(sizeof(struct member)*size);

  for(int i=0; i<size; i++) {
    (pm+i)->index = i+1;

    cout << "Exit: (Enter) \n";
    cout << i+1 << "> input name : ";
    cin.get((pm+i)->name, 10);
    if((pm+i)->name[0] == '\0')
      break;
    cin.ignore(100, '\n'); // Keyboard 입력버퍼에 남아있는 버퍼를 비움

    cout << "address: " ;
    cin.get((pm+i)->address, 10);
    cin.ignore(100, '\n');

    cout << "age: " ;
    cin.get(buf, 5);
    (pm+i)->age = atoi(buf);
    cin.ignore(100, '\n');

    fout.write((char*)(pm+i), sizeof(struct member));
  }
  fout.close();
  free(pm);
  
  return 0;
}
