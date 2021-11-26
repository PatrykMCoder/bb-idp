#include <iostream>

using namespace std;

int main() {
    int n;
	cout << "Input n: ";
	cin >> n;

	string* tab = new string[n]; // using pointer "*" and "new" allows for creating array with n elements (no need for "const")
	for (int i = 0; i < n; i++) {
		cin >> tab[i];
	}

	string tmp;
	int k = n - 1;
	while (k >= 1) {
		for (int i = 0; i < k; i++) {
			if (tab[i].length() > tab[i + 1].length()) { // swap
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
		}
		k--;
	}

	k = n - 1;
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < tab[i].length(); j++) {
			if ((tab[i].length() == tab[i + 1].length()) && ((tab[i][j] > tab[i + 1][j]))) { // if they are equal length and the first char is bigger than the second, swap
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				break;
			}
			else if ((tab[i].length() == tab[i + 1].length()) && ((tab[i][j] < tab[i + 1][j]))) break;
		}
		k--;
	}

	cout << endl;
	for (int i = 0; i < n; i++) cout << tab[i] << endl;

    return 0;
}