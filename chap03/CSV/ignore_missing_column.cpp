#include <iostream>
#include "csv.h"

int main()
{
  // The file only contains column "a"
  io::CSVReader<2>in("ignore_missing_column.csv");
  in.read_header(io::ignore_missing_column, "a", "b");
  
  int a,b = 42;
  
  while(in.read_row(a,b)) {
    std::cout << a << ",";
    std::cout << b << "\n";
    
    // a contains the value from the file
    // b is left unchanged by read_row, i.e., it is 42
  }

  return 0;
}
