/*
 * Day 20 - Q40: Find the 1's complement of a binary number and print it
 * 
 * Sample Test Case 1:
 * Input:
 * 101011
 * Output:
 * Enter a binary number: 1's complement = 010100
 */

#include <stdio.h>

int main() {
    char binary[100];
    int i = 0;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    printf("1's complement = ");
    while (binary[i] != '\0') {
        if (binary[i] == '0') {
            printf("1");
        } else if (binary[i] == '1') {
            printf("0");
        } else {
            printf("\nInvalid binary digit!");
            return 1;
        }
        i++;
    }
    printf("\n");

    return 0;
}
