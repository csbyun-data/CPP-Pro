#include <cstdlib>
#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

void show(const char *msg, vector<int> vect);

int main()
{
  vector<int> v(10);
  for(unsigned i=0; i < v.size(); i++)
    v[i] = rand() % 100;

  show("Original order:", v);

  sort(v.begin()+2, v.end()-2);

  show("sorting elements v[2] to v[7] into natural order:", v);

  return 0;
}

void show(const char *msg, vector<int> vect) {
  cout << msg << endl;
  for(unsigned i=0; i < vect.size(); ++i)
    cout << vect[i] << ' ';
  cout << endl;
}

// run result
Original order:
41 67 34 0 69 24 78 58 62 64
sorting elements v[2] to v[7] into natural order:
41 67 0 24 34 58 69 78 62 64
