// Write a program that resolves quadratic equation ax^2 + bx + c = 0 where a, b and c are given as input.

// Input: three integers a, b and c as in quadratic equation

// Output: roots of the quadratic equation

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c;

	cout << "Input a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;
	cout << "Input c: ";
	cin >> c;

	if (a == 0) {
		float sum;
		if (b == 0 && c == 0) cout << "No solutions";
		else if (a == 0) cout << "Conflicting equation";
		else if (b == 0) {
			sum = 0;

			cout << a << "x + " << b << " = 0" << endl;
			cout << "x = " << sum;
		}
		else {
			sum = -b / a;

			cout << a << "x + " << b << " = 0" << endl;
			cout << "x = " << sum;
		}
	}
	else {
		float delta = (b * b) - (4 * a * c);

		if (delta < 0) cout << "No solutions";
		else {

			float x1, x2;

			x1 = (-b - sqrt(delta)) / 2 * a;
			x2 = (-b + sqrt(delta)) / 2 * a;

			if (x1 == x2) cout << "1 solution: x = " << x1;
			else cout << "2 solutions: x1 = " << x1 << "  |  x2 = " << x2;
		}
	}

    return 0;
}