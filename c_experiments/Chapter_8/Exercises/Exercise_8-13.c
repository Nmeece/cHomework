/*
*   Modify the  sort  function from Program 8.12 to take a third argument indicating
*   whether the array is to be sorted in ascending or descending order. Then modify
*   the sort algorithm to correctly sort the array into the indicated order.
*/

//  Program to sort an array of integers into either ascending or descending order

#include <stdio.h>

void sort (char order, int a[], int n)
{
    int i, j, temp;

    switch (order)
    {
        case 'u':
            for ( i = 0; i < n - 1; ++i )       //  Sequences through array from first element to second-to-last element
                for ( j = i + 1; j < n; ++j )   //  Sequences from i to the last element in the array 
                    if ( a[i] > a[j]) {         //  If elements are out of order ( i > j ), switch elements
                        temp = a[i];            //  Temp used as temporary storage to facilitate the switch
                        a[i] = a[j];
                        a[j] = temp;
            }

            break;

        case 'd':
            for ( i = 0; i < n - 1; ++i )       //  Sequences through array from first element to second-to-last element
                for ( j = i + 1; j < n; ++j )   //  Sequences from i to the last element in the array 
                    if ( a[i] < a[j]) {         //  If elements are out of order ( i < j ), switch elements
                        temp = a[i];            //  Temp used as temporary storage to facilitate the switch
                        a[i] = a[j];
                        a[j] = temp;
            }

            break;
        
        default:
            printf ("Invalid order specified\n\r");
            
            break;

    }
}

int main (void)
{
    int i;
    int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                      44, -3, -9, 12, 17, 22, 6, 11 };
    
    void sort (char order, int a[], int n);

    printf ("The array before the sort:\n\r");

    for ( i = 0; i < 16; ++i )
        printf ("%i ", array[i]);

    sort ('u', array, 16);

    printf ("\n\r\n\rThe array in ascending order:\n\r");

    for ( i = 0; i < 16; ++i )
        printf ("%i ", array[i]);
    
    printf ("\n\r");

    sort ('d', array, 16);

    printf ("\n\rThe array in descending order:\n\r");

    for ( i = 0; i < 16; ++i )
        printf ("%i ", array[i]);
    
    printf ("\n\r");

    return 0;
}