/*
 * Day 18 - Q36: Find the HCF (GCD) of two numbers
 * 
 * Sample Test Case 1:
 * Input:
 * 12 18
 * Output:
 * Enter two numbers: HCF of 12 and 18 = 6
 */

#include <stdio.h>

int main() {
    int n1, n2, i, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1 && i <= n2; ++i) {
        if (n1 % i == 0 && n2 % i == 0)
            hcf = i;
    }

    printf("HCF of %d and %d = %d\n", n1, n2, hcf);

    return 0;
}
