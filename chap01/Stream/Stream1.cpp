#include <stdio.h>
class Stream 
{
  public:
    void Draw(int i) { printf("%d \n", i); }
};

void main()
{
  Stream out;
  out.Draw(1);
}
