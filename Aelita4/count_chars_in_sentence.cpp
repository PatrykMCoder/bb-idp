#include <iostream>

using namespace std;

bool isAlphaChar(char);
int getAlphaCharPlace(char);
char getAlphaChar(int);

int main() {
    cout << "Input sentence, confirm with return key and break using Ctrl+Z: ";

	int tab[52]{};
	char tmp;

	while (cin >> tmp) {
		if (!isAlphaChar(tmp)) continue;
		tab[getAlphaCharPlace(tmp)]++;
	}

	for (int i = 0; i < 52; i++) {
		if(tab[i] > 0) cout << getAlphaChar(i) << " - " << tab[i] << endl;
	}

    return 0;
}

bool isAlphaChar(char c) { // is char in A-Z or a-z
	if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) return true;
	else return false;
}

int getAlphaCharPlace(char c) { // determine the position of char in alphabet, a-z in 0-25, A-Z in 26-51
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) return c - 'A';
	else return -1;
}

char getAlphaChar(int i) { // opposite of getAlphaCharPlace()
	if ((i >= 0 && i <= 25) || (i >= 26 && i <= 51)) return i + 'A';
	else return 0; // NUL
}