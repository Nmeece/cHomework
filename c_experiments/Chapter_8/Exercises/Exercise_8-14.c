/*
*   Rewrite the functions developed in the last four exercises to use global variables
*   instead of argunments. For example, the preceding exercise should now sort a globally
*   defined array.
*/

#include <stdio.h>

int gArray[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                   44, -3, -9, 12, 17, 22, 6, 11 };

int gMatrix[7][5] =   
{   
    {  0,  1,  2,  3,  4 },
    {  5,  6,  7,  8,  9 },
    { 10, 11, 12, 13, 14 },
    { 15, 16, 17, 18, 19 },
    { 20, 21, 22, 23, 24 },
    { 25, 26, 27, 28, 29 },
    { 30, 31, 32, 33, 34 }
};

int gTestPrime = 97;

//  Function to sort an array of integers into either ascending or descending order

void sort (char order, int n)
//  sort ((ascending or descending), (number of elements in the array))
//  order: u - ascending
//         d - descending
{
    int i, j, temp;

    switch (order)
    {
        case 'u':
            for ( i = 0; i < n - 1; ++i )                //  Sequences through array from first element to second-to-last element
                for ( j = i + 1; j < n; ++j )            //  Sequences from i to the last element in the array 
                    if ( gArray[i] > gArray[j]) {        //  If elements are out of order ( i > j ), switch elements
                        temp      = gArray[i];           //  Temp used as temporary storage to facilitate the switch
                        gArray[i] = gArray[j];
                        gArray[j] = temp;
            }

            break;

        case 'd':
            for ( i = 0; i < n - 1; ++i )                //  Sequences through array from first element to second-to-last element
                for ( j = i + 1; j < n; ++j )            //  Sequences from i to the last element in the array 
                    if ( gArray[i] < gArray[j]) {        //  If elements are out of order ( i < j ), switch elements
                        temp      = gArray[i];           //  Temp used as temporary storage to facilitate the switch
                        gArray[i] = gArray[j];
                        gArray[j] = temp;
            }

            break;
        
        default:
            printf ("Invalid order specified\n\r");
            
            break;

    }
}

//  Function to transpose and print contents of gMatrix

void transposeMatrix(int nRows, int nColumns)
{
    int transMatrix[nColumns][nRows];
    int row, col;

    void displayMatrix (int nRows, int nCols, int matrix[nRows][nCols]);

    for ( row = 0; row < nColumns; ++row )
        for ( col = 0; col < nRows; col++ )
            transMatrix[row][col] = gMatrix[col][row];

    printf ("Global matrix gMatrix after transposition:\n\r");

    displayMatrix(nColumns, nRows, transMatrix);

    return;
}

//  Function to print contents of a matrix to the console

void displayMatrix (int nRows, int nCols, int matrix[nRows][nCols])
{
    int row, column;

    for ( row = 0; row < nRows; ++row ) {
        for ( column = 0; column < nCols; ++column )
            printf ("%5i", matrix[row][column]);

        printf ("\n\r");
    }
    
}

//  Function to calculate the sum of all elements in global array gArray

int arraySum (int n)
{
    int i, total = 0;

    for ( i = 0; i < n; ++i)
        total += gArray[i];
    
    return total;
}

//  Function to determine if global gTestPrim is prime

int prime (void)
{
    int d;

    for ( d = 2; d < gTestPrime; ++d)
        if (gTestPrime % d == 0)
            return 0;

    return 1;
}


int main (void)
{
    int i;

    printf ("The contents of global array gArray in ascending order:\n\r");
    
    sort ('u', 16);

    for ( i = 0; i < 16; ++i )
        printf ("%i ", gArray[i]);

    printf ("\n\r\n\r");
    


    printf ("The contents of global array gArray in descending order:\n\r");

    sort ('d', 16);

    for ( i = 0; i < 16; ++i )
        printf ("%i ", gArray[i]);
    
    printf ("\n\r\n\r");
    


    printf ("The sum of global array gArray is %i\n\r\n\r", arraySum(16));



    printf ("Global integer gTestPrime( %i ) is ", gTestPrime);

        if (prime() == 0)
            printf ("not prime.\n\r\n\r");
        else
            printf ("prime.\n\r\n\r");
    
    printf ("gTestPrime + 1 = %i which is ", gTestPrime += 1);

        if (prime() == 0)
            printf ("not prime.\n\r\n\r");
        else
            printf ("prime.\n\r\n\r");


    printf ("Global matrix gMatrix before transposition:\n\r");
    
    displayMatrix(7, 5, gMatrix);

    transposeMatrix(7, 5);

    return 0;
}