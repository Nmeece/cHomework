/*
*   An equation in the form
*   
*   ax^2 + bx +c
*   
*   is known as a quadratic equation. The values of a, b, and c in the preceding example represent constant values.
*   The values of x that satisfy a particular quadratic equation, known as the roots of the equation, can
*   be calculated by substituting teh values of a, b, and c into the following two formulas:
*   
*       If the value of   b^2 - 4ac , called the discriminant, is less than zero, th eroots of the 
*       equation, x1 and x2 are imaginary numbers.
*       
*       Write a program to solve a quadratic equation. The program should allow
*       the user to enter the values for a, b, and c. If the discriminant is less than
*       zero, a message should be displayed thta the roots are imaginary; otherwise,
*       the program should then proceed to calculate and display the two roots of
*       the equation. (NOTE: Be certain to make use of the squareRoot function that
*       you developed in this chapter.)
*/


#include <stdio.h>

//  Function to get and return quadratic constants from user

int getConstants (int a[])
{
    printf ("Value for a: ");
    scanf  ("%i", &a[0]);
    printf ("Value for b: ");
    scanf  ("%i", &a[1]);
    printf ("Value for c: ");
    scanf  ("%i", &a[2]);
    
    return 0;
}

//  Function determine if quadratic roots are imaginary

int quadDiscriminant (int consts[3])
{
    //  b^2 - 4ac

    int discriminant = 0;

    discriminant = ( consts[1] * consts[1] ) - ((4 * consts[0] ) * consts[2]);

    if ( discriminant < 0 )
        return -1;
    
    return 0;
}

//  Function to calculate raising an integer to a positive integer power

long int x_to_the_n (int x, int n)
{
    if (n < 0) {
        printf ("Error: Negative power provided. Try again.\n\r");
        return -1;
    }

    int      i;
    long int workingTotal = 1;

    for (i = 0; i < n ; ++i ) 
        workingTotal *= x;

    return workingTotal;
}

//  Function to return the absolute value of a float

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

    while ( absoluteValue (guess * guess - x) >= epsilon )
        guess = ( x / guess + guess ) / 2.0;

    return guess;
}

//  Function to solve for the roots of a quadratic equation

int quadraticSolve (int consts[3])
{
    //  x = (-b ± sqr(b^2 - 4ac))  /  2a

    float x1, x2;

    x1 = ( -(consts[1]) + squareRoot (x_to_the_n(consts[1], 2) - 4 * consts[0] * consts[2]) ) / ( 2 * consts[0] );

    x2 = ( -(consts[1]) - squareRoot (x_to_the_n(consts[1], 2) - 4 * consts[0] * consts[2]) ) / ( 2 * consts[0] );

    printf ("The two roots for the given constants are %f and %f\n\r", x1, x2);

    return 0;
}

int main (void)
{
    int constants[3];
    
    printf ("Enter the constants of the quadratic equation to solve: \n\r");

    getConstants(constants);

    if ( quadDiscriminant(constants) < 0 ) {
        printf ("For the given constants, the quadratic roots are imaginary.\n\r");
        return 1;
    }

    quadraticSolve (constants);

    return 0;
    
}