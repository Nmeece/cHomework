/*  
*   
*   Modify Example 6.10 to incoporate the following two changes:
*   
*   1.  Skip all even numbers as possible primes and possible divisors.
*   2.  Add a test for the value of isPrime in the for loop to address the inefficinency 
*       of value p always divided by all values of d from 2 through p-1. This way the for
*       loop could be set up to continue as long as no divisor was found and the value of
*       d was less than p .
*       example
*/

//  Program to generate a table of prime numbers.

#include <stdio.h>
#include <stdbool.h>

int main (void) {
    // p = positive int; d = divisor
    int p, d;
    _Bool isPrime;

    //  eval 2 through 50 for primeness
    for ( p = 2; p <= 50; ++p) {
        
        isPrime = true;
        
        if (p > 2 && p % 2 == 0)
            continue;

        //  start with a divisor of 2 and as long as d < p, increment d by one after evaluating next for loop
        for (d = 2;d < p && isPrime == 1; ++d){

            //  if divisor is even, exit to outer loop
            if (d % 2 == 0)
                continue;

            //  if p is evenly divisible by d, it is not prime
            if (p % d == 0)
                isPrime = false;
        }

        //  if p is prime, print p
        if ( isPrime != 0)
            printf("%i ", p);
            
    }

    printf("\n");
    return 0;

}