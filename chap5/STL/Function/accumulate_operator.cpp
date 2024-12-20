#include <iostream>

#include <numeric>
#include <assert.h>

using std::accumulate;

class CAdd
{
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
// accumulate의 함수 예
inline int accumulate (int* _F, int* _L, int _V, CAdd _B);
