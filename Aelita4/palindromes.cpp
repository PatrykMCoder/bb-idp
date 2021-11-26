#include <iostream>

using namespace std;

char charToLowerCase(char);

int main() {
    cout << "Input word, confirm with return key and break using Ctrl+Z: ";

	bool isOk = true;
	char a, b, tmp;
	while (cin >> tmp) {
		a = charToLowerCase(tmp); // ignore case
		b = charToLowerCase(tmp);
		if (a != b) isOk = false;
	}

	cout << isOk;

    return 0;
}

char charToLowerCase(char c) {
	if (c >= 'A' && c <= 'Z') return c + 32; // difference between 'A' i 'a' in ASCII is exactly 32
	else return c;
}