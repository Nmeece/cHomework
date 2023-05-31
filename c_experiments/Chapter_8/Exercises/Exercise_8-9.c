/*
*   Write a function lcm (least common multiple) that takes two integer arguments and returns their lcm.
*   The lcm function should calculate the least common multiple by calling the gcd function from Program 
*   8.6 in accordance with the following itentity:
*   
*   lcm (u, v) = uv / gcd (u, v)            u, v >= 0   
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

//  Function to calculate and return the least common multiple of two integers

int lcm (int u, int v)
{
    int result;

    result = ( u * v ) / (gcd(u, v));

    return result;
}

int main (void)
{
    int u = 0, v = 0;

    printf ("Please enter two numbers to find their least common multiple.\n\r");

    printf ("First Number: ");
    scanf  ("%i", &u);

    printf ("Second Number: ");
    scanf  ("%i", &v);

    printf ("\n\r");

    printf ("The least common multiple of %i and %i is: %i\n\r", u, v, lcm(u, v));
    
    return 0;
}