#include <iostream>
#include <list>
using namespace std;

int main()
{
  list<int> lst; // create an empty list
  int i;

  for(i=0; i<10; i++) lst.push_back(i);

  cout << "List printed forwards:\n";
  list<int>::iterator p = lst.begin();
  while(p != lst.end()) {
    cout << *p << " ";
    p++;
  }
  cout << "\n\n";

  cout << "List printed backwards:\n";
  p = lst.end();
  while(p != lst.begin()) {
    p--; // decrement pointer before using
    cout << *p << " ";
  }

  return 0;
}

/*
List printed forwards:
0 1 2 3 4 5 6 7 8 9

List printed backwards:
9 8 7 6 5 4 3 2 1 0
*/
