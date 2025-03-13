### CSV
* Fast C++ CSV Parser [here](https://github.com/ben-strasser/fast-cpp-csv-parser)
    * [File Read], [ram_open.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap03/CSV/ram_open.cpp), [ram.csv](https://github.com/csbyun-data/CPP-Pro/blob/main/chap03/CSV/ram.csv)
    ```
    # include "csv.h"

    int main(){
      io::CSVReader<3> in("ram.csv");
      in.read_header(io::ignore_extra_column, "vendor", "size", "speed");
      std::string vendor; int size; double speed;
      while(in.read_row(vendor, size, speed)){
        // do stuff with the data
      }
    }
    ```
    * [ignore_extra_column], [ignore_extra_column.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap03/CSV/ignore_missing_column.cpp), [iqnore_extra_column.csv](https://github.com/csbyun-data/CPP-Pro/blob/main/chap03/CSV/ignore_missing_column.csv)
    ```
    ignore_missing_column: If a column with a name is not in the file but is in the argument list,
                           then read_row will not modify the corresponding variable.
    // The file only contains column "a"
    CSVReader<2>in(...);
    in.read_header(ignore_missing_column, "a", "b");
    int a,b = 42;
    while(in.read_row(a,b)){
     // a contains the value from the file
     // b is left unchanged by read_row, i.e., it is 42
    }
    ```
    * [sum], [sum.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap03/CSV/sum.cpp), [sum.csv](https://github.com/csbyun-data/CPP-Pro/blob/main/chap03/CSV/sum.csv)
    ```
    // The file only contains the columns "a" and "b"
    CSVReader<3>in(...);
    in.read_header(ignore_missing_column, "a", "b", "sum");
    if(!in.has_column("a") || !in.has_column("b"))
      throw my_neat_error_class();
    bool has_sum = in.has_column("sum");
    int a,b,sum;

    while(in.read_row(a,b,sum)){
      if(!has_sum)
        sum = a+b;
    }
    ```
* CSV2
   * [csv2](https://github.com/p-ranav/csv2)
   * [File Read], [test_01.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap03/CSV/csv2_test_01.cpp), [test_01.csv](https://github.com/p-ranav/csv2/blob/master/test/inputs/test_01.csv)
   * [File Write], [foo.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap03/CSV/csv2_foo.cpp)
   ```
   ```
    
