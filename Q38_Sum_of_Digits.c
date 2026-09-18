/*
 * Day 19 - Q38: Find the sum of digits of a number
 * 
 * Sample Test Case 1:
 * Input:
 * 1234
 * Output:
 * Enter a number: Sum of digits = 10
 */

#include <stdio.h>

int main() {
    int n, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        sum += remainder;
        n /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
