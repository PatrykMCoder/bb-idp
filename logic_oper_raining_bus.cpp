// Using logic operators ! (negation), && (and) write a program which, depending on fullfilment of the conditions, prints the following:
// If it is raining and there is a bus, print "Take an umbrella", "You will get to the university"
// If it is raining and there is no bus, print "You will not get to the university"
// If it is not raining and there is a bus, print "You will get to the university", "Have a nice day and nice weather"
// The user provides the information about the weather and the presence of a bus.

// Input: whether it is raining and whether there is a bus

// Output: the result of the logic operations

#include <iostream>

using namespace std;

int main() {
    char raining, bus;
	bool boolRaining, boolBus;

	while (1) {
		cout << "Is it raining? (y/n) ";
		cin >> raining;
		if (raining == 'y' || raining == 'Y' || raining == 'n' || raining == 'N') break;
	}

	switch (raining) {
	case 'y':
	case 'Y':
		boolRaining = true;
		break;
	case 'n':
	case 'N':
		boolRaining = false;
		break;
	}

	while (1) {
		cout << "Is there a bus? (y/n) ";
		cin >> bus;
		if (bus == 'y' || bus == 'Y' || bus == 'n' || bus == 'N') break;
	}

	switch (bus) {
	case 'y':
	case 'Y':
		boolBus = true;
		break;
	case 'n':
	case 'N':
		boolBus = false;
		break;
	}

	if (boolRaining && boolBus) cout << "Take an umbrella\n";
	if (!boolRaining && boolBus) cout << "Have a nice day and nice weather";
	if (!boolBus) cout << "You will not get to the university";
	if (boolBus) cout << "You will get to the university";

    return 0;
}