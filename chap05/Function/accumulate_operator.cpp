// accumulator 함수는 배열의 합, 리스트의 모든 원소의 합, 곱.. 등 나열된 원소의 특정한 연산을 할때 사용

#include <iostream>

#include <numeric>
#include <assert.h>

using std::accumulate;

class CAdd {
  public:
    int operator()(int x, int y) const { return x + y; }
};

// CAdd Class 활용 예
// CAdd a;
// int product = a(1, 2);


int main(int argc, char** argv) {
  int i[10] = {1, 2, 3,  4, 5, 6, 7, 8, 9, 10};

  int product = accumulate(&i[0], &i[10], 0, CAdd());
  assert( 55 == product);

  return 0;
}
