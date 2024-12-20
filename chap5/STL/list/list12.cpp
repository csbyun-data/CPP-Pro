//Use list.assign to replace contents of a list with elements of another list
#include <iostream>
using std::cout;
using std::endl;

#include <list>      // list class-template definition
#include <algorithm> // copy algorithm
#include <iterator>  // ostream_iterator

int main()
{
  int array[ 4 ] = { 2, 6, 4, 8 };
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
  
  otherValues.insert( otherValues.begin(), array, array + 4 );
  cout << "\n\notherValues contains: ";
  std::copy( otherValues.begin(), otherValues.end(), output );
  
  
  values.assign( otherValues.begin(), otherValues.end() );
  
  cout << "\n\nvalues contains: ";
  std::copy( values.begin(), values.end(), output );
  
  cout << endl;
  return 0;
}

/* 
values contains: 3 1 4 2

otherValues contains: 2 6 4 8

values contains: 2 6 4 8
 */
