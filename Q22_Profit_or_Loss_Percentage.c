/*
 * Day 11 - Q22: Find Profit or Loss Percentage
 * 
 * Sample Test Case 1:
 * Input:
 * 1000 1200
 * Output:
 * Enter Cost Price and Selling Price: Profit = 20.00%
 * 
 * Sample Test Case 2:
 * Input:
 * 500 400
 * Output:
 * Enter Cost Price and Selling Price: Loss = 20.00%
 */

#include <stdio.h>

int main() {
    float cp, sp, percentage;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &cp, &sp);

    if (sp > cp) {
        percentage = ((sp - cp) / cp) * 100;
        printf("Profit = %.2f%%\n", percentage);
    } else if (cp > sp) {
        percentage = ((cp - sp) / cp) * 100;
        printf("Loss = %.2f%%\n", percentage);
    } else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
