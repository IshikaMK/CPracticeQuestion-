/*
 * Day 1 - Q1: Sum of Two Numbers
 * 
 * Sample Test Case 1:
 * Input:
 * 10 20
 * Output:
 * Enter two numbers: Sum = 30
 * 
 * Sample Test Case 2:
 * Input:
 * 25 35
 * Output:
 * Enter two numbers: Sum = 60
 */

#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;

    printf("Sum = %d\n", sum);

    return 0;
}
