/*
 * Day 13 - Q25: Basic Calculator using switch-case (+, -, *, /, %)
 * 
 * Sample Test Case 1:
 * Input:
 * 10 5 +
 * Output:
 * Enter expression (num1 num2 operator): Result = 15.00
 * 
 * Sample Test Case 2:
 * Input:
 * 10 3 %
 * Output:
 * Enter expression (num1 num2 operator): Result = 1
 */

#include <stdio.h>

int main() {
    double num1, num2;
    char op;

    printf("Enter expression (num1 num2 operator): ");
    scanf("%lf %lf %c", &num1, &num2, &op);

    switch (op) {
        case '+':
            printf("Result = %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result = %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result = %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result = %.2lf\n", num1 / num2);
            else
                printf("Error: Division by zero!\n");
            break;
        case '%':
            if ((int)num2 != 0)
                printf("Result = %d\n", (int)num1 % (int)num2);
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Error: Invalid operator!\n");
    }

    return 0;
}
