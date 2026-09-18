/*
 * Day 19 - Q37: Find the LCM of two numbers
 * 
 * Sample Test Case 1:
 * Input:
 * 12 18
 * Output:
 * Enter two numbers: LCM of 12 and 18 = 36
 */

#include <stdio.h>

int main() {
    int n1, n2, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("LCM of %d and %d = %d\n", n1, n2, max);
            break;
        }
        ++max;
    }

    return 0;
}
