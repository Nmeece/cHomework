#include <stdio.h>

int main(void) {
    int n, number, triangularNumber, counter, numTriangles;

    printf("How many triangular numbers would you like to calculate? ");
    scanf ("%i", &numTriangles);
    for (counter = 1; counter <= numTriangles; ++counter) {
        printf("What triangular number do you want? ");
        scanf ("%i", &number);

        triangularNumber = 0;

        for (n = 1; n <= number; ++n)
            triangularNumber += n;
        
        printf("Triangular number %i is %i\n\n", number, triangularNumber);
    }
    return 0;
}