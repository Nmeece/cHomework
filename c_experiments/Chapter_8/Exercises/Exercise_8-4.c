/*
*   Calculating the Square Root of a Number
*   
*   Modify Program 8.8 so that the value of guess is printed each time through the
*   while loop. Notice how quickly the value of guess converges to the square root.
*  
*   What conclusions can you reach about the number of iterations through the loop,
*   the number whose square root is being calculated, and the value of the initial 
*   guess?
*/

/*  
*   Observations/Conslusions:
*   
*   The closer that the inital guess is to the square root of a given number reduces
*   the number of iterations required to reach the square root. By finding an initial
*   guess closer to the actual square root, the number of iterations should be able 
*   to be reduced.   
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

    while ( absoluteValue (guess * guess - x) >= epsilon ) {
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