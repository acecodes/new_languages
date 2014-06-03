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

	// Build the second and fourth lines of ouput
	const string spaces(greeting.size(), ' ');
	const string second = "* " + spaces + " *";

	// Build the first and last (fifth) lines of ouput
	const string first(second.size(), '*');

	// Finalized output
	cout << endl;
	cout << first << endl;
	cout << second << endl;
	cout << "* " << greeting << " *" << endl;
	cout << second << endl;
	cout << first << endl;

	return 0;
}