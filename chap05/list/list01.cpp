#include <string>
#include <list>
#include <iostream>

using namespace std;

int main()
{  
   list<string> staff;

   staff.push_back("A");
   staff.push_back("B");
   staff.push_back("C");
   staff.push_back("D");

   list<string>::iterator pos;
   pos = staff.begin();
   pos++;
   pos++;
   pos++;

   staff.insert(pos, "E");

   pos = staff.begin();
   pos++;

   staff.erase(pos);

   for (pos = staff.begin(); pos != staff.end(); pos++)
      cout << *pos << "\n";

   return 0;
}

/*
A
C
E
D
*/
