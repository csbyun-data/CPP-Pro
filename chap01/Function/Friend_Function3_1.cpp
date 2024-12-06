#include <iostream>

class Base
{
  friend void main();
  private:
    int a;
};

class Drived: public Base
{
  public:
    void Set() {
      a = 1;  //error 발생
    }
};

void main()
{
  Base b;
  b.a = 7; //Ok
}
