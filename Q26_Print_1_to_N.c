/*
 * Day 13 - Q26: Print Numbers from 1 to n
 * 
 * Sample Test Case 1:
 * Input:
 * 5
 * Output:
 * Enter n: 1 2 3 4 5 
 */

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
