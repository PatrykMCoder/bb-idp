#include <iostream>

using namespace std;

int main() {
    char discount, bonus;
	bool boolDiscount, boolBonus;

	while (1) {
		cout << "Is there a discount? (y/n) ";
		cin >> discount;
		if (discount == 'y' || discount == 'Y' || discount == 'n' || discount == 'N') break;
	}

	switch (discount) {
	case 'y':
	case 'Y':
		boolDiscount = true;
		break;
	case 'n':
	case 'N':
		boolDiscount = false;
		break;
	}

	while (1) {
		cout << "Have you gotten a bonus? (y/n) ";
		cin >> bonus;
		if (bonus == 'y' || bonus == 'Y' || bonus == 'n' || bonus == 'N') break;
	}

	switch (bonus) {
	case 'y':
	case 'Y':
		boolBonus = true;
		break;
	case 'n':
	case 'N':
		boolBonus = false;
		break;
	}

	if (boolBonus || boolDiscount) cout << "You can buy the car!\n";
	if (!boolBonus) cout << "Car purchase must be postponed...\n";
	if (!boolDiscount) cout << "There is no discount for the car\n";

    return 0;
}