// Assignment 1 - Making functions
#include <stdio.h>
// 1) Declare a function that returns an integer and takes one argument that is also an integer.
// -- Begin 1 --
int function (int number);

// -- End 1 --

int main (void) {

    // Declare a variable to be used as the input to the function declared in 1. Initialize this
    // variable to whatever values you want.
     int num;

     num = 3;   

    // Declare a variable to be hold the output of the function, it doesn't have to be initialized. 
    int result;

    // Call the function declared in 1. Return from this program with the result of the function call. 
    // It is not expected to print the resulting value.
    result = function(num);

    printf("%i squared is %i\n", num,result);
    return(result);
}

// 2) Define the function declared in step 1. The function should return the square of the argument.
// -- Begin 2 --
int function (int number)
{
    int square;
    square = number * number;
    
    return(square);
}
// -- End 2 --