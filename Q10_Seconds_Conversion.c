/*
 * Day 5 - Q10: Convert Seconds to Hours:Minutes:Seconds
 * 
 * Sample Test Case 1:
 * Input:
 * 3665
 * Output:
 * Enter time in seconds: Time = 01:01:05
 * 
 * Sample Test Case 2:
 * Input:
 * 7384
 * Output:
 * Enter time in seconds: Time = 02:03:04
 * 
 * Sample Test Case 3:
 * Input:
 * 60
 * Output:
 * Enter time in seconds: Time = 00:01:00
 */

#include <stdio.h>

int main() {
    int totalSeconds;
    int hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("Time = %02d:%02d:%02d\n",
           hours, minutes, seconds);

    return 0;
}
