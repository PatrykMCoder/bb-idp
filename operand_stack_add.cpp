// Write a program for adding integers of any size.

// Example:                                            
//                                                          1
//    592               2                 9                 5                 1
// + 3784             + 4               + 8               + 7               + 3
// ------             ---               ---               ---               ---
//   4376               6                17                13                 4
//                                                                                          
// operand-stack1 | |               | |               | |               | |               | |
//                |2|----+          | |               | |               | |               | |
//                |9|    |          |9|----+          | |               | |               | |
//                |5|    |          |5|    |   +---+  |5|----+   +---+  | |               | |
//                       |                 |   |   |         |   |   |
//                       +-> 6             +-> 17  +---------+-> 13  +---------+-> 4
//                       |   |             |    |            |    |            |   |
// operand-stack2 |4|----+   |      | |    |    |     | |    |    |     | |    |   |      | |
//                |8|        |      |8|----+    |     | |    |    |     | |    |   |      | |
//                |7|        |      |7|         |     |7|----+    |     | |    |   |      | |
//                |3|        |      |3|         |     |3|         |     |3|----+   |      | |
//                           |                  |                 |                |                
//                           |                  |                 |                |
//                           |                  |                 |                |
// result-stack   | |        |      | |         |     | |         |     | |        +----->|4|
//                | |        |      | |         |     | |         +---->|3|               |3|
//                | |        |      | |         +---->|7|               |7|               |7|
//                | |        +----->|6|               |6|               |6|               |6|

// Input: two integers

// Output: result of the addition

#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int one, two;

	char operandStack1[10];
	int s1index = 0;

	char operandStack2[10];
	int s2index = 0;
	
	char resultStack[10];
	int resindex = 0;

	cout << "Input first number: ";
	cin >> one;
	cout << "Input first number: ";
	cin >> two;

	stringstream ss1, ss2; // int to string
	char c;

	ss1 << one;
	for (int i = 0; i < ss1.str().length(); i++) {
		c = ss1.str().c_str()[i];
		operandStack1[s1index] = c;
		s1index++;
	}
	ss2 << two;
	for (int i = 0; i < ss2.str().length(); i++) {
		c = ss2.str().c_str()[i];
		operandStack2[s2index] = c;
		s2index++;
	}

	s1index--;
	s2index--;

	int wynik;
	int next = 0;
	while(true)
	{
		if(s1index < 0) wynik = (operandStack2[s2index] - '0') + next; // stack 1 now is empty
		else if(s2index < 0) wynik = (operandStack1[s1index] - '0') + next; // stack 2 is now empty
		else wynik = (operandStack1[s1index] - '0') + (operandStack2[s2index] - '0') + next;
		next = 0; // clearing right after calculation
		if (wynik > 9) {
			resultStack[resindex] = (wynik % 10) + '0'; // units go on stack
			next = wynik / 10; // overflow goes to next calculation
		}
		else resultStack[resindex] = wynik + '0'; // int to char
		s1index--;
		s2index--;

		if (s1index < 0 && s2index < 0) break; // breaking out of the loop when both stacks are empty

		resindex++;
	}

	if (next != 0) cout << next; // if there were any left overflow, display it first
	for (int i = resindex; i >= 0; i--) cout << resultStack[i];

    return 0;
}