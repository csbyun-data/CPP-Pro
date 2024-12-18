#include <iostream>

void prt_array(int numbers[], int size);
void zero_alloc(int numbers[], int size);

int main()
{
 int my_numbers[] = {1, 2, 3, 4, 5};
 zero_alloc(my_numbers, 5);
 zero_alloc(my_numbers, 5);
 
 return 0;
}

void prt_array(int numbers[], int size) {
 for(int i=0; i < size; i++) {
  std::cout << numbers[i] << std::endl;
 }
}

void zero_alloc(int numbers[], int size) {
 for(int i=0; i<size; i++) {
  numbers[i] = 0;
 }
}
