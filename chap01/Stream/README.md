## 1.Stream
### INDEX
* 1.Stream출력 객체 생성
    * 1.1 객체 생성 [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Stream/Stream1.cpp)
    * 1.2 operator <<로 변경 [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Stream/Stream_Operator1.cpp)
   ```cpp
   #include <stdio.h>
   class Stream
   {
     public:
       void operator << (int i) //void Draw(int i)
       { printf("%d \n", i); }
   };
   ```
    * 1.3 전역함수로 변경 [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Stream/Stream_Global1.cpp)
   ```cpp
   void operator << (Stream& s, int i)
   ```
    * 1.4 전역함수로 변경 , Stream을 return [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Stream/Stream_Global2.cpp)
   ```cpp
   stream& operator << (Stream& s, int i)
   ```