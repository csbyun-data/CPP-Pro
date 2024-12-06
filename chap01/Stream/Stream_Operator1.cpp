#include <stdio.h>

class Stream 
{
  public:
    void operator << (int i) //void Draw(int i)
    { printf("%d \n", i); }
};

void main()
{
  Stream out;
  out.operator << (7); // Draw(1);
}
