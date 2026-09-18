/*
 * Day 4 - Q7: Swap Two Numbers Without Third Variable
 * 
 * Sample Test Case 1:
 * Input:
 * 15 25
 * Output:
 * Enter two numbers: Before swapping: num1 = 15, num2 = 25
 * After swapping: num1 = 25, num2 = 15
 * 
 * Sample Test Case 2:
 * Input:
 * 100 200
 * Output:
 * Enter two numbers: Before swapping: num1 = 100, num2 = 200
 * After swapping: num1 = 200, num2 = 100
 */

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
