/*
 * Day 15 - Q29: Calculate the Factorial of a Number
 * 
 * Sample Test Case 1:
 * Input:
 * 5
 * Output:
 * Enter a number: Factorial = 120
 */

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of negative numbers does not exist.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial = %llu\n", fact);
    }

    return 0;
}
