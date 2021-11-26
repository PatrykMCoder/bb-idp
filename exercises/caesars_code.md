# Caesar's Code

Write a program that will encrypt and decrypt a message using the Caesar Cipher. User will input whether they want to encrypt or decrypt, message and key.

For encryption, add the key to the ASCII value of each character in the message.

For decryption, subtract the key from the ASCII value of each character in the message.

-----

## Example: 
Input:\
1\
5\
"This_is_Caesar_Cipher!""\
Output: "Ymnx_nx_Hfjxfw_Hnumjw!"

Input:\
2\
5\
"Ymnx_nx_Hfjxfw_Hnumjw!"\
Output: "This_is_Caesar_Cipher!"

-----

## Input:
Digit (1 - encrypt or 2 - decrypt), digit from range 1 <= k <= 25 and message (without spaces)

-----

## Output:
Encrypted or decrypted message