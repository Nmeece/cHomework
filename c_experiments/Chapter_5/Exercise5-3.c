// Program to generate a table of triagular numbers

#include <stdio.h>

int main(void){

    int n, triangularNumber;

    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf(" n       Sum every 5 \n");
    printf("---    ---------------\n");

    triangularNumber = 0;

    for ( n = 5; n <= 50; n = n + 5) {
        triangularNumber = (n * (n +1) / 2);
        printf("%2i            %i\n", n, triangularNumber);
    }
    
    return 0;
}