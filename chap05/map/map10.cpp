// Get the size of a map, Put value to map with assignment
#include <map>
#include <iostream>
#include <string>

using namespace std;

typedef map<string, int> STRING2INT;

int main(void)
{
  STRING2INT DateMap;
  STRING2INT::iterator DateIterator;
  string DateBuffer;
  
  DateMap["January"] = 1;
  DateMap["February"] = 2;
  DateMap["March"] = 3;
  DateMap["April"] = 4;
  DateMap["May"] = 5;
  DateMap["June"] = 6;
  DateMap["July"] = 7;
  DateMap["August"] = 8;
  DateMap["September"] = 9;
  DateMap["October"] = 10;
  DateMap["November"] = 11;
  DateMap["December"] = 12;
  
  if(!DateMap.empty())
    cout << "DateMap has " << DateMap.size() << " entries" << endl;
  else
    cout << "DateMap is empty" << endl;
}

/*
DateMap has 12 entries
*/
