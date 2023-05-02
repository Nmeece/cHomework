/*  
    A program that takes an integer keyed in from the terminal and extracts
    and displays each digit of the integer in English.
    
    EXAMPLE:
    Int entered: 932
    Returned   : nine three two                             
*/

#include <stdio.h>

int main () {

    int number, maxMod, numToWrite, numberCopy;
    int mod = 1;

    printf("Gimme a number and I'll give you the words: ");
    scanf ("%i", &number);

    //  create copy of number to do work on; workingNum
    //  print word zero if number is 0
    //  print word negative if number is negative
    //  while number - workingNum != number
    //      working number = working number - working number % mod 
    //      mod *10
    //      

    int workNum = 1;
    
    if (number < 0) {
        printf("negative ");
        number = -number;
    }

    //  Finds order of magnitude
    while (number - workNum != 0) {

        mod *= 10;
        workNum = number % mod;
    }

    maxMod = mod;
    numberCopy = number;

    do {
        
        maxMod /= 10;
        numToWrite = numberCopy / maxMod; // 4

        switch (numToWrite) {

            case 0:
                printf("zero ");
                break;

            case 1:
                printf("one ");
                break;

            case 2:
                printf("two ");
                break;

            case 3:
                printf("three ");
                break;

            case 4:
                printf("four ");
                break;
            
            case 5:
                printf("five ");
                break;
            
            case 6:
                printf("six ");
                break;
            
            case 7:
                printf("seven ");
                break;

            case 8:
                printf("eight ");
                break;
            
            case 9:
                printf("nine ");
                break;
            
            default:
                printf("Error calculating translation.");
            
        }
        int p = numToWrite * maxMod;
        int j = numberCopy - p;
        numberCopy = j;

        
    }
    while (maxMod != 1);

    printf("\n");

    return 0;
}