/*
*   Sorting an Array of Integers into Ascending Order
*/

//  Program to sort an array of integers into ascending order

#include <stdio.h>

void sort (int a[], int n)
{
    int i, j, temp;

    for ( i = 0; i < n - 1; ++i )       //  Sequences through array from first element to second-to-last element
        for ( j = i + 1; j < n; ++j )   //  Sequences from i to the last element in the array 
            if ( a[i] > a[j]) {         //  If elements are out of order ( i > j ), switch elements
                temp = a[i];            //  Temp used as temporary storage to facilitate the switch
                a[i] = a[j];
                a[j] = temp;
            }
}

int main (void)
{
    int i;
    int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                      44, -3, -9, 12, 17, 22, 6, 11 };
    
    void sort (int a[], int n);

    printf ("The array before the sort:\n\r");

    for ( i = 0; i < 16; ++i )
        printf ("%i ", array[i]);

    sort (array, 16);

    printf ("\n\r\n\rThe array after the sort:\n\r");

    for ( i = 0; i < 16; ++i )
        printf ("%i ", array[i]);
    
    printf ("\n\r");

    return 0;
}