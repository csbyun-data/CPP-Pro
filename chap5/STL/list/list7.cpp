#include <iostream>
using std::cout;
using std::endl;

#include <list>      // list class-template definition
#include <algorithm> // copy algorithm
#include <iterator>  // ostream_iterator

int main()
{
   int array[4] = { 2, 6, 4, 8 };
   std::list< int > values;      // create list of ints
   std::list< int > otherValues; // create list of ints
   std::ostream_iterator< int > output( cout, " " );

   // insert items in values
   values.push_front( 1 );
   values.push_front( 3 );
   values.push_back( 4 );
   values.push_back( 2 );

   cout << "values contains: ";
   std::copy( values.begin(), values.end(), output );

   values.insert( values.begin(), array, array + 4 );

   cout << "\n\nvalues contains: ";
   std::copy( values.begin(), values.end(), output );

   cout << endl;
   return 0;
}

 /* 
values contains: 3 1 4 2

values contains: 2 6 4 8 3 1 4 2
 */    
