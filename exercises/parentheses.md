# Parentheses
Write a program that checks if the parentheses in a given expression are correctly placed and find degree of nesting of the expression.

Hint: Use the stack and switch instructions.

-----

## Explanation:
A sequence of parentheses is valid when an opening parenthesis of each type can be paired with a closing parenthesis of the same type that occurs after it, so that the sequence of parenthesis between them is also a valid parenthesis sequence.\
By the degree of nesting of a parenthesis sequence, we mean the maximum sequence of pairs of parenthesis, where each
is located inside the previous one. 

-----

## Example:
Input:\
20\
{}(\[{()()\[]}]()\[{}])\
Output:\
4

Input:\
3\
{}}\
Output\
NO

-----

## Input:
Number which determines the length of the expression and the expression itself as string

-----

## Output:
If expression is valid, print the degree of nesting, otherwise print "NO"
