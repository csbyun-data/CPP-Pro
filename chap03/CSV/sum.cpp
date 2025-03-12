#include <iostream>
#include "csv.h"

int main()
{
  // The file only contains the columns "a" and "b"
  io::CSVReader<3>in("data.csv");
  in.read_header(io::ignore_missing_column, "a", "b", "sum");
  if(!in.has_column("a") || !in.has_column("b"))
    ; // throw my_neat_error_class();
    
  bool has_sum = in.has_column("sum");
  int a,b,sum;
  
  while(in.read_row(a,b,sum)){
    if(!has_sum)
      sum = a+b;
      
    std::cout << a << ",";
    std::cout << a << ",";
    std::cout << sum << "\n";
  }
}
