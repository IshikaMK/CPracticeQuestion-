/*
 * Day 6 - Q12: Check Whether a Number is Positive, Negative, or Zero
 * 
 * Sample Test Case 1:
 * Input:
 * 15
 * Output:
 * Enter a number: 15.00 is positive.
 * 
 * Sample Test Case 2:
 * Input:
 * -8.5
 * Output:
 * Enter a number: -8.50 is negative.
 * 
 * Sample Test Case 3:
 * Input:
 * 0
 * Output:
 * Enter a number: The number is zero.
 */

#include <stdio.h>

int main() {
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    if (num > 0) {
        printf("%.2f is positive.\n", num);
    } else if (num < 0) {
        printf("%.2f is negative.\n", num);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
