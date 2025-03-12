### CSV
* Fast C++ CSV Parser [here](https://github.com/ben-strasser/fast-cpp-csv-parser)
    * [File Read], [ram_open.c](https://github.com/csbyun-data/CPP-Pro/blob/main/chap03/CSV/ram_open.c), [ram.csv](https://github.com/csbyun-data/CPP-Pro/blob/main/chap03/CSV/ram.csv)
    * [ignore_extra_column], [ignore_extra_column.c]()
    ```
    // The file only contains column "a"
    CSVReader<2>in(...);
    in.read_header(ignore_missing_column, "a", "b");
    int a,b = 42;
    while(in.read_row(a,b)){
     // a contains the value from the file
     // b is left unchanged by read_row, i.e., it is 42
    }
    ```
    
