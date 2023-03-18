#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <malloc.h>

/*#define is a wholesale equivalency between args. "NUM_PINS" = 4 anywhere*/
//#define NUM_PINS 4
#define PINS_MAX 32
#define PINS_MIN 1

/* Printf testing so that's cool*/
typedef enum {
    PIN_LOW  = 0,
    PIN_HIGH = 1
} pinType_t;


//function that returns a random int in the range of 0 - 1
int rando_bit (void);

//function that returns a random pin in the range of PIN_LOW - PIN_HIGH
pinType_t rando_pin (void);


int main(void)
{
    /*Safety stuff*/
    #ifndef NUM_PINS
    printf ("Define some pins you fucking retard.\r\n");
    exit (EXIT_FAILURE);
    #elif (NUM_PINS < PINS_MIN)
    printf ("Define more pins you fucking retard.\r\n");
    exit (EXIT_FAILURE);
    #elif (NUM_PINS > PINS_MAX)
    printf ("Define less pins you fucking retard.\r\n");
    exit (EXIT_FAILURE);
    #else
    uint32_t readByte = 0;

    // Initialize the RNG
    srand(time(NULL));
          
    
    /*Created an array of characters AKA a string. 
    Array sized for total number of pins +1 for special end line character '\0' (single quotes important)*/
    char bitValues  [PINS_MAX+1] = {'\0'};
    pinType_t dataPins[NUM_PINS];
    
    for (int i = 0; i < NUM_PINS; ++i){
        dataPins[i] = rando_pin();

        // %s format specifier for string literal
        // ? is a ternary operator 
        printf(
            "dataPin[%i] = %s\r\n",
            i,
            (dataPins[i]) ? "PIN_HIGH" : "PIN_LOW"
         );

        readByte |= dataPins[i] << i;

        /* strncat (string concatenate). Appends each data pin read to bitValues
            the n means it limits the size of the item concatenated*/
        strncat(bitValues, (dataPins[i])?"1":"0", 1);
    }
    printf (
        "Read Data Byte: %s\r\n"
        "In hex:         0x%X\r\n",
        bitValues,
        readByte
    );

    #endif
    return (0);
}

int rando_bit (void){
    return(rand() & 0b1);
}

pinType_t rando_pin (void) {
    return (rando_bit());
}