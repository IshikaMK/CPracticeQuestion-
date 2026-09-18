/*
 * Day 17 - Q33: Check if a number is an Armstrong number
 * 
 * Sample Test Case 1:
 * Input:
 * 153
 * Output:
 * Enter a number: 153 is an Armstrong number.
 * 
 * Sample Test Case 2:
 * Input:
 * 123
 * Output:
 * Enter a number: 123 is not an Armstrong number.
 */

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Compute sum of nth power of individual digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
