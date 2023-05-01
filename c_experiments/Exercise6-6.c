/*  
    A program that takes an integer keyed in from the terminal and extracts
    and displays each digit of the integer in English.
    
    EXAMPLE:
    Int entered: 932
    Returned   : nine three two                             
*/

#include <stdio.h>

int main () {

    int number, maxMod, numToWrite;
    int mod = 1;

    printf("Gimme a number and I'll give you the words: \n");
    scanf ("%i\n", &number);

    //  create copy of number to do work on; workingNum
    //  print word zero if number is 0
    //  print word negative if number is negative
    //  while number - workingNum != number
    //      working number = working number - working number % mod 
    //      mod *10
    //      

    int workNum = 1;
    int calcNum;

    if (number == 0)
        printf("zero ");

    if (number < 0)
        printf("negative ");

    //  Finds order of magnitude
    while (number - workNum != 0) {

        mod *= 10;
        workNum = number % mod;
    }

    maxMod = mod / 10;

    while (mod != 0) {

        numToWrite = number / mod; // 4

        switch (numToWrite) {

            case '1':
                printf("one ");

            case '2':
                printf("two ");

            case '3':
                printf("three ");

            case '4':
                printf("four ");
            
            case '5':
                printf("five ");
            
            case '6':
                printf("six ");
            
            case '7':
                printf("seven ");

            case '8':
                printf("eight ");
            
            case '9':
                printf("nine ");
            
            default:
                printf("Error calculating translation.");
            
        }

        calcNum = number - (numToWrite * mod); // 

    }



    return 0;
}