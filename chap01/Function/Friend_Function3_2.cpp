#include <iostream>

class Base
{
  private:
    int a;
};

class My {
  public:
    void Set() {
      Base b;
      b.a = 1;  //Error
    }
};

void main()
{
  My c;
  c.Set();
}
