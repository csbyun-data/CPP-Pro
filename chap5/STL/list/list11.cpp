#include <list>
#include <iostream>

using namespace std;

typedef list<int> LISTINT;

int main(void)
{
  LISTINT listOne;
  LISTINT listAnother;
  LISTINT::iterator i;
  
  // Add some data
  listOne.push_front (2);
  listOne.push_front (1);
  listOne.push_back (3);
  listAnother.push_front(4);
  listAnother.assign(listOne.begin(), listOne.end());
  
  for (i = listAnother.begin(); i != listAnother.end(); ++i)
      cout << *i << " ";
  cout << endl;
  listAnother.assign(4, 1);
  
  for (i = listAnother.begin(); i != listAnother.end(); ++i)
      cout << *i << " ";
  cout << endl;
  listAnother.erase(listAnother.begin());
}

// run result
1 2 3
1 1 1 1
