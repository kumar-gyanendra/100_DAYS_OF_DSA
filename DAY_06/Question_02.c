/* 
 Day 6 - Question 2: Move Zeroes

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 
Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1
 */

// CODE(Approach 01)
 
#include <stdio.h>

void moveZeroes(int nums[], int n) {
    int pos = 0; 

    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[pos] = nums[i];
            pos++;  
        }
    }

    for (int i = pos; i < n; i++) {
        nums[i] = 0;
    }
}

void printArray(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    moveZeroes(nums, n);

    printf("Array after moving zeroes to the end:\n");
    printArray(nums, n);

    return 0;
} 


// (Approach 02)

// LEETCODE SOLUTION
/* 
void moveZeroes(int* nums, int numsSize){
    int pos = 0; 

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[pos] = nums[i];
            pos++;
        }
    }

    for (int i = pos; i < numsSize; i++) {
        nums[i] = 0;
    }
}
*/