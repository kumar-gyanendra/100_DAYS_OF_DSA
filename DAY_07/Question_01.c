/*
Day 7 - Question 1: Recursive Fibonacci

Problem: Write a recursive function fib(n) to compute the n-th Fibonacci number where fib(0)=0 and fib(1)=1.

Input:
- Single integer n

Output:
- Print the n-th Fibonacci number

Example:
Input:
6

Output:
8

Explanation: Sequence: 0,1,1,2,3,5,8 at positions 0,1,2,3,4,5,6 
*/

// CODE(Approach 01)

#include <stdio.h>

int fib(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;

    printf("Enter the value of n: ");   
    scanf("%d", &n);                    

    printf("The %dth Fibonacci number is: %d\n", n, fib(n));  

    return 0;
}

// (Iterative approach)
/* 
#include <stdio.h>

int fib(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int a = 0, b = 1, c;

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The %dth Fibonacci number is: %d\n", n, fib(n));
    return 0;
}
*/