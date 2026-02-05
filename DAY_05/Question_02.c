/* 
Day 05 - Question 2: Merge Sorted Array

You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
Merge nums1 and nums2 into a single array sorted in non-decreasing order.
The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
Example 2:

Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
Explanation: The arrays we are merging are [1] and [].
The result of the merge is [1].
Example 3:

Input: nums1 = [0], m = 0, nums2 = [1], n = 1
Output: [1]
Explanation: The arrays we are merging are [] and [1].
The result of the merge is [1].
Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.
 

Constraints:

nums1.length == m + n
nums2.length == n
0 <= m, n <= 200
1 <= m + n <= 200
-109 <= nums1[i], nums2[j] <= 109 
*/

// CODE(Approach 01)
/* 
#include <stdio.h>

int main() {
    int m, n;

    printf("Enter number of elements in nums1 (m): ");
    scanf("%d", &m);
    int nums1[m + 200]; 
    printf("Enter %d elements of nums1: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("Enter number of elements in nums2 (n): ");
    scanf("%d", &n);
    int nums2[n];
    if (n > 0) {
        printf("Enter %d elements of nums2: ", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &nums2[i]);
        }
    }

    int i = m - 1;       
    int j = n - 1;       
    int k = m + n - 1;   

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }

    printf("Merged array: ");
    for (int t = 0; t < m + n; t++) {
        printf("%d ", nums1[t]);
    }
    printf("\n");

    return 0;
}
 */

// (Approach 02)
/* 
#include <stdio.h>

int main() {
    int m, n;

    printf("Enter number of elements in nums1 (m): ");
    scanf("%d", &m);
    int nums1[m + 200]; 
    printf("Enter %d elements of nums1: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("Enter number of elements in nums2 (n): ");
    scanf("%d", &n);
    int nums2[n];
    printf("Enter %d elements of nums2: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int temp[m + n];
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            temp[k++] = nums1[i++];
        } else {
            temp[k++] = nums2[j++];
        }
    }

    while (i < m) temp[k++] = nums1[i++];
    while (j < n) temp[k++] = nums2[j++];

    for (int t = 0; t < m + n; t++) {
        nums1[t] = temp[t];
    }

    printf("Merged array: ");
    for (int t = 0; t < m + n; t++) {
        printf("%d ", nums1[t]);
    }
    printf("\n");

    return 0;
}
 */

//(Approach 03)
/* 
#include <stdio.h>

int main() {
    int m, n;

    printf("Enter number of elements in nums1 (m): ");
    scanf("%d", &m);
    int nums1[m + 200];
    printf("Enter %d elements of nums1: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("Enter number of elements in nums2 (n): ");
    scanf("%d", &n);
    int nums2[n];
    printf("Enter %d elements of nums2: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    for (int i = 0; i < n; i++) {
        nums1[m + i] = nums2[i];
    }

    for (int i = 0; i < m + n - 1; i++) {
        for (int j = 0; j < m + n - i - 1; j++) {
            if (nums1[j] > nums1[j + 1]) {
                int temp = nums1[j];
                nums1[j] = nums1[j + 1];
                nums1[j + 1] = temp;
            }
        }
    }

    printf("Merged array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", nums1[i]);
    }
    printf("\n");

    return 0;
}
 */

//LEETCODE SOLUTION

//  Approach 1 — Merge from the End 
/* 
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i = m - 1;
    int j = n - 1;         
    int k = m + n - 1;     

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}
 */

// Approach 2 — Temporary Array Merge (Beginner-Friendly)
/* 
#include <stdlib.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int *temp = (int*)malloc((m+n) * sizeof(int));
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            temp[k++] = nums1[i++];
        } else {
            temp[k++] = nums2[j++];
        }
    }

    while (i < m) temp[k++] = nums1[i++];
    while (j < n) temp[k++] = nums2[j++];

    for (int t = 0; t < m + n; t++) {
        nums1[t] = temp[t];
    }

    free(temp);
}
 */

//Approach 3 — Merge + Sort (Simplest Code)
/*
 #include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    for (int i = 0; i < n; i++) {
        nums1[m + i] = nums2[i];
    }

    qsort(nums1, m + n, sizeof(int), compare);
}
 */