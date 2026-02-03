/*
Day 3 - Question 1

Linear Search with Comparison Count

Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.

Input:
- First line: integer n (array size)
- Second line: n space-separated integers
- Third line: integer k (key to search)

Output:
- Line 1: "Found at index i" OR "Not Found"
Line 2: "Comparisons = c"

Example:
Input:
5
10 20 30 40 50
30

Output:
Found at index 2
Comparisons = 3

Explanation: Compared with 10, 20, 30 (found at index 2 with 3 comparisons)
 */

// CODE(Approach 01)
/* 
#include <stdio.h>

int main() {
    int n, k, c = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        c++;
        if (a[i] == k) {
            printf("Found at index %d\n", i);
            printf("Comparisons = %d\n", c);
            return 0;  
        }
    }

    printf("Not Found\n");
    printf("Comparisons = %d\n", c);

    return 0;
}
 */

// (Approach 02)
/* 
#include <stdio.h>

int main() {
    int n, k, c = 0, flag = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        c++;
        if (a[i] == k) {
            printf("Found at index %d\n", i);
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("Not Found\n");
    }

    printf("Comparisons = %d\n", c);

    return 0;
}
 */

// (Approach 03)
/* 
#include <stdio.h>

int main() {
    int n, k, i = 0, c = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    while (i < n) {
        scanf("%d", &a[i]);
        i++;
    }

    printf("Enter element to search: ");
    scanf("%d", &k);

    i = 0;   

    while (i < n && a[i] != k) {
        c++;
        i++;
    }

    if (i < n) {
        c++;
        printf("Found at index %d\n", i);
    } else {
        printf("Not Found\n");
    }

    printf("Comparisons = %d\n", c);

    return 0;
}
 */

// (Approach 04)
/* 
#include <stdio.h>

int main() {

    int n, k;
    int comparisons = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &k);

    int foundIndex = -1;

    for (int i = 0; i < n; i++) {
        comparisons++;
        if (arr[i] == k) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        printf("Element found at index %d\n", foundIndex);
    } else {
        printf("Element not found\n");
    }

    printf("Number of comparisons = %d\n", comparisons);

    return 0;
}
*/

// (Approach 05)
/* 
#include <stdio.h>

int main() {
    int n, k, i = 0, c = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n + 1];   

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &k);

    a[n] = k;      

    i = 0;
    while (a[i] != k) {
        c++;
        i++;
    }
    c++;           

    if (i < n) {
        printf("Found at index %d\n", i);
    } else {
        printf("Not Found\n");
    }

    printf("Comparisons = %d\n", c);

    return 0;
}
*/

