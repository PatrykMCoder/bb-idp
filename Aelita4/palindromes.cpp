#include <iostream>

using namespace std;

char charToLowerCase(char);

int main() {
	bool isOk = true;
	char a, b;

	string s;

    cout << "Input word: ";
	getline(cin, s);

	for (int i = 0; i < s.length() / 2; i++) {
		a = charToLowerCase(s[i]); // ignore case
		b = charToLowerCase(s[s.length() - i - 1]); // ignore case
		if (a != b) isOk = false;
	}

	cout << isOk;

    return 0;
}

char charToLowerCase(char c) {
	if (c >= 'A' && c <= 'Z') return c + 32; // difference between 'A' i 'a' in ASCII is exactly 32
	else return c;
}