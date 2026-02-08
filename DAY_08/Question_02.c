/* 
Power of Two

Given an integer n, return true if it is a power of two. Otherwise, return false.
An integer n is a power of two, if there exists an integer x such that n == 2x.

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false
 

Constraints:

-231 <= n <= 231 - 1 
*/

// CODE (Bitwise Method)
/* 
#include <stdio.h>

int isPowerOfTwo(int n)
{
    if(n > 0 && (n & (n - 1)) == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if(isPowerOfTwo(n))
        printf("Output: true\n");
    else
        printf("Output: false\n");

    return 0;
}
*/

// CODE (Using loop)
/* 
#include <stdio.h>

int isPowerOfTwo(int n){
    if(n <= 0)
        return 0;

    while(n % 2 == 0)
        n = n / 2;

    if(n == 1)
        return 1;
    else
        return 0;
}

int main(){
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if(isPowerOfTwo(n))
        printf("Output: true\n");
    else
        printf("Output: false\n");

    return 0;
}
*/

// CODE(Recursion Method)
#include <stdio.h>

int isPowerOfTwo(int n){
    if(n == 1)
        return 1;
    if(n <= 0 || n % 2 != 0)
        return 0;

    return isPowerOfTwo(n / 2);
}

int main(){
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if(isPowerOfTwo(n))
        printf("Output: true\n");
    else
        printf("Output: false\n");

    return 0;
}

//LEETCODE SOLUTION
/*
bool isPowerOfTwo(int n)
{
    return (n > 0 && (n & (n - 1)) == 0);
} 
*/