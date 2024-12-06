#include <iostream>

class Base {
  friend class My; //friend function 추가
  private:
    int a;
};

class My {
  public:
    void Set()
    {
      Base b;
      b.a = 1; //Ok
    }
};

void main()
{
  My c;
  c.Set();
}
