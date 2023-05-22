#include <stdio.h>

int main(void){
    int number, right_digit, sum;

    printf("Enter your number.\n");
    scanf ("%i", &number);

    sum = 0;

    while(number != 0) {
        right_digit = number % 10;
        //printf("%i", right_digit);
        sum += right_digit;
        number = number / 10;
    }
    printf("Sum of all numbers: %i\n", sum);

    return 0;
}