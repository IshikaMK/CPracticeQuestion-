/*
 * Day 10 - Q20: Check Whether a Number is Palindrome
 * 
 * Sample Test Case 1:
 * Input:
 * 121
 * Output:
 * Enter an integer: 121 is a palindrome.
 * 
 * Sample Test Case 2:
 * Input:
 * 123
 * Output:
 * Enter an integer: 123 is not a palindrome.
 */

#include <stdio.h>

int main() {
    int n, reversed = 0, remainder, original;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}
