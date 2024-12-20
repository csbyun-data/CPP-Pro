// Add user-defined object to map, loop through the map and output
#include <algorithm>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>

using namespace std;

class PC{
   public:
   enum PC_type { Dell, HP, IBM, Compaq };

   PC( PC_type appliance = Dell, int model = 220,
      int serial = 0 );

   bool operator<( const PC& rhs ) const;

   PC_type appliance() const;
   int model() const;
   string name() const;

   void print() const;

   int serial() const;

   private:
   PC_type appliance_;
   int model_;
   int serial_;

};

inline
PC::PC( PC::PC_type appliance, int model,
   int serial )
   : appliance_( appliance ), model_( model ), serial_( serial )
{} 

inline
bool PC::operator<( const PC& rhs ) const
{ return appliance() < rhs.appliance() ||
   ( appliance() == rhs.appliance() && model() < rhs.model() );
}

inline
PC::PC_type PC::appliance() const
{ return appliance_; }

inline
int PC::model() const
{ return model_; }

string PC::name() const
{
   string what;
   switch( appliance() )
   {
      case Dell:    what = "Dell";              break;
      case HP:      what = "HP";                break;
      case IBM:     what = "IBM";               break;
      case Compaq:  what = "Compaq";            break;
      default:      what = "Unknown appliance"; break;
   }
   return what;
}

inline
void PC::print() const
{
   char oldfill = cout.fill();
   cout << name() << " - Model "
        << model() << ", Serial number " 
        << serial() << endl;
}

inline
int PC::serial() const
{ return serial_; }

bool greater_model( const pair<PC::PC_type,PC> p,int min_model );

int main( )
{
   const PC::PC_type kind[] = { PC::IBM,PC::Dell,PC::HP};

   int num_appliances = 3;
   vector<PC> v;
   for( int i = 0; i < 3; ++i )
      v.push_back( PC( kind[i], i, i ) );

   map<int,PC> sold;

   transform( kind, kind+num_appliances, v.begin(),inserter( sold, sold.end() ),make_pair<int,PC> );
   map<int,PC>::const_iterator sold_end = sold.end();

   map<int,PC>::const_iterator site;
   for( site = sold.begin(); site != sold_end; ++site )
      site->second.print();

}
