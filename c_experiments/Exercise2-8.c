#include <stdio.h>

int main(void)
{
    int i, j, Next_Multiple;

    i = 996;
    j = 4;

    Next_Multiple = i + j - i % j;

    printf("Next largest multiple of days divisable by a week is %i\n", Next_Multiple);

    return (0);
}