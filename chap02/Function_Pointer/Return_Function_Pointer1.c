// [Error] invalid conversion from 'void (*)(int&)' to 'void (*)(int*)' [-fpermissive]
// C++ program for the above approach

#include <iostream>
using namespace std;
 
void demo(int& a) {
    a += 10;
}
 
int main()
{
    int num = 20;
 
    // Now ptr contains address of demo function or void
    // [Error] invalid conversion from 'void (*)(int&)' to 'void (*)(int*)' [-fpermissive]
    void (*ptr)(int*) = &demo; 
 
    // or (*ptr)(num);
    // [Error] invalid conversion from 'int' to 'int*' [-fpermissive]
    ptr(num);  
 
    cout << num << endl;
 
    return 0;
}
