// Find the notation of given number  in the base from 2 to 10 and 16

// Input: number as integer and base as integer
// Output: number in given base written as string

#include <iostream>
#include <sstream>

using namespace std;

string decToAny(int, int);

int main() {
    int p;
	cout << "Input base: ";
	cin >> p;
	if (p < 2 || (p > 10 && p != 16)) {
		cout << "Base must have value from 2 to 10" << endl;
		return 0;
	}

	cout << "Input number in decimal: ";
	int s;
	cin >> s;

	cout << "In base " << p << ": " << decToAny(s, p) << endl;

    return 0;
}

string decToAny(int dec, int p) {
	stringstream ss; // stringstream allows for easy converstion of numbers to strings
	stringstream out;

	while (dec > 0) {
		switch (dec % p) {
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			ss << dec % p; // this will be true for all bases from 2 to 10
			break;
		case 10:
			ss << "A";
			break;
		case 11:
			ss << "B";
			break;
		case 12:
			ss << "C";
			break;
		case 13:
			ss << "D";
			break;
		case 14:
			ss << "E";
			break;
		case 15:
			ss << "F";
			break;

		}
		dec = dec / p;
	}

	for (int i = ss.str().length() - 1; i >= 0; i--) { // values have been written backwards, so we need to reverse them
		out << ss.str().c_str()[i];
	}
	return out.str();
}