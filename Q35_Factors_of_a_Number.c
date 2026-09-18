/*
 * Day 18 - Q35: Print all factors of a given number
 * 
 * Sample Test Case 1:
 * Input:
 * 12
 * Output:
 * Enter a number: Factors of 12: 1 2 3 4 6 12 
 */

#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d: ", num);
    for (i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
