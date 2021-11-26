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