/*
 * Day 17 - Q34: Check if a number is prime
 * 
 * Sample Test Case 1:
 * Input:
 * 29
 * Output:
 * Enter a number: 29 is a prime number.
 * 
 * Sample Test Case 2:
 * Input:
 * 12
 * Output:
 * Enter a number: 12 is not a prime number.
 */

#include <stdio.h>

int main() {
    int n, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        flag = 1;
    } else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
