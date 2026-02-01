/*
 Day 1 - Question 1

Insert an Element in an Array
Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.

Input:
- First line: integer n
- Second line: n space-separated integers (the array)
- Third line: integer pos (1-based position)
- Fourth line: integer x (element to insert)

Output:
- Print the updated array (n+1 integers) in a single line, space-separated

Example:
Input:
5
1 2 4 5 6
3
3

Output:
1 2 3 4 5 6

Explanation: Insert 3 at position 3, elements [4,5,6] shift right 
*/

// CODE(Approach 1)
/* 
#include <stdio.h>

int main() {
    int n, pos, x;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position (1-based) to insert: ");
    scanf("%d", &pos);

    printf("Enter the element to insert: ");
    scanf("%d", &x);

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = x;

    printf("Array after insertion:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
} */

// (Approach 2)
/* 
#include <stdio.h>

int main() {
    int n, pos, x;
    int arr[100], temp[101];  

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position (1-based) to insert: ");
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &x);

    for (int i = 0; i < pos-1; i++)
        temp[i] = arr[i];

    temp[pos-1] = x;

    for (int i = pos-1; i < n; i++)
        temp[i+1] = arr[i];

    printf("Updated array: ");
    for (int i = 0; i <= n; i++)
        printf("%d ", temp[i]);

    return 0;
}
 */

// (Approach 3)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pos, x;
    int *arr;  

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocated memory for n+1 elements (to include the new element)
    arr = (int*) malloc((n + 1) * sizeof(int));

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position (1-based) to insert: ");
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &x);

    for (int i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = x;

    printf("Updated array: ");
    for (int i = 0; i <= n; i++)
        printf("%d ", arr[i]);

    free(arr);

    return 0;
}



