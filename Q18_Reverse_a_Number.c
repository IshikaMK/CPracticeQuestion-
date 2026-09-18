/*
 * Day 9 - Q18: Reverse an Integer Number
 * 
 * Sample Test Case 1:
 * Input:
 * 1234
 * Output:
 * Enter an integer: Reversed Number = 4321
 */

#include <stdio.h>

int main() {
    int n, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    printf("Reversed Number = %d\n", reverse);

    return 0;
}
