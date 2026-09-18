/*
 * Day 1 - Q2: Sum, Difference, Product and Quotient
 * 
 * Sample Test Case 1:
 * Input:
 * 20 5
 * Output:
 * Enter two numbers: Sum = 25.00
 * Difference = 15.00
 * Product = 100.00
 * Quotient = 4.00
 * 
 * Sample Test Case 2:
 * Input:
 * 10 0
 * Output:
 * Enter two numbers: Sum = 10.00
 * Difference = 10.00
 * Product = 0.00
 * Quotient = Cannot divide by zero
 */

#include <stdio.h>

int main() {
    float num1, num2;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Sum = %.2f\n", num1 + num2);
    printf("Difference = %.2f\n", num1 - num2);
    printf("Product = %.2f\n", num1 * num2);

    if (num2 != 0) {
        printf("Quotient = %.2f\n", num1 / num2);
    } else {
        printf("Quotient = Cannot divide by zero\n");
    }

    return 0;
}
