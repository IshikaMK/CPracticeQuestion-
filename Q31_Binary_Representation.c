/*
 * Day 16 - Q31: Print Equivalent Binary Representation of a Number
 * 
 * Sample Test Case 1:
 * Input:
 * 10
 * Output:
 * Enter a number: Binary = 1010
 */

#include <stdio.h>

int main() {
    int num, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary = 0\n");
        return 0;
    }

    printf("Binary = ");
    for (i = 31; i >= 0; i--) {
        int k = num >> i;
        if (k & 1) {
            printf("1");
            flag = 1;
        } else if (flag) {
            printf("0");
        }
    }
    printf("\n");

    return 0;
}
