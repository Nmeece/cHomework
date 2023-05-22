/*
*    You don't need to use an arry to generate Fibonacci numbers. You can simply use
*    three variables: two to store the previous two Fibonacci numbers and one to store
*    the current one. Rewrite Program 7.3 so that array sare not used. Because you're
*    no longer using an array, you need to display each Fibonacci number as you generate it.
*
*    nmeece
*    5/6/2023
*/

//  Program to generate the first 15 Fibonacci numbers

#include <stdio.h>

int main (void) {

    int f0, f1, fcur, i;

    f0   = 0;
    f1   = 1;
    fcur = 0;
    
    printf("%i\r\n%i\r\n", f0, f1);

    for ( i = 2; i < 15; ++i) {
        fcur = f0 + f1;
        printf("%i\r\n", fcur);
        f0   = f1;
        f1   = fcur;
        fcur = 0;
    }
    
    return 0;
}