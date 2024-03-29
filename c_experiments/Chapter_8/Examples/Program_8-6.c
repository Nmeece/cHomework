/*
*   Revising the Program to Find the Greatest Common Divisor and Returning the Results
*/


//  Function to find the greatest common divisor of two non-negative int values and return result

#include <stdio.h>

int gcd (int u, int v) 
{

    int temp;

    while ( v != 0 ) {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}

int main (void)
{

    int result;

    result = gcd (150, 35);
    printf ("The gcd of 150 and 35 is %i\n\r", result);

    result = gcd (1026, 405);
    printf ("The gcd of 1026 and 405 is %i\n\r", result);

    printf ("The gcd of 83 and 240 is %i\n\r", gcd (83, 240));

    return 0;
}