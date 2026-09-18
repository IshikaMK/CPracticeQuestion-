/*
 * Day 15 - Q30: Reverse a Given Number
 * 
 * Sample Test Case 1:
 * Input:
 * 12345
 * Output:
 * Enter a number: Reversed Number = 54321
 */

#include <stdio.h>

int main() {
    int num, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    printf("Reversed Number = %d\n", rev);

    return 0;
}
