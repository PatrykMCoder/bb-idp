#include <iostream>

using namespace std;

int main() {
    int type;
	cout << "Encrypting (1) or decrypting (2)? ";
	cin >> type;

	int k;
	cout << "Input k: ";
	cin >> k;

	string s;
	cout << "Input sentence: ";
	cin >> s;

	char c;
	string outt;
	switch (type) {
	case 1:
		for (int i = 0; i < s.length(); i++) {
			c = s[i];
			if (c >= 65 && c <= 90) { // A-Z
				if (c + k > 90) outt += (char(c + k - 26));
				else outt += char(c + k);
			}
			else if (c >= 97 && c <= 122) { // a-z
				if (c + k > 122) outt += (char(c + k - 26));
				else outt += char(c + k);
			}
			else outt += c;
		}
		break;
	case 2:
		for (int i = 0; i < s.length(); i++) {
			c = s[i];
			if (c >= 65 && c <= 90) { // A-Z
				if (c - k < 65) outt += (char(c - k + 26));
				else outt += char(c - k);
			}
			else if (c >= 97 && c <= 122) { // a-z
				if (c - k < 97) outt += (char(c - k + 26));
				else outt += char(c - k);
			}
			else outt += c;
		}
		break;
	}

	cout << outt;

    return 0;
}