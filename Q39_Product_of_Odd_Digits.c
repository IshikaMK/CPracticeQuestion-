/*
 * Day 20 - Q39: Find the product of odd digits of a number
 * 
 * Sample Test Case 1:
 * Input:
 * 12345
 * Output:
 * Enter a number: Product of odd digits = 15
 * 
 * Sample Test Case 2:
 * Input:
 * 2468
 * Output:
 * Enter a number: No odd digits found.
 */

#include <stdio.h>

int main() {
    int n, remainder, product = 1, hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        if (remainder % 2 != 0) {
            product *= remainder;
            hasOdd = 1;
        }
        n /= 10;
    }

    if (hasOdd) {
        printf("Product of odd digits = %d\n", product);
    } else {
        printf("No odd digits found.\n");
    }

    return 0;
}
