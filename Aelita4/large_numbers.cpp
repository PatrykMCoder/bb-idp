#include <iostream>

using namespace std;

int main() {
string s;
	getline(cin, s);

	string one, two, oper;
	bool wasOper = false;
	for (int i = 0; i < s.length(); i++) {
		switch (s[i]) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			if (!wasOper) one += s[i];
			else two += s[i];
			break;
		case '<':
			if (s[i + 1] == '=') { // <=
				oper = "<=";
			}
			else { // <
				oper = "<";
			}
			wasOper = true;
			break;
		case '>':
			if (s[i + 1] == '=') { // >=
				oper = ">=";
			}
			else { // >
				oper = ">";
			}
			wasOper = true;
			break;
		case '=':
			if (s[i + 1] == '=') { // ==
				oper = "==";
				wasOper = true;
			}
			break;
		case '!':
			if (s[i + 1] == '=') { // !=
				oper = "!=";
				wasOper = true;
			}
		}
	}
	bool yesno = true;
	if (oper == "<=") {
		if (one.length() < two.length()) yesno = true; // this can be determined using number of digits
		else {
            // 
			// because of "or equal" check if numbers are equal
			if (one.length() != two.length()) yesno = false; // if they have different number of digits, they CAN'T be equal
			else for (int i = 0; i < one.length(); i++) {
				if (one[i] != two[i]) { // on given position digit is different, they are NOT equal
					yesno = false;
					break;
				}
			}
		}
	}
	else if (oper == "<") {
		if (one.length() < two.length()) yesno = true;
		else {
			for (int i = 0; i < two.length(); i++) {
				if (two[i] < one[i]) {
					yesno = false;
					break;
				}
			}
			// quick check if they happen to be equal
			bool isEqual = true;
			if (one.length() != two.length()) yesno = false;
			else for (int i = 0; i < one.length(); i++) {
				if (one[i] != two[i]) {
					isEqual = false;
					break;
				}
			}
				if (isEqual) yesno = false;
		}
	}
	else if (oper == ">=") {
		if (one.length() > two.length()) yesno = true;
		else {
			if (one.length() != two.length()) yesno = false;
			else for (int i = 0; i < one.length(); i++) {
				if (one[i] != two[i]) {
					yesno = false;
					break;
				}
			}
		}
	}
	else if (oper == ">") {
		if (one.length() > two.length()) yesno = true;
		else {
			for (int i = 0; i < one.length(); i++) {
				if (one[i] < two[i]) {
					yesno = false;
					break;
				}
			}
			bool isEqual = true;
			if (one.length() != two.length()) yesno = false;
			else for (int i = 0; i < one.length(); i++) {
				if (one[i] != two[i]) {
					isEqual = false;
					break;
				}
			}
				if (isEqual) yesno = false;
		}
	}
	else if (oper == "==") {
		if (one.length() != two.length()) yesno = false; // if they have different number of digits, they CAN'T be equal
		else for (int i = 0; i < one.length(); i++) {
			if (one[i] != two[i]) { // on given position digit is different, they are NOT equal
				yesno = false;
				break;
			}
		}
	}
	else if (oper == "!=") {
		bool isEqual = true;
		for (int i = 0; i < one.length(); i++) {
			if (one[i] != two[i]) {
				isEqual = false;
				break; // we've found one pair of digits that are not equal, no need to check further, numbers are NOT equal
			}
		}
		if (isEqual) yesno = false; // we got that they're equal, but we assumed they're not
	}

	if (yesno) cout << "YES";
	else cout << "NO";

    return 0;
}