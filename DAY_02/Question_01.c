/* 
Day 2 - Question 1

Delete an Element from an Array

Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.

Input:
- First line: integer n
- Second line: n space-separated integers
- Third line: integer pos (1-based position to delete)

Output:
- Print the updated array with (n-1) elements, space-separated

Example:
Input:
5
10 20 30 40 50
2

Output:
10 30 40 50

Explanation: Delete position 2 (element 20), remaining elements shift left 
*/

// CODE(Approach 1)
/* 
#include <stdio.h>

int main() {
    int n, pos;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position (1-based) to delete: ");
    scanf("%d", &pos);

    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    printf("Array after deletion:\n");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
} 
*/

// Approach 2
/* 
#include <stdio.h>

int main() {
    int n, pos;
    int arr[100], temp[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position (1-based) to delete: ");
    scanf("%d", &pos);

    for (int i = 0; i < pos - 1; i++)
        temp[i] = arr[i];

    for (int i = pos; i < n; i++)
        temp[i - 1] = arr[i];

    printf("Updated array: ");
    for (int i = 0; i < n - 1; i++)
        printf("%d ", temp[i]);

    return 0;
}
 */

// Approach 3

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pos;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory for n elements
    arr = (int*) malloc(n * sizeof(int));

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position (1-based) to delete: ");
    scanf("%d", &pos);

    for (int i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];

    printf("Updated array: ");
    for (int i = 0; i < n - 1; i++)
        printf("%d ", arr[i]);

    free(arr);

    return 0;
}
