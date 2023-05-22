/*
*   Revising the Program to Find the Greatest Common Divisor
*/


//  Function to find the greatest common divisor of two non-negative int values

#include <stdio.h>

void gcd (int u, int v) {

    int temp;

    //  Gotta print u and v before they are modified.
    printf("The GCD OF %i and %i is ", u, v);

    while ( v != 0 ) {
        temp = u % v;
        u = v;
        v = temp;
    }

    printf("%i\n\r", u);
}

int main (void)
{
    gcd (150, 35);
    gcd (1026, 405);
    gcd (83, 240);

    return 0;
}