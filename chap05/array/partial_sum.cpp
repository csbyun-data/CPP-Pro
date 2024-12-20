// Illustrating the generic partial_sum algorithm
#include <algorithm>
#include <numeric>
#include <iostream>
using namespace std;

int main()
{
  const int N = 20;
  int x1[N], x2[N];

  for (int i = 0; i < N; ++i)
    x1[i] = i;

  // Compute the partial sums of 0, 1, 2, 3, ..., N - 1, putting the result inx2:
  partial_sum(&x1[0], &x1[N], &x2[0]);

  for (int i = 0; i < N; ++i)
    cout << x2[i] << " ";

  return 0;
}

/* 
0 1 3 6 10 15 21 28 36 45 55 66 78 91 105 120 136 153 171 190 
 */
