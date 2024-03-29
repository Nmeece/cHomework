/*
*   Finding the Minimum Value in an Array
*/

//  Function to find the minimum value in an array

#include <stdio.h>

int minimum (int values[10])
{
    int minValue, i;

    minValue = values[0];

    for ( i = 1; i < 10; ++i )
        if ( values[i] < minValue)
            minValue = values[i];

    return minValue;
}

int main (void)
{
    int scores[10], i, minScore;
    int minimum (int values[10]);

    printf ("Enter 10 scores\n\r");

    for ( i = 0; i < 10; ++i)
        scanf ("%i", &scores[i]);

    minScore = minimum (scores);
    printf ("\n\rMinimum score is %i\n\r", minScore);

    return 0;
}