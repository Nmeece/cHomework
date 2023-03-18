#include <stdio.h>

int main(void)
{
    float num1, num2, num3, num4, solution;

    num1 = 3.31e8;
    num2 = 2.01e7;
    num3 = 7.16e6;
    num4 = 2.01e8;

    solution = (num1 * num2) / (num3 + num4);

    printf("(%e x %e) / (%e + %e) =%e\n", num1,num2,num3,num4,solution);

    return (0);
}