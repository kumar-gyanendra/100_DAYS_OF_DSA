/* 
Day 10 - Question 2: Intersection of Two Arrays II

Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
Explanation: [9,4] is also accepted.
 
Constraints:

1 <= nums1.length, nums2.length <= 1000
0 <= nums1[i], nums2[i] <= 1000 
*/

// NOTE(for leetcode) = The returned array must be malloced, assume caller calls free().

// CODE(Satisfying NOTE point)

#include <stdio.h>
#include <stdlib.h>

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int *result = (int*)malloc(sizeof(int) * (nums1Size < nums2Size ? nums1Size : nums2Size));
    int i, j, k = 0;

    for(i = 0; i < nums1Size; i++) {
        for(j = 0; j < nums2Size; j++) {
            if(nums1[i] == nums2[j]) {
                result[k++] = nums1[i];
                nums2[j] = -1;   
                break;
            }
        }
    }

    *returnSize = k;
    return result;
}

int main() {
    int n1, n2, i, size;
    int a[100], b[100];

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    int *ans = intersect(a, n1, b, n2, &size);

    printf("Intersection elements: ");
    for(i = 0; i < size; i++)
        printf("%d ", ans[i]);

    free(ans);
    return 0;
}

// LEETCODE SOLUTION

/* 
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    
    int *result = (int*)malloc(sizeof(int) * (nums1Size < nums2Size ? nums1Size : nums2Size));
    int k = 0;

    for(int i = 0; i < nums1Size; i++) {
        for(int j = 0; j < nums2Size; j++) {
            if(nums1[i] == nums2[j]) {
                result[k++] = nums1[i];
                nums2[j] = -1;   
                break;
            }
        }
    }

    *returnSize = k;
    return result;
} 
*/
