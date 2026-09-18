/*
 * Day 12 - Q23: Calculate Library Fine Based on Late Days
 * Rates:
 * First 5 days: Rs 2/day
 * Next 5 days: Rs 4/day
 * Next 20 days: Rs 6/day
 * More than 30 days: Membership Cancelled
 * 
 * Sample Test Case 1:
 * Input:
 * 7
 * Output:
 * Enter late days: Total Fine = Rs 18
 * 
 * Sample Test Case 2:
 * Input:
 * 35
 * Output:
 * Enter late days: Membership Cancelled.
 */

#include <stdio.h>

int main() {
    int days;
    int fine = 0;

    printf("Enter late days: ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("No fine.\n");
    } else if (days <= 5) {
        fine = days * 2;
        printf("Total Fine = Rs %d\n", fine);
    } else if (days <= 10) {
        fine = (5 * 2) + (days - 5) * 4;
        printf("Total Fine = Rs %d\n", fine);
    } else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        printf("Total Fine = Rs %d\n", fine);
    } else {
        printf("Membership Cancelled.\n");
    }

    return 0;
}
