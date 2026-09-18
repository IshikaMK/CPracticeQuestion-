/*
 * Day 5 - Q9: Simple and Compound Interest
 * 
 * Sample Test Case 1:
 * Input:
 * 10000 5 2
 * Output:
 * Enter principal, rate and time: Simple Interest = 1000.00
 * Compound Interest = 1025.00
 * 
 * Sample Test Case 2:
 * Input:
 * 5000 10 3
 * Output:
 * Enter principal, rate and time: Simple Interest = 1500.00
 * Compound Interest = 1655.00
 */

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;

    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    simpleInterest = (principal * rate * time) / 100;

    compoundInterest =
        principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}
