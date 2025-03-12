### CSV
* Fast C++ CSV Parser [here](https://github.com/ben-strasser/fast-cpp-csv-parser)
    * [File Read], [ram_open.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap03/CSV/ram_open.cpp), [ram.csv](https://github.com/csbyun-data/CPP-Pro/blob/main/chap03/CSV/ram.csv)
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
    
