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

	for (int i = 0; i < s.length(); i++) {
		sum = (sum * p) + s.c_str()[i] - '0';
	}

	cout << "Decimal: " << sum;

    return 0;
}