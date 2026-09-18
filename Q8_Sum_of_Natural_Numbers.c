/*
 * Day 4 - Q8: Sum of First n Natural Numbers
 * 
 * Sample Test Case 1:
 * Input:
 * 5
 * Output:
 * Enter n: Sum of first 5 natural numbers = 15
 * 
 * Sample Test Case 2:
 * Input:
 * 10
 * Output:
 * Enter n: Sum of first 10 natural numbers = 55
 */

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
