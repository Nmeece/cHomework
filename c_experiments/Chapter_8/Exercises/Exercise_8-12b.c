/*
*   A matrix  M  with  i  rows,  j  columns can be transposed into a matrix  N  having  j  rows and
*   i  columns by simply setting the value of  N(a,b)  equal to the value of  M(b,a)  for all
*   relevant values of  a  and  b  .
*   
*   a.  Write a function  transposeMatrix  that takes as an argument a 4 x 5 matrix
*       and a 5 x 4 matrix. Have the function transpose the 4 x 5 matrix and store 
*       the results in the 5 x 4 matrix. Also write a  main  routine to test the function.
*   
*   b.  Using variable-length arrays, rewrite the  transposeMatrix  function developed
*       in Exercise_8-12a to take the number of rows and columns as arguments,   
*       and to transpose the matrix of the specified dimensions.
*/

#include <stdio.h>

//  Function to transpose and print a matrix of of a specified dimension

void transposeMatrix(int nRows, int nColumns, int originalMatrix[nRows][nColumns])
{
    int transMatrix[nColumns][nRows];
    int row, col;

    void displayMatrix (int nRows, int nCols, int matrix[nRows][nCols]);

    for ( row = 0; row < nColumns; ++row )
        for ( col = 0; col < nRows; col++ )
            transMatrix[row][col] = originalMatrix[col][row];

    printf ("Transposed matrix:\n\r");

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


int main(void)
{
    int matrix1[7][5] =   
    {   
        {  0,  1,  2,  3,  4 },
        {  5,  6,  7,  8,  9 },
        { 10, 11, 12, 13, 14 },
        { 15, 16, 17, 18, 19 },
        { 20, 21, 22, 23, 24 },
        { 25, 26, 27, 28, 29 },
        { 30, 31, 32, 33, 34 }
    };

    //  int matrix2[5][4] = {0};

    printf ("Matricies before transposition:\n\r");

    printf ("*** Matrix 1 ***\n\r");
    displayMatrix (7, 5, matrix1);

    //  printf ("*** Matrix 2 ***\n\r");
    //  displayMatrix (5, 4, matrix2);

    printf ("\n\rMatrix 2 after transposition:\n\r");

    transposeMatrix (7, 5, matrix1);

    return 0;
}