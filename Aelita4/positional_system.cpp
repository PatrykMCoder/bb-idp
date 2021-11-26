#include <iostream>

using namespace std;

int main() {
    int p;

	cout << "Input base: ";
	cin >> p;

	if (p < 2 || p > 10) {
		cout << "Base must have value from 2 to 10" << endl;
		return 0;
	}

	cout << "Input number: ";
	string s;
	cin >> s;

	int sum = 0;
	int tmp;
	int base = 1;

	for (int i = s.length() - 1; i >= 0; i--) {
		tmp = s.c_str()[i] - '0'; // zero in ASCII code is 48, substracting it from char gives us the int with value of number

		if (tmp >= p) {
			cout << "Digit '" << tmp << "' is greater than base (" << p << ")";
			return;
		}

		sum += (tmp * base);
		base *= p;
	}

	cout << "Decimal: " << sum;

    return 0;
}