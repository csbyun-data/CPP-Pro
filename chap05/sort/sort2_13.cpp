#include <iostream>
#include <algorithm>
using namespace std;

const int N = 5;

int main()
{
   int    d[N], i, *e = d+N;

   for (i = 0; i < N; ++i){
      d[i] = rand();
   }   

   sort(d, e);

   for (i = 0; i < N; ++i){
      cout << d[i]<<' ';
   }   
}

// run result
41 6334 18467 19169 26500
