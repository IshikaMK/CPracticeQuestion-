/*
 * Day 9 - Q17: Print Fibonacci Sequence Up to n Terms
 * 
 * Sample Test Case 1:
 * Input:
 * 7
 * Output:
 * Enter the number of terms: 0, 1, 1, 2, 3, 5, 8
 */

#include <stdio.h>

int main() {
    int n, i;
    long long t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        if (i == n) {
            printf("%lld", t1);
        } else {
            printf("%lld, ", t1);
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");

    return 0;
}
