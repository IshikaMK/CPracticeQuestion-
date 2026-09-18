/*
 * Day 8 - Q15: Find Factorial of a Number
 * 
 * Sample Test Case 1:
 * Input:
 * 5
 * Output:
 * Enter a positive integer: Factorial of 5 = 120
 * 
 * Sample Test Case 2:
 * Input:
 * 0
 * Output:
 * Enter a positive integer: Factorial of 0 = 1
 */

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}
