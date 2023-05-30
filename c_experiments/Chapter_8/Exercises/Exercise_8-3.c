/*
*   Calculating the Square Root of a Number
*
*   Modify Example 8.8 so that epsilon is passed as an argument to the funcion.
*   Try experimenting with different values of epsilon.
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

float squareRoot (float x, float epsilon)
{
    //  const float epsilon = .00001;   //  Arbitrary number
    float         guess = 1.0;

    while ( absoluteValue (guess * guess - x) >= epsilon )
        guess = ( x / guess + guess ) / 2.0;

    return guess;
}

int main (void)
{
    printf ("squareRoot (2.0)   = %f\n\r", squareRoot (2.0, 1.2));
    printf ("squareRoot (144.0) = %f\n\r", squareRoot (144.0, .001));
    printf ("squareRoot (17.5)  = %f\n\r", squareRoot (17.5, 5));

    return 0;
}