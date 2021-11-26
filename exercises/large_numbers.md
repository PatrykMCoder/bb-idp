# Large numbers
Write a program that reads numbers that are too large to fit in a long long int and compare them.

-----

## Example:
Input: "1000000000000000000000000000000 < 1000000000000000000000000000001"\
Output: "YES"

Input: "999 >= 20000"\
Output: "NO"

-----

## Input:
One string which contains two numbers and one operator seperated by space\
First number must be larger or equal to 1, and second number must be smaller or equal to 10^1000\
Allowed operators are: <, >, <=, >=, ==, !=

-----

## Output:
"YES" or "NO"