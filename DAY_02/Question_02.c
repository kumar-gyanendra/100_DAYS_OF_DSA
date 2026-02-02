/* 
Day 2 - Question 2

Best Time to Buy and Sell Stock

You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
 
Constraints:

1 <= prices.length <= 105
0 <= prices[i] <= 104 
*/

//CODE(Approach 1)
/* #include <stdio.h>

int main() {
    int n;
    int prices[100000];

    printf("Enter number of days: ");
    scanf("%d", &n);

    printf("Enter stock prices:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int buy = prices[0];   
    int profit = 0;         

    for (int i = 1; i < n; i++) {

        if (prices[i] < buy) {
            buy = prices[i];
        }

        else if (prices[i] - buy > profit) {
            profit = prices[i] - buy;
        }
    }

    printf("Maximum Profit = %d", profit);

    return 0;
} */

// (Approach 2)
/* 
#include <stdio.h>

int main() {
    int n;
    int prices[100000];

    printf("Enter number of days: ");
    scanf("%d", &n);

    printf("Enter stock prices:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int maxProfit = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int profit = prices[j] - prices[i];
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
    }

    printf("Maximum Profit = %d", maxProfit);

    return 0;
}
 */

/*  Important Note(for Approach 2)
This will fail for very large inputs (10⁵) */

// (Approach 3)
/* 
#include <stdio.h>

int maxProfit(int prices[], int n) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];              
        } else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }

    return maxProfit;
}

int main() {
    int n;
    int prices[100000];

    printf("Enter number of days: ");
    scanf("%d", &n);

    printf("Enter stock prices:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    printf("Maximum Profit = %d", maxProfit(prices, n));

    return 0;
}
 */

//(Approach 4)
/* 
#include <stdio.h>

int main() {
    int n;
    int prices[100000];

    printf("Enter number of days: ");
    scanf("%d", &n);

    printf("Enter stock prices:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int maxProfit = 0;
    int currentProfit = 0;

    for (int i = 1; i < n; i++) {
        int diff = prices[i] - prices[i - 1];

        currentProfit += diff;

        if (currentProfit < 0)
            currentProfit = 0;

        if (currentProfit > maxProfit)
            maxProfit = currentProfit;
    }

    printf("Maximum Profit = %d", maxProfit);

    return 0;
}
 */

//[LEETCODE SOLUTION]
/* 
int maxProfit(int* prices, int pricesSize){
    int minPrice = prices[0];
    int maxProfit = 0;

    for(int i = 1; i < pricesSize; i++){
        if(prices[i] < minPrice){
            minPrice = prices[i];            
        } else if(prices[i] - minPrice > maxProfit){
            maxProfit = prices[i] - minPrice; 
        }
    }

    return maxProfit;
}
 */
