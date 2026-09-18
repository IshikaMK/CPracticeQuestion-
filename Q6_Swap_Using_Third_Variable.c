/*
 * Day 3 - Q6: Swap Two Numbers Using Third Variable
 * 
 * Sample Test Case 1:
 * Input:
 * 10 20
 * Output:
 * Enter two numbers: Before swapping: num1 = 10, num2 = 20
 * After swapping: num1 = 20, num2 = 10
 * 
 * Sample Test Case 2:
 * Input:
 * 100 50
 * Output:
 * Enter two numbers: Before swapping: num1 = 100, num2 = 50
 * After swapping: num1 = 50, num2 = 100
 */

#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
