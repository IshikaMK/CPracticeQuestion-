/*
 * Day 6 - Q11: Check Whether a Number is Even or Odd
 * 
 * Sample Test Case 1:
 * Input:
 * 4
 * Output:
 * Enter an integer: 4 is even.
 * 
 * Sample Test Case 2:
 * Input:
 * 7
 * Output:
 * Enter an integer: 7 is odd.
 */

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}
