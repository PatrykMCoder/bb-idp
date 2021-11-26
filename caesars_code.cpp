// Write a program that will encrypt and decrypt a message using the Caesar Cipher. User will input whether they want to encrypt or decrypt, message and key.
// For encryption, add the key to the ASCII value of each character in the message.
// For decryption, subtract the key from the ASCII value of each character in the message.

// Example: 
// Input:
// 1
// 5
// "This_is_Caesar_Cipher!""
// Output: "Ymnx_nx_Hfjxfw_Hnumjw!"
// Input: 
// 2
// 5
// "Ymnx_nx_Hfjxfw_Hnumjw!"
// Output: "This_is_Caesar_Cipher!"

// Input: digit (1 - encrypt or 2 - decrypt), digit from range 1 <= k <= 25 and message (without spaces)

// Output: encrypted or decrypted message

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