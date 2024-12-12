## 1.FILE I/O
### INDEX
* 1.File I/O
    * 1.1 File I/O [code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap03/File/File_IO1.cpp)
    * 1.2 Binary File 읽기, 저장  [[Binary File code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap03/File/Binary_File1.cpp), [Binary File code2](https://github.com/csbyun-data/CPP-Pro/blob/main/chap03/File/Binary_File2.cpp)]
      |desc|code|
      |-|-|
      |파일 끝에 저장 | ofstream fout("a.dat", ios::out | ios::app);|
      |binary I/O로 파일 저장 | fstream fbinout("a.bin", ios::out | ios::binary);|
