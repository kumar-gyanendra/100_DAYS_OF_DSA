/*
Day 9 - Question 1: Mirror the Code Name

Problem: A secret system stores code names in forward order. To display them in mirror format, you must transform the given code name so that its characters appear in the opposite order.

Input:
- Single line: a lowercase string containing only alphabetic characters (no spaces)

Output:
- Print the transformed code name after applying the mirror operation

Example:
Input:
hello

Output:
olleh

Explanation: The first character moves to the last position, the second to the second-last, and so on until the entire string is mirrored 
*/

//CODE
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i, len;

    printf("Enter the code name: ");
    scanf("%s", str);

    len = strlen(str);

    printf("Mirrored code name: ");

    for(i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
