/*
 * Day 7 - Q13: Find the Largest Among Three Numbers
 * 
 * Sample Test Case 1:
 * Input:
 * 12 45 32
 * Output:
 * Enter three numbers: Largest = 45.00
 * 
 * Sample Test Case 2:
 * Input:
 * -5 -2 -10
 * Output:
 * Enter three numbers: Largest = -2.00
 */

#include <stdio.h>

int main() {
    float n1, n2, n3;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3) {
        printf("Largest = %.2f\n", n1);
    } else if (n2 >= n1 && n2 >= n3) {
        printf("Largest = %.2f\n", n2);
    } else {
        printf("Largest = %.2f\n", n3);
    }

    return 0;
}
