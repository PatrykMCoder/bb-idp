#include <iostream>

using namespace std;

int main() {
    int n;
	cout << "Input n: ";
	cin >> n;

	int max = 0;

	int stack[100]{};
	int stackIndex = 0;

	int tempStack[100]{};
	int tempStackIndex = 0;

	char tmp;

	cout << "Input the integers seperated by space, confirm with return key and break using Ctrl+Z: ";
	while (cin >> tmp) {
		if (tmp == ' ') continue;

		if ((tmp - '0') > max) {
			tempStack[tempStackIndex++] = tmp - '0';
			max = tmp - '0';
		}
		else if (tempStackIndex > stackIndex) { // breaking from set, new longest found
			for (int j = 0; j < 100; j++) stack[j] = tempStack[j];
			stackIndex = tempStackIndex;

			for (int j = 0; j < 100; j++) tempStack[j] = 0;
			tempStackIndex = 0;

			tempStack[tempStackIndex++] = tmp - '0';
			max = tmp - '0';
		}
		else { // breaking from set, not longest
			for (int j = 0; j < 100; j++) tempStack[j] = 0;
			tempStackIndex = 0;

			tempStack[tempStackIndex++] = tmp - '0';
			max = tmp - '0';
		}
	}

	if(stackIndex == 0 || tempStackIndex > stackIndex) for (int i = 0; i < tempStackIndex; i++) cout << tempStack[i] << " "; // if the longest set is found as the last one, the main loop would not write it to the main stack
	else for (int i = 0; i < stackIndex; i++) cout << stack[i] << " "; 

    return 0;
}