#include <iostream>

using namespace std;

int main() {
    char c;

	cout << "Input char: ";
	cin >> c;

	if ((int)c >= 65 && (int)c <= 90) { // upper to lower
		cout << c << " => " << char((int)c + ' ');
	}
	else if ((int)c >= 97 && (int)c <= 122) { // lower to upper
		cout << c << " => " << char((int)c - ' ');
	}
	else cout << c << " => " << c; // default - don't do anything

    return 0;
}