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

  sort(v.begin(), v.end(), greater<int>());
  show("Order after sorting into descending order:", v);

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
Order after sorting into descending order:
78 69 67 64 62 58 41 34 24 0
