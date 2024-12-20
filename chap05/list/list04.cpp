#include <algorithm>
#include <cstdlib>
#include <functional>
#include <iostream>
#include <list>

using namespace std;

int main( )
{
   list<int> data( 100000 );

   // create random numbers
   generate( data.begin(), data.end(), rand );

}
