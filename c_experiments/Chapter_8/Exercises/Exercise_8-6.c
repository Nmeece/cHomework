/*
*   Calculating the Square Root of a Number
*/

//  Function to calculate teh absolute value of a number

#include <stdio.h>

float absoluteValue (float x)
{
    if ( x < 0 )
        x = -x;
    return (x);
}

//  Function to compute the square root of a number

double squareRoot (double x)
{
    const double epsilon = .000000001;   //  Arbitrary number
    double         guess = 1.0;

    while ( absoluteValue (guess * guess - x) >= epsilon )
        guess = ( x / guess + guess ) / 2.0;

    return guess;
}

int main (void)
{
    printf ("squareRoot (2.0)   = %f\n\r", squareRoot (2.0));
    printf ("squareRoot (144.0) = %f\n\r", squareRoot (144.0));
    printf ("squareRoot (17.5)  = %f\n\r", squareRoot (17.5));
    printf ("squareRoot (20736) = %f\n\r", squareRoot (20736));
    
    return 0;
}