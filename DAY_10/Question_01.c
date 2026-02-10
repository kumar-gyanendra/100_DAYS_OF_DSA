/* 
Day 10 - Question 1: Check Palindrome

Problem: Read a string and check if it is a palindrome using two-pointer comparison.

Input:
- Single line: string s

Output:
- Print YES if palindrome, otherwise NO

Example:
Input:
level

Output:
YES

Explanation: String reads same forwards and backwards 
*/

// CODE

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int left, right, isPalindrome = 1;

    printf("Enter the string: ");
    scanf("%s", s);

    left = 0;
    right = strlen(s) - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome)
        printf("Output: YES");
    else
        printf("Output: NO");

    return 0;
}
