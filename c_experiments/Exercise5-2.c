// Program to generate a table of triagular numbers

#include <stdio.h>

int main(void){

    int n, squareNumber;

    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf(" n           n^2       \n");
    printf("---    ---------------\n");

    squareNumber = 0;

    for ( n = 1; n <= 10; ++n) {
        squareNumber = n * n;
        printf("%2i            %i\n", n, squareNumber);
    }
    
    return 0;
}