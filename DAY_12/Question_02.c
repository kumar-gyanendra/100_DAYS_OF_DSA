/* 
Day 12 - Question 2: Toeplitz Matrix

Given an m x n matrix, return true if the matrix is Toeplitz. Otherwise, return false.
A matrix is Toeplitz if every diagonal from top-left to bottom-right has the same elements.

Example 1:

Input: matrix = [[1,2,3,4],[5,1,2,3],[9,5,1,2]]
Output: true
Explanation:
In the above grid, the diagonals are:
"[9]", "[5, 5]", "[1, 1, 1]", "[2, 2, 2]", "[3, 3]", "[4]".
In each diagonal all elements are the same, so the answer is True.
Example 2:

Input: matrix = [[1,2],[2,2]]
Output: false
Explanation:
The diagonal "[1, 2]" has different elements.
 
Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 20
0 <= matrix[i][j] <= 99 
*/

// CODE
#include <stdio.h>

int main() {
    int m, n;
    int a[20][20];
    int i, j;
    int isToeplitz = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter the matrix elements:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 1; i < m; i++) {
        for(j = 1; j < n; j++) {
            if(a[i][j] != a[i-1][j-1]) {
                isToeplitz = 0;
                break;
            }
        }
        if(isToeplitz == 0)
            break;
    }

    if(isToeplitz == 1)
        printf("Matrix is Toeplitz");
    else
        printf("Matrix is not Toeplitz");

    return 0;
}

// (LEETCODE SOLUTION)
/* 
bool isToeplitzMatrix(int** matrix, int matrixSize, int* matrixColSize) {
    
    for(int i = 1; i < matrixSize; i++) {
        for(int j = 1; j < matrixColSize[i]; j++) {
            if(matrix[i][j] != matrix[i-1][j-1]) {
                return false;
            }
        }
    }
    
    return true;
}
 */