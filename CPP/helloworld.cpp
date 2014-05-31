// hello.cpp: Ace Eddleman
// Description: The first script every programmer should write in any new language

#include <iostream>
// Required for setw()
#include <iomanip>
using namespace std;

int main() {
	// Set cout to right-align
	cout << setiosflags(ios::left);
	// First for-loop for handling rows
	for (int i = 0; i < 6; i++) {
		//second for loop for handling columns
		for (int j = 0; j < 4; j++)
			// setw sets the width of the columns
			cout << setw(17) << "Hello world!";
		cout << endl;
	}
	return 0;
}