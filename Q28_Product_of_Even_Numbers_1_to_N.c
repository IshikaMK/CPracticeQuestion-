/*
 * Day 14 - Q28: Print the Product of Even Numbers from 1 to n
 * 
 * Sample Test Case 1:
 * Input:
 * 6
 * Output:
 * Enter n: Product of even numbers from 1 to 6 = 48
 */

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long product = 1;
    int hasEven = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = 1;
    }

    if (hasEven) {
        printf("Product of even numbers from 1 to %d = %llu\n", n, product);
    } else {
        printf("No even numbers in the range 1 to %d\n", n);
    }

    return 0;
}
