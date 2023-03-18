#include <stdio.h>

int main (void)
{
    int F,C;

    F = 27;
    C = (F - 32) / 1.8;

    printf("%i degrees Fahrenheit is %i degrees Celcius.\n", F,C);

    return(0);
}