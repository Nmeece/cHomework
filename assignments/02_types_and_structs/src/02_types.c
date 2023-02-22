#include <stdio.h>
#include <math.h>

// Include the correct header files containing the declaration of the functions required for  "powf"
#include "myfunc.h"
//

// Create a variable of the type "float" called "myFloat_t"
typedef float myFloat_t;
//

// Declare a function that returns a myFloat_t and takes two myFloat_t arguments. 
myFloat_t myFunction(myFloat_t float1, myFloat_t float2);


//


int main(void) {
    
    // Declare two myFloat_t variables and initialize with values of your choice, one will be raised to the power of the other.
    // The names of these variables are val1 and val2.
    myFloat_t val1, val2;
    val1 = 3;
    val2 = 3;
    // Declare (without intializing) a myFloat_t for storing the result. The name of this variable is result.
    myFloat_t result;
    result = myFunction(val1, val2);

    printf ("%f raised to the power of %f is %f.\r\n", val1, val2, result);

    return 0;
}


// Define the function that returns a myFloat_t and takes two myFloat_t arguments. This function will raise the first argument to the power of the second argument.
myFloat_t myFunction(myFloat_t float1, myFloat_t float2)
{
    myFloat_t n, result;

    for(n = 1; n <= float2; ++n)
    {
        result = result + float1 * float1;
    }

    return(result);
}
//