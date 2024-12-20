// Use a map to create a phone directory
#include <iostream>
#include <map>
#include <cstring>
using namespace std;
   
class name {
  char str[40];
public:
  name() { strcpy(str, ""); }
  name(char *s) { strcpy(str, s); }
  char *get() { return str; }
};
   
bool operator<(name a, name b)
{ return strcmp(a.get(), b.get()) < 0; }
   
class phoneNum {
  char str[80];
public:
  phoneNum() { strcmp(str, ""); }
  phoneNum(char *s) { strcpy(str, s); }
  char *get() { return str; }
};
   
int main()
{
  map<name, phoneNum> directory;
   
  directory.insert(pair<name, phoneNum>(name("A"), phoneNum("555-1111")));
  directory.insert(pair<name, phoneNum>(name("B"), phoneNum("555-2222")));
  directory.insert(pair<name, phoneNum>(name("C"), phoneNum("555-3333")));
  directory.insert(pair<name, phoneNum>(name("D"), phoneNum("555-4444")));
   
  map<name, phoneNum>::iterator p;

  p = directory.find(name("A"));
  if(p != directory.end())
    cout << "Phone number: " <<  p->second.get();
  else
    cout << "Name not in directory.\n";
   
  return 0;
}

/*
Phone number: 555-1111
*/
