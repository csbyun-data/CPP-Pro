// Functor의 사용, 함수를 객체로 사용
// 연산자의 overloading

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Square_Functor {
  void operator() ( int x) // ()연산자 overloading
  { std::cout << x*x << " "; }
};

int main()
{
  Square_Functor square;
  vector<int> vec { 1, 2, 3, 4 };

  for_each( vec.begin(), vec.end(), square);
}

// 1 4 9 16
