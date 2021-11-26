// Write a program to determine the values of functions defined by formulas for real arguments given as input:
// a(x) = 2x for x > 0
// a(x) = 0 for x = 0
// a(x) = -3x for x < 0
//
// b(x) = x^2 for x >= 1
// b(x) = x for x < 1
//
// c(x) = 2 + x for x > 2
// c(x) = 8 for x = 2
// c(x) = x - 4 for x < 2

// Input: digit determining the function and the value of x

// Output: the value of the function

#include <iostream>

using namespace std;

float a(float);
float b(float);
float c(float);

int main() {
    float x;
	int f;

	while (1) {
		cout << "Input function number: ";
		cin >> f;
		if (f == 1 || f == 2 || f == 3) break;
	}

	cout << "Input x: ";
	cin >> x;

	cout << "Result: ";
	switch (f) {
	case 1:
		cout << a(x);
		break;
	case 2:
		cout << b(x);
		break;
	case 3:
		cout << c(x);
		break;
	}

    return 0;
}

float a(float x) {
	if (x > 0) return 2 * x;
	else if (x == 0) return 0;
	else return -3 * x;
}

float b(float x) {
	if (x >= 1) return x * x;
	else return x;
}

float c(float x) {
	if (x > 2) return 2 + x;
	else if (x == 2) return 8;
	else return x - 4;
}