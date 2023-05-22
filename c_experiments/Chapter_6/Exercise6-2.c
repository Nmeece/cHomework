// Program to determine if one user defined int is devisible by another user defined int

#include <stdio.h>

int main(void){

    int numerator, denominator;

    printf("Enter two numbers to determine if the first is evenly divisible by the second: \n");
    printf("Please enter numerator: ");
    scanf ("%i", &numerator);

    printf("Please enter denominator: ");
    scanf ("%i", &denominator);

    if ((numerator % denominator) != 0)
        printf("%i is not evenly divisible by %i.\n", numerator, denominator);
    else
        printf("%i is evenly divisible by %i.\n", numerator, denominator);
    
    return 0;
    
}