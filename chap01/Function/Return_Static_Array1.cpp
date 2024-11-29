// C++ Program to Demostrating returning of a local array
// from a function Using static array

#include <iostrem>
using namespace std;

int *fun() {
  static int arr[100];

  // some operations on arr[]
  arr[0]=10;
  arr[1]=20;

  return arr;
}

int main()
{
  int *ptr = fun();
  cout << ptr[0] << " " << ptr[1];

  // allocated memory must be deleted
  delete[] ptr;

  return 0;
}
