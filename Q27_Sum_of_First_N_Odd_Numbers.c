/*
 * Day 14 - Q27: Print the Sum of the First n Odd Numbers
 * 
 * Sample Test Case 1:
 * Input:
 * 5
 * Output:
 * Enter n: Sum of first 5 odd numbers = 25
 */

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1);
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
