/*
 * Day 2 - Q4: Area and Circumference of Circle
 * 
 * Sample Test Case 1:
 * Input:
 * 5
 * Output:
 * Enter radius: Area = 78.54
 * Circumference = 31.42
 * 
 * Sample Test Case 2:
 * Input:
 * 10
 * Output:
 * Enter radius: Area = 314.16
 * Circumference = 62.83
 */

#include <stdio.h>

int main() {
    float radius;
    float area, circumference;
    const float PI = 3.14159;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}
