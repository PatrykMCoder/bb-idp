// Write a program to order three numbers x, y and z in ascending order.

// Input: three numbers
// Output: three numbers in ascending order

#include <iostream>

using namespace std;

int main() {
    float x, y, z;

	cout << "Input x: ";
	cin >> x;
	cout << "Input y: ";
	cin >> y;
	cout << "Input z: ";
	cin >> z;

	if (x <= y && x <= z) {
		cout << x << ", ";
		if (y < z) cout << y << ", " << z;
		else cout << z << ", " << y;
	}
	else if (y <= x && y <= z) {
		cout << y << ", ";
		if (x < z) cout << x << ", " << z;
		else cout << z << ", " << x;
	}
	else {
		cout << z << ", ";
		if (x < y) cout << x << ", " << y;
		else cout << y << ", " << x;
	}

    return 0;
}