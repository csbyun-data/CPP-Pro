#include <iostream>

using namespace std;

class My {
  public:
    static void staticFunc() {
      cout << "Static function. " << endl;
    }

    void nonStaticFunc() {
      cout << "nonStatic function. " << endl;	
    }
};

int main() {
  // calling static function
  My::staticFunc();

  // calling non-static function
  My obj;
  obj.nonStaticFunc();

  return 0;	
}

// Static function.
// nonStatic function.
