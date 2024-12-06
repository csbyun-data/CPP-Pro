#include <stdio.h>
class Stream 
{
  public:
};

stream& operator << (Stream& s, int i)
{
  printf("%d \n", i);
  return s; //추가src
}

void main()
{
  Stream out;
  out << 2 << 1; //Stream <<표현
}
