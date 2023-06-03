/*
*   Write a function called  arraySum  that takes two arguments: an integer array and
*   the number of elements in the array. Have the function return as its result the sum
*   of the elements in the array.
*/

#include <stdio.h>

//  Function to calculate the sum of all elements in an array

int arraySum (int array[], int n)
{
    int i, total = 0;

    for ( i = 0; i < n; ++i)
        total += array[i];
    
    return total;
}


int main (void)
{
    int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                      44, -3, -9, 12, 17, 22, 6, 11 };

    int result = 0;

    result = arraySum(array, 16);
    
    printf ("Sum of array values is: %i\n\r", result);

    return 0;
}