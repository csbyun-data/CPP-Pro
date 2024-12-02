#include <iostream>
 
using namespace std;
 
class A
{
public:
	void func() {
		cout << "Inside func of class A" << endl;
	}
};
 
int main()
{
  //function pointer declaration
  void (A::*fp)(); //return type,(class::function pointer)(arguments)
  
  fp = &A::func;//assigning
  A *a = new A;
  (a->*fp)();
}
