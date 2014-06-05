// Generate framed greeting for a person's (inputted) first_name
#include <iostream>
#include <string>

using namespace std;

int main() {

	cout << "Please enter your first name: ";
	string first_name;
	cin >> first_name;

	cout << "Please enter your last name: ";
	string last_name;
	cin >> last_name;

	// Build the welcome message
	const string greeting = "Hello, " + first_name + " " + last_name + "!";

	// Number of blanks surrounding the greeting
	const int pad = 1;

	// Number of rows to write
	const int rows = pad * 2 + 3;
	const string::size_type cols = greeting.size() + pad * 2 + 2;

	// Separate output from input
	cout << endl;

	// Invariant: r rows have been written so far
	for (int r = 0; r != rows; ++r) {
		// Write a row of output
		string::size_type c = 0;

		// Invariant: c characters have been written so far in the current row
		while (c != cols) {

			// Check to see if it is time to write the greeting
			if (r == pad + 1 &&  c == pad + 1) {
				cout << greeting;
				c += greeting.size();
			}
			else {

				// Check if we are on the border
				if (r == 0 || r == rows - 1 || 
					c == 0 || c == cols - 1)
					cout << "*";
				else
					cout << " ";
				++c;
			}
		}
		cout << endl;
	}




	return 0;
}