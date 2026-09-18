/*
 * Day 3 - Q5: Celsius to Fahrenheit
 * 
 * Sample Test Case 1:
 * Input:
 * 0
 * Output:
 * Enter temperature in Celsius: Temperature in Fahrenheit = 32.00
 * 
 * Sample Test Case 2:
 * Input:
 * 100
 * Output:
 * Enter temperature in Celsius: Temperature in Fahrenheit = 212.00
 */

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}
