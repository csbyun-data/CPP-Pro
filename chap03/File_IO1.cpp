// ios::app   -- Append to the file
// ios::ate   -- Set the current position to the end
// ios::trunc -- Delete everything in the file

#include <fstream>
#include <iostream>

using namespace std;

int main() {
	char str[100];
	
	// Creates an instance of ofstream, and opens a.txt
	ofstream a_file("a.txt");
	// Outputs to a.txt through a_file
	a_file << "This text will now be inside of a.txt";
	a_file.close();
	
	// Opens for reading the file
	ifstream b_file("a.txt");
	
	if( !b_file.is_open()) {
		// The file could not be opened
	} else {
		// Safely use the file stream
		
		// Reads one string from the file
		b_file >> str;
		// should output 'this'
		cout << str << '\n';
	}
	cin.get();    // wait for a keypress
	// b_file is closed implicitly here
	// b_file.close();
	
	return 0;
}
