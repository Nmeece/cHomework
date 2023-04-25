// Program to display tables containing a number and it's factorial

#include <stdio.h>

int main (void) {

    int n, factorial;

    printf("TABLE OF FACTORIAL NUMBERS\n\n");
    printf(" n            n! \n");
    printf("---    ---------------\n");

    for (n = 1; n <= 10; ++n) {

        factorial = 1;
            for ( int j = 1; j <= n; ++j) {
                factorial *= j;
            }

        printf("%2i            %i\n", n, factorial);
    }
    
    return 0;
}