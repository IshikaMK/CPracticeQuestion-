/*
 * Day 8 - Q16: Generate Multiplication Table of a Given Number
 * 
 * Sample Test Case 1:
 * Input:
 * 5
 * Output:
 * Enter an integer: 
 * 5 * 1 = 5
 * ...
 * 5 * 10 = 50
 */

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; ++i) {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}
