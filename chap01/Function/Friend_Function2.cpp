#include <iostream>

class Base {
  private:
    int a;
  friend void main();  //friend 선언
};

void main()
{
  Base b;
  b.a = 1;  //Ok
}
