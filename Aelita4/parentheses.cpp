#include <iostream>

using namespace std;

int main() {
    int n;
	while (true) {
		cout << "How many parentheses in total? (from 1 to 100): ";
		cin >> n;
		if (n < 1 || n > 100) continue;
		else break;
	}

	string s;
	cout << "Input parentheses: ";
	cin >> s;

	int basicCount = 0, basicMax = 0; // counter and max value for ()
	int bracketCount = 0, bracketMax = 0; // counter and max value for []
	int curlyCount = 0, curlyMax = 0; // counter and max value for {}

	char current[100]; // stack of opening parentheses
	int j = -1; // index of array above
	bool pass = true;

	for (int i = 0; i < 100; i++) current[i] = ' '; // clearing the array

	char c;
	for (int i = 0; i < s.length(); i++) {
		c = s.c_str()[i];

		switch (c) {
		case '(':
			j++;
			basicCount++;
			basicMax++;
			current[j] = c;
			break;
		case '[':
			j++;
			bracketCount++;
			bracketMax++;
			current[j] = c;
			break;
		case '{':
			j++;
			curlyCount++;
			curlyMax++;
			current[j] = c;
			break;
		case ')':
			if (current[j] != '(') pass = false; // closing one is not the same as opening one, the sequence of parentheses is not valid
            else {
                j--;
                basicCount--;
                basicMax--;
            }
			basicCount--;
			j--;
			break;
		case ']':
			if (current[j] != '[') pass = false;
			bracketCount--;
			j--;
			break;
		case '}':
			if (current[j] != '{') pass = false;
			curlyCount--;
			j--;
			break;
		}
	}

	if (basicCount != 0 || bracketCount != 0 || curlyCount != 0 || !pass) cout << "NO";
	else {
		if (basicMax >= bracketMax && basicMax >= curlyMax) cout << basicMax;
		else if (bracketMax >= basicMax && bracketMax >= curlyMax) cout << bracketMax;
		else cout << curlyMax;
	}

    return 0;
}