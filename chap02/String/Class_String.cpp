#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
class String {
  public: 
    char *operator +(char *append_str) { 
       return(strcat(buffer, append_str)); 
    };
   
    String(char *string) {   
        strcpy(buffer, string); 
        length = strlen(buffer); 
    }

    void show_string(void) { cout << buffer; };
    void append(char *source) { strcat(buffer, source); };

  private:
    char buffer[256];
    int length;
};

int main(void)
{
   String title("C");
   title = title + "P\n";
   title.show_string();
 
   String book2("C");
   book2.append("T");
   book2.show_string();
}

/*
CP
CT
*/
