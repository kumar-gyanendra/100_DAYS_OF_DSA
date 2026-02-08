/* 
Day 8 - Question 1: Compute Power Using Recursion

Problem: Given integers a and b, compute a^b using recursion without using pow() function.

Input:
- Two space-separated integers a and b

Output:
- Print a raised to power b

Example:
Input:
2 5

Output:
32

Explanation: 2^5 = 2 * 2 * 2 * 2 * 2 = 32 
*/

// CODE(Approach 01)
/* 
#include <stdio.h>

long long power(int a, int b){
    if (b == 0)   
        return 1;
    else
        return a * power(a, b - 1);
}

int main(){
    int a, b;

    printf("Enter base (a): ");
    scanf("%d", &a);

    printf("Enter exponent (b): ");
    scanf("%d", &b);

    long long result = power(a, b);

    printf("Result = %lld\n", result);

    return 0;
}
 */

//  (Approach 02)(Recursive Fast Power)

#include <stdio.h>

long long power(int a, int b){
    if (b == 0)
        return 1;

    long long half = power(a, b / 2);

    if (b % 2 == 0)
        return half * half;
    else
        return a * half * half;
}

int main()
{
    int a, b;

    printf("Enter base: ");
    scanf("%d", &a);

    printf("Enter exponent: ");
    scanf("%d", &b);

    printf("Result = %lld", power(a, b));

    return 0;
}
