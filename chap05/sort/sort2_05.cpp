#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

class MyClass : public binary_function<MyClass, MyClass, bool> {
public:
  int id;
  bool operator()(const MyClass& x, const MyClass& y) const {
     return x.id >= y.id;
  }
  friend ostream& operator<<(ostream& o, const MyClass& x) {
    o << x.id;
    return o;
  }
};

int main()
{
  vector<MyClass> vector1(100);
  for (int i = 0; i != 100; ++i)
    vector1[i].id = 100 - i - 1;

  sort(vector1.begin(), vector1.end(), not2(MyClass()));

  for (int k = 0; k != 100; ++k)
    cout << vector1[k].id << " ";

  return 0;
}

/* 
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29
30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56
 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 8
3 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 "
 */  
