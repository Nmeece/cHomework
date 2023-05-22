/* Program to take two user generated integers and divide the first by the second
   displaying the result to three decimal places of accuracy.                    */

#include <stdio.h>

int main(void) {

    int numerator, denominator;
    float result;

    printf("Enter two integers, the first to be divided by the second: ");
    scanf ("%i %i", &numerator, &denominator);

    if (denominator != 0) {
        result = (float) numerator / denominator;
        printf("%i / %i = %.3f\n", numerator, denominator, result);
    } 
    else
        printf("Divide by zero error.\n");

    return 0;
}