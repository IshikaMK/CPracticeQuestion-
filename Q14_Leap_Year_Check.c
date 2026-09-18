/*
 * Day 7 - Q14: Check Whether a Year is a Leap Year
 * 
 * Sample Test Case 1:
 * Input:
 * 2024
 * Output:
 * Enter a year: 2024 is a leap year.
 * 
 * Sample Test Case 2:
 * Input:
 * 1900
 * Output:
 * Enter a year: 1900 is not a leap year.
 */

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
