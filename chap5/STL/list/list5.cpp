#include <iostream>
#include <cassert>
#include <algorithm>
#include <string>
#include <list>
#include <iostream>
using namespace std;

void print_list(string s)
{
  cout << s << endl;
}

int main()
{
  list<string> dlist;

  dlist.insert(dlist.end(), "AAA");
  dlist.insert(dlist.end(), "BBBB");
  dlist.insert(dlist.end(), "CCCCC");

  
  for_each(dlist.begin(), dlist.end(), print_list);
  return 0;
}
