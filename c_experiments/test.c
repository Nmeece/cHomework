#include <stdio.h>

struct myTraits
{
    int pretties;
    int smarts;
    int handsomes;
    int stink;
    int cute;
};

int main (void)
{
    int n, total;

    for (n = 1; n <= 500; n = ++n)
        total = total + n;

    printf("big number %i", total);

    struct myTraits meerkat;

    meerkat.pretties = 110;
    meerkat.smarts = 76;
    meerkat.handsomes = 87;
    meerkat.stink = 0;
    meerkat.cute = 9001;

    printf("the boy is %i pretty, %i smarts, %i handsomes, %i stinky, and %i cute :3\n", meerkat.pretties, meerkat.smarts, meerkat.handsomes,meerkat.stink, meerkat.cute);
    
    return 0;
}