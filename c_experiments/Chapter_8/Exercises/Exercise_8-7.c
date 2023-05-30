/*
*   Write a function that raises an integer to a positive integer power. Call the function
*   x_to_the_n taking two integer arguments x and n. Have the function return
*   a long int, which represents the results of calculating x^n.
*/

#include <stdio.h>

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

int main (void)
{
    printf ("6 raised to the power of 5 is %li\n\r", x_to_the_n(6, 30));

    return 0;
}