//전역함수로 변경
#include <stdio.h>
class Stream 
{
  public:
};

void operator << (Stream& s, int i)
{ printf("%d \n", i); }

void main()
{
  Stream out;
  out.operator << (7); // 동일표현: out << 7;
}
