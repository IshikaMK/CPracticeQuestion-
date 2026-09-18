/*
 * Day 2 - Q3: Area and Perimeter of Rectangle
 * 
 * Sample Test Case 1:
 * Input:
 * 10 5
 * Output:
 * Enter length and breadth: Area = 50.00
 * Perimeter = 30.00
 * 
 * Sample Test Case 2:
 * Input:
 * 8 4
 * Output:
 * Enter length and breadth: Area = 32.00
 * Perimeter = 24.00
 */

#include <stdio.h>

int main() {
    float length, breadth;
    float area, perimeter;

    printf("Enter length and breadth: ");
    scanf("%f %f", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}
