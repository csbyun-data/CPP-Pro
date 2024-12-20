#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;

class MyClass
{
   public:
   MyClass( int num_points = 0 );

   bool operator<( const MyClass& rhs ) const;

   int num_points() const;
   void print() const;

   private:
   vector<float> data_;
};

inline
MyClass::MyClass( int num_points ): data_( num_points ){}    

inline bool MyClass::operator<( const MyClass& rhs ) const { 
   return num_points() < rhs.num_points(); 
}

inline
int MyClass::num_points() const {  
   return static_cast<int>( data_.size() ); 
}

inline void MyClass::print() const{ 
   cout << "\nThis experiment has " << num_points() << " data points";
}

bool less_than_iterator( const vector<MyClass>::iterator i,const vector<MyClass>::iterator j );
// evaluate *i < *j

int main( )
{
   vector<MyClass> v;
   int num_v = 3;
   v.reserve( num_v );

   v.push_back( MyClass( 3 ) );
   v.push_back( MyClass( 9 ) );
   v.push_back( MyClass( 5 ) );

   for_each( v.begin(), v.end(),mem_fun_ref( &MyClass::print ) );

   vector< vector<MyClass>::iterator > iterators( v.size() );
   vector< vector<MyClass>::iterator >::iterator j = iterators.begin();

   vector<MyClass>::iterator i = v.begin();
   vector<MyClass>::iterator v_end = v.end();
   while( i != v_end )
      *j++ = i++;

   sort( iterators.begin(), iterators.end(), less_than_iterator );

   vector< vector<MyClass>::iterator >::iterator iterators_end = iterators.end();
   for( j = iterators.begin(); j != iterators_end; ++j )
      (*j)->print();

   for_each( v.begin(), v.end(), mem_fun_ref( &MyClass::print ) );
}

bool less_than_iterator( const vector<MyClass>::iterator i,const vector<MyClass>::iterator j )
{  
   return *i < *j;   
}
