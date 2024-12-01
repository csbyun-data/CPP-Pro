// 함수 내부에서 동적으로 할당된 메모리의 주소를 반환
#include <iostream>

using namespace std;

int *create_array( int size, int init_value=0) {
  int *new_storage = NULL;
  new_storage = new int[size];

  for( int i=0; i<size; ++i)
    *(new_storage+i) = init_value;

  return new_storage;
}

int main()
{
  int *my_array = NULL;

  my_array = create_array(100, 10);
  delete[] my_array;

  return 0;
}
