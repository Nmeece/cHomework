/*
*    Program 7.2 permits only 20 responses to be entered. Modify that program so that
*    any number of responses can be entered. So that the user does not have to count
*    the number of responses in the list, set up the program so that the value 999 can
*    be keyed in by the user to indicate that the last response has been entered. 
*
*    Hint: You can use the break statement here if you want to exit your loop.
*
*    nmeece
*    5/6/2023
*/

#include <stdio.h>

int main (void) {

    int ratingCounters[11], i, response;


    for ( i = 1; i <= 10; ++i)
        ratingCounters[i] = 0;
    
    printf ("Enter your responses.(Enter 999 when finished.)\r\n");

    for ( i = 1; i ; ++i) {
        scanf ("%i", &response);

        if ( response == 999)
            break;

        else if ( response < 1 || response > 10)
            printf("Bad response: %i\r\n", response);
        
        else
            ++ratingCounters[response];
    }

    printf("\r\n\r\nRating     Number of Responses\r\n");
    printf("------     -------------------\r\n");

    for ( i = 1; i <= 10; ++i)
        printf("%4i%14i\r\n", i, ratingCounters[i]);

    return 0;
}