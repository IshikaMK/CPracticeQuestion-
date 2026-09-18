/*
 * Day 16 - Q32: Check if a Number is a Palindrome
 * 
 * Sample Test Case 1:
 * Input:
 * 121
 * Output:
 * Enter a number: 121 is a palindrome.
 * 
 * Sample Test Case 2:
 * Input:
 * 123
 * Output:
 * Enter a number: 123 is not a palindrome.
 */

#include <stdio.h>

int main() {
    int num, rev = 0, rem, original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    if (original == rev) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
