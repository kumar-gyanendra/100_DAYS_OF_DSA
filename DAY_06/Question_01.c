/* 
Day 6 - Question 1: Remove Duplicates from Sorted Array

Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.

Input:
- First line: integer n
- Second line: n space-separated integers (sorted array)

Output:
- Print unique elements only, space-separated

Example:
Input:
6
1 1 2 2 3 3

Output:
1 2 3

Explanation: Keep first occurrence of each element: 1, 2, 3 
*/

// CODE(Approach 01)
/* 
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements are:\n");

    if(n > 0)
        printf("%d ", arr[0]);

    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[i-1]) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
 */

// (Approach 02)
/* 
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], unique[n];
    int j = 0;

    printf("Enter sorted array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if(n > 0)
        unique[j++] = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[i-1]) {
            unique[j++] = arr[i];
        }
    }

    printf("Unique elements are:\n");
    for(int i = 0; i < j; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}
 */

// (Approach 03)
/* 
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements are:\n");

    for(int i = 0; i < n; i++) {
        int isDuplicate = 0;

        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if(isDuplicate == 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
 */

// (Approach 04)
/* 
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int freq[1000] = {0};  

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements are:\n");

    for(int i = 0; i < n; i++) {
        if(freq[arr[i]] == 0) {
            printf("%d ", arr[i]);
        }
        freq[arr[i]]++;
    }

    return 0;
}
 */

// (Approach 05)

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if(n == 0)
        return 0;

    int i = 0;   

    for(int j = 1; j < n; j++) {
        if(arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }

    printf("Unique elements are:\n");

    for(int k = 0; k <= i; k++) {
        printf("%d ", arr[k]);
    }

    return 0;
}
