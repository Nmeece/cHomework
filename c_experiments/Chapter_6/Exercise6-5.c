/*  Create a program to reverse the digits of an integer typed in from the terminal.
    This program must be designed to handle negative numbers.
    
    Example: -8645 entered would return 5468- */

#include <stdio.h>
#include <stdbool.h>

int main() {
    int number, right_digit;
    bool isNeg = false;

    /* Get number from terminal */
    printf("Enter your number.\n");
    scanf ("%i", &number);

    /* Find absolute value if int is negative. Print "-" first. */
    if (number < 0) {

        number = -number;
        isNeg = true;

    }

    /* Loop over number. Modulo 10 returns the least significant digit */
    do {
        right_digit = number % 10;
        printf("%i", right_digit);
        number = number / 10;

    }    
    while ( number != 0 );

    if (isNeg == true)
        printf("-");
    
    printf("\n");

    return 0;
}