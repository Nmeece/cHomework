/*
*   Calculating the Square Root of a Number
*   
*   The criteria used for termination of the loop in the squareRoot function of
*   Program 8.8 is not suitable for use when computing the square root of very large
*   orvery small numbers. Rather than comparing the difference between the value of
*   x and the value of guess^2, the program should compare the ratio of the two values
*   to 1. The closer this ratio gets to 1, the more accurate the approximation of the
*   square root.
*   
*   Modify Program 8.8 so this new termination criteria is used.
*/

//  Function to calculate the absolute value of a number

#include <stdio.h>

float absoluteValue (float x)
{
    if ( x < 0 )
        x = -x;
    return (x);
}

//  Function to compute the square root of a number

float squareRoot (float x)
{
    const float epsilon = .00001;   //  Arbitrary number
    float         guess = 1.0;

    //  TODO: Get help making sense of this Exercise. I don't know if I've done it correctly


    while ( absoluteValue ( 1 - x / (guess * guess) ) >= epsilon) {
        printf ("guess = %f\n\r", guess);
        guess = ( x / guess + guess ) / 2.0;
    }
    return guess;
}

int main (void)
{
    printf ("squareRoot (2.0)   = %f\n\r", squareRoot (2.0));
    printf ("squareRoot (144.0) = %f\n\r", squareRoot (144.0));
    printf ("squareRoot (17.5)  = %f\n\r", squareRoot (17.5));
    printf ("squareRoot (20736)  = %f\n\r", squareRoot (20736));

    return 0;
}