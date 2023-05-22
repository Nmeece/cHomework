/*
*    Write a program that calculates the average of an arry of 10 floating-point values.
*
*    nmece
*    5/6/2023
*/

#include <stdio.h>

int main (void) {

    float values[10], sum = 0, response;
    int i, valueCount = 10;

    for ( i = 0; i <= 9; ++i)
        values[i] = 0;

    printf ("Enter your responses.(Enter 999 when finished.)\r\n");

    for ( i = 0; i <= 9 && valueCount > 0; ++i){

        scanf ("%f", &response);
        values[i] = response;
        
        if (response == 0)
            --valueCount;
}
    for ( i = 0; i <= 9; ++i)
        sum += values[i];
    
    printf("Average = %f\r\n", (sum / valueCount));

    return 0;

}