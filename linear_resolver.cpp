// Write a program to solve the linear equation ax + b = 0 where a and b are given as input.

// Input: two integers determing a and b in the equation

// Output: the solution of the equation (either "no results", "conflicting equation" or actual calculated solutions)

#include <iostream>

using namespace std;

int main() {
    float a, b;
	float sum = 0;

	cout << "Input a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;

	if (a == 0 && b == 0) cout << "No results";
	else if (a == 0) cout << "Conflicting equation";
	else if (b == 0) {
		sum = 0;

		cout << a << "x + " << b << " = 0" << endl;
		cout << "x = " << sum;
	}
	else {
		sum = -b / a;

		cout << a << "x + " << b << " = 0" << endl;
		cout << "x = " << sum;
	}

    return 0;
}