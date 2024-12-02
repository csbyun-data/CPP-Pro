#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

template <typename T>
struct print : public unary_function<T, void> {
	void operator() (T n) {  // () 연산자를  overloading 
		cout << n << " ";
	}
};	

int main() {
	int n[] = {1, 6, 3, 5, 4, 2};
	int size = sizeof n / sizeof(int);
	
	vector<int> v(size);
	
	copy(n, n+size, v.begin());
	sort(v.begin(), v.end()); // 오름차순 정렬 
	
	for_each(v.begin(), v.end(), print<int>());
	cout << endl;
	
	random_shuffle(v.begin(), v.end());  // 램덤 섞음 
	for_each(v.begin(), v.end(), print<int>());
	cout << endl;
	
	sort(v.begin(), v.end(), greater<int>());  // 내림차순 정렬 
	for_each(v.begin(), v.end(), print<int>());
	cout << endl;
	
	return 0;	
}

// 1 2 3 4 5 6
// 5 2 4 3 1 6
// 6 5 4 3 2 1
