// https://www.cprogramming.com/snippets/source-code/an-example-use-of-a-function-pointer
#include <iostream>
#include <conio.h>

using namespace std;
// typedef a function pointer for a function returning int and taking argument as int.
typedef int (*pt2Func)(int);

// function performing square
int sqr( int x) {
  return (x*x);
}

// function returning function pointer pt2Func
pt2Func GetPtr( const char Code) {
  return (*sqr);
}

int main() 
{
  pt2Func xyz = GetPtr('j');

  cout << (*xyz)(5) << endl;
  getch();

  return 0;
}
