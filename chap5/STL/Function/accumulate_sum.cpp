// 1+2+3+.. + 10 = 55 값을 구한는 예
// accumulator 함수는 배열의 합, 리스트의 모든 원소의 합, 곱.. 등 나열된 원소의 특정한 연산을 할때 사용

#include <iostream>

#include <numeric>
#include <assert.h>

using std::accumulate;

int Add(int x, int y) {return x + y; }

int main(int argc, char** argv) {
	int i[10] = {1, 2, 3,  4, 5, 6, 7, 8, 9, 10};
	
	int product = accumulate(&i[0], &i[10], 0, Add);
	
	assert( 55 == product);
	
	return 0;
}

// product == 55 Ok!
