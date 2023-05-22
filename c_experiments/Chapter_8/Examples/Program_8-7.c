/*
*   Calculating the Absolute Value
*/

//  Function to calculate the absolute value

#include <stdio.h>

float absoluteValue (float x)
{
    if ( x < 0 )
        x = -x;
    
    return x;
}

int main (void)
{    
    float f1 = -15.5, f2 = 20.0, f3 = -5;
    int i1 = -716;
    float result;

    result = absoluteValue (f1);
    printf ("result = %.2f\n\r", result);
    printf ("f1     = %.2f\n\r", f1);
    
    result = absoluteValue (f2) + absoluteValue (f3);
    printf ("result = %.2f\n\r", result);

    result = absoluteValue ( (float) i1 );
    printf ("result = %.2f\n\r", result);

    result = absoluteValue (i1);
    printf ("result = %.2f\n\r", result);

    printf ("%.2f\n\r", absoluteValue (-6.0) / 4 );

    return 0;
}