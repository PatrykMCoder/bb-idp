// Using the logic operators ! (negation), || (or) write a program which, depending on circumstances, prints on the screen the following:
// If there is no discount or you have received a bonus, print "You can buy the car!", "There is no discount for the car"
// If there is no car discount and you have not received a bonus, print "Car purchase must be postponed...", "There is no discount for the car"
// If there is a car discount or you have received a bonus, print "You can buy the car!"
// The user provides the information about the discount and the bonus.

// Input: whether the user has received a bonus or not and whether there is a car discount or not

// Output: the result of the logic operations

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