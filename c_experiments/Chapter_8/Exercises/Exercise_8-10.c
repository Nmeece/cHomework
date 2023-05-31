/*
*   Write a function  prime  That returns a 1 if it's argument is a prime number
*   and a 0 otherwise.
*/

#include <stdio.h>

//  Function to determine if a number is prime

int prime (int number)
{
    int d;

    for ( d = 2; d < number; ++d)
        if (number % d == 0)
            return 0;

    return 1;
}

int main (void)
{
    int number1 = 97;

    int number2 = 6;

    if ( prime(number1) != 0 )
        printf ("%i is prime\n\r", number1);
    else
        printf ("%i is not prime\n\r", number1);

    if ( prime(number2) != 0 )
        printf ("%i is prime\n\r", number2);
    else
        printf ("%i is not prime\n\r", number2);        

    return 0;
}