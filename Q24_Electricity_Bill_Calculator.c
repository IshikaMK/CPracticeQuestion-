/*
 * Day 12 - Q24: Calculate Electricity Bill Based on Units Consumed
 * Rates:
 * First 100 units: Rs 5/unit
 * Next 100 units: Rs 7/unit
 * Next 100 units: Rs 10/unit
 * Above 300 units: Rs 12/unit
 * 
 * Sample Test Case 1:
 * Input:
 * 150
 * Output:
 * Enter units consumed: Total Bill = Rs 850.00
 * 
 * Sample Test Case 2:
 * Input:
 * 350
 * Output:
 * Enter units consumed: Total Bill = Rs 2800.00
 */

#include <stdio.h>

int main() {
    float units, bill = 0;

    printf("Enter units consumed: ");
    scanf("%f", &units);

    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        bill = (100 * 5) + (units - 100) * 7;
    } else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    } else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
    }

    printf("Total Bill = Rs %.2f\n", bill);

    return 0;
}
