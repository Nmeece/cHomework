/*
*   Modify Program 8.14 so that the user is reasked to type in the value of the base if
*   an invalid base is entered. The modified program should continue to ask for the 
*   value of the base until a valid response is given
*/

//  Program to  convert a positive integer to another base

#include <stdio.h>

int         convertedNumber[64];
long int    numberToConvert;
int         base;
int         digit = 0;
int         numOfIntegers = 0;

void getNumberAndBase (void)
{
    printf ("Number to be converted? ");
    scanf  ("%li", &numberToConvert);
    
    printf ("Base? ");
    
    scanf  ("%i", &base);

    while ( base < 2 || base > 16 ) {
        printf ("Bad base - must be between 2 and 16\n\rBase? ");
        scanf  ("%i", &base);
        //  base = 10;
    }
}

//  Function to determine the number of values to convert

void getNumberOfIntegers (void)
//  If 0 is entered, getNumberOfIntegers returns 1 and program should terminate.
{
    printf ("Number of integers to convert? ");

    scanf ("%i", &numOfIntegers);

    while (numOfIntegers < 0) {
        printf ("Positive numbers only, try again.\n\rNumber of integers to convert? ");
        scanf ("%i", &numOfIntegers);
    }
}

void convertNumber (void)
{
    digit = 0;
    do {
        convertedNumber[digit] = numberToConvert % base;
        ++digit;
        numberToConvert /= base;
    }
    while ( numberToConvert != 0);
}

void displayConvertedNumber (void)
{
    const char baseDigits[16] = 
            { '0', '1', '2', '3', '4', '5', '6', '7',
              '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
    int nextDigit;

    printf ("Converted number = ");

    for (--digit; digit >= 0; --digit) {
        nextDigit = convertedNumber[digit];
        printf ("%c", baseDigits[nextDigit]);
    }

    printf ("\n\r");
}

int main (void) 
{
    void getNumbersAndBase (void), convertNumber (void), displayConvertedNumber (void), getNumberOfIntegers (void);
    int i;

    getNumberOfIntegers();

    if ( numOfIntegers == 0 ) {
        printf ("Fine, be like that.\n\r");
        return 1;
    }

    for ( i = 1; i <= numOfIntegers; ++i ) {
        getNumberAndBase ();
        convertNumber ();
        displayConvertedNumber ();
    }
    
    return 0;
}