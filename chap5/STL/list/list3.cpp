#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main( )
{
   short v[] = { 1, 2, 3, 4, 5, 6 };

   vector<short> v1( v,v + sizeof( v ) / sizeof( v[0] ) );

   vector<short> v2( v1 );


   list<short> l( v1.begin(), v1.end() );
   
   if( v1.size() == l.size() && equal( v1.begin(), v1.end(), l.begin() ) )
      cout << "The vector and list are equal" << endl;
   else
      cout << "The vector and list are not equal" << endl;
}
