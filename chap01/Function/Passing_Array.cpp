// call by reference , 배열 활용

#include <iostream>

void prt_array(int (&numbers)[5], int size);

int main()
{
  int my_numbers[] = {1, 2, 3, 4, 5};
  prt_array(my_numbers, 5);
  
  return 0;
}

void prt_array(int (&numbers)[5], int size) {
  for(int i=0; i < size; i++) {
   std::cout << numbers[i] << std::endl;
  }
}
