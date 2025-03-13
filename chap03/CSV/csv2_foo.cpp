#include "writer.hpp"
#include <vector>
#include <string>
using namespace csv2;

int main() {
  std::ofstream stream("foo.csv");
  Writer<delimiter<','>> writer(stream);
  
  std::vector<std::vector<std::string>> rows = 
  {
    {"a", "b", "c"},
    {"1", "2", "3"},
    {"4", "5", "6"}
  };
  
  writer.write_rows(rows);
  stream.close();
}
