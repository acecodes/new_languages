#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

using namespace std;

int main() {

	// Ask for and read student name
	cout << "Enter your midterm and final exam grades: ";
	double midterm, final;
	cin >> midterm >> final;

	// Ask for homework grades
	int count = 0;
	double sum = 0;

	// Variable to read into
	double x;

	// Invariant: We have read count grades so far, and
	// sum is the sum of the first count grades
	while (cin >> x) {
		++count;
		sum += x;
	}

// Write the result
streamsize prec = cout.precision();
cout;

}