#include <iostream>

using namespace std;

int main() {
    float a, b, c;

	cout << "Input a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;
	cout << "Input c: ";
	cin >> c;

	if (a == 0 && b != 0) {
		cout << "1 solution";
	}
	else if (a == 0 && b == 0 && c == 0) cout << "No solutions";
	else {
		float delta = (b * b) - (4 * a * c);

		if (delta < 0) cout << "0 solutions";
		else if (delta == 0) cout << "1 solution";
		else if (delta > 0) cout << "2 solutions";
	}
    return 0;
}