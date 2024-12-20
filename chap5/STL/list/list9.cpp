#include <iostream>
#include <cassert>
#include <list>
#include <string>
#include <algorithm>  // for reverse
using namespace std;

int main()
{
  string s("asdfg");


  list<char> list1(s.begin(), s.end());
  list<char>::iterator i;

  for (i = list1.begin(); i != list1.end(); ++i)
    cout << *i;


  reverse(list1.begin(), list1.end());

  for (i = list1.begin(); i != list1.end(); ++i)
    cout << *i;


  return 0;
}
/* 
asdfggfdsa
 */
