/*
*   I bet this program will assign the sum of each index before the current index to the current index.  
*
*   nmeece
*   5/6/2023
*/

#include <stdio.h>

int main (void) {

    int numbers[10] = {1,0,0,0,0,0,0,0,0,0};
    int i, j;

    for ( j = 0; j < 10; ++j )
        for ( i = 0; i < j; ++i )
            numbers[j] += numbers[i];
    
    for ( j = 0; j < 10; ++j )
        printf("%i ", numbers[j]);

    printf("\r\n");

    return 0;
}