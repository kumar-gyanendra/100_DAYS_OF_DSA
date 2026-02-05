/*
Day 5 - Question 1: Arrange Arrival Logs

Problem: A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.

Input:
- First line: integer p (number of entries in server log 1)
- Second line: p sorted integers representing arrival times from server 1
- Third line: integer q (number of entries in server log 2)
- Fourth line: q sorted integers representing arrival times from server 2)

Output:
- Print a single line containing all arrival times in chronological order, separated by spaces

Example:
Input:
5
10 20 30 50 70
4
15 25 40 60

Output:
10 15 20 25 30 40 50 60 70

Explanation: Compare the next unprocessed arrival time from both logs and append the earlier one to the final log until all entries are processed
*/

// CODE(Approach 01)
/*
#include <stdio.h>

int main() {
    int p, q;

    printf("Enter number of entries in server log 1: ");
    scanf("%d", &p);

    int log1[p];
    printf("Enter %d sorted entries for server log 1: ", p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &log1[i]);
    }

    printf("Enter number of entries in server log 2: ");
    scanf("%d", &q);

    int log2[q];
    printf("Enter %d sorted entries for server log 2: ", q);
    for (int i = 0; i < q; i++) {
        scanf("%d", &log2[i]);
    }

    int i = 0, j = 0;
    printf("Merged chronological log: ");
    while (i < p && j < q) {
        if (log1[i] <= log2[j]) {
            printf("%d ", log1[i]);
            i++;
        } else {
            printf("%d ", log2[j]);
            j++;
        }
    }

    while (i < p) {
        printf("%d ", log1[i]);
        i++;
    }

    while (j < q) {
        printf("%d ", log2[j]);
        j++;
    }

    printf("\n");
    return 0;
}
 */

// (Approach 02)
/*
#include <stdio.h>

int main() {
    int p, q;

    printf("Enter number of entries in server log 1: ");
    scanf("%d", &p);

    int log1[p];
    printf("Enter %d sorted entries for server log 1: ", p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &log1[i]);
    }


    printf("Enter number of entries in server log 2: ");
    scanf("%d", &q);

    int log2[q];
    printf("Enter %d sorted entries for server log 2: ", q);
    for (int i = 0; i < q; i++) {
        scanf("%d", &log2[i]);
    }

    int merged[p + q];

    for (int i = 0; i < p; i++) {
        merged[i] = log1[i];
    }

    for (int i = 0; i < q; i++) {
        merged[p + i] = log2[i];
    }

    for (int i = 0; i < p + q - 1; i++) {
        for (int j = 0; j < p + q - i - 1; j++) {
            if (merged[j] > merged[j + 1]) {
                int temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }

    printf("Merged chronological log: ");
    for (int i = 0; i < p + q; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
 */

//(Approach 03)
/*
#include <stdio.h>

int main() {
    int p, q;

    printf("Enter number of entries in server log 1: ");
    scanf("%d", &p);

    int log1[p];
    printf("Enter %d sorted entries for server log 1: ", p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &log1[i]);
    }

    printf("Enter number of entries in server log 2: ");
    scanf("%d", &q);

    int log2[q];
    printf("Enter %d sorted entries for server log 2: ", q);
    for (int i = 0; i < q; i++) {
        scanf("%d", &log2[i]);
    }

    printf("Merged chronological log: ");

    int i = 0;
    int j = 0;

    while (i < p && j < q) {
        if (log1[i] <= log2[j]) {
            printf("%d ", log1[i]);
            i++;
        } else {
            printf("%d ", log2[j]);
            j++;
        }
    }

    // Print remaining elements from log1 (if any)
    while (i < p) {
        printf("%d ", log1[i]);
        i++;
    }

    // Print remaining elements from log2 (if any)
    while (j < q) {
        printf("%d ", log2[j]);
        j++;
    }

    printf("\n");

    return 0;
}
 */

//(Approach 04)(same as of 03 but little more compact )

#include <stdio.h>

int main()
{
    int p, q;

    printf("Enter number of entries in server log 1: ");
    scanf("%d", &p);
    int log1[p];
    printf("Enter %d sorted entries for server log 1: ", p);
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &log1[i]);
    }

    printf("Enter number of entries in server log 2: ");
    scanf("%d", &q);
    int log2[q];
    printf("Enter %d sorted entries for server log 2: ", q);
    for (int i = 0; i < q; i++)
    {
        scanf("%d", &log2[i]);
    }

    printf("Merged chronological log: ");

    int i = 0, j = 0;

    while (i < p || j < q)
    {
        if (j == q || (i < p && log1[i] <= log2[j]))
        {
            printf("%d ", log1[i]);
            i++;
        }
        else
        {
            printf("%d ", log2[j]);
            j++;
        }
    }

    printf("\n");
    return 0;
}
