/* A simple "printing" calulator. Take in user expressions in the form of

    number operator
    
    where:
    
    operators: + , - , * , / , S , E 
    
    S: tells program to set the accumulator to the user entered number
    E: teslls program that execution is to end
    
    The arithmetic operations are performed on the contents of the accumulator
    with the number that was keyed in acting as the second operand.             */

    #include <stdio.h>
    #include <ctype.h>

    int main(void) {
        int retval = 0;
        int number = 0;
        float accumulator = 0;
        char operator = '0';
        
        printf("Simple printing calculator\n"
               "Enter data in the format: number operator\n"
               "Begin Calculations\n");
        
        //TODO Find where to implement input sanitization/verification.
        //TODO scanf returns an int of how many arguments were sucessfully assigned. 0 means something went wrong
        //TODO How do I end the program when an 'E' is entered while worring about scanf being happy?
        //TODO Where do I evaluate that scanf recieved good results, that it returned 2 ?
         
        
        while ((scanf("%i %c", &number, &operator)) == 2)  {
            

            //if (isalpha(number) || ispunct(number))
            //    printf("Not a valid number.");
            //    break; 

            switch (operator) {

                case '+':
                    accumulator += (float) number;
                    printf(" = %f\n", accumulator);
                    break;
                
                case '-':
                    accumulator -= (float) number;
                    printf(" = %f\n", accumulator);
                    break;

                case '*':
                    accumulator *= (float) number;
                    printf(" = %f\n", accumulator);
                    break;

                case '/':
                    if (number == 0) {
                        printf("Divide by zero error\n");
                        printf(" = %f\n", accumulator);
                        break;
                    }
                    else {
                        printf(" = %f\n", accumulator /= (float) number);
                        break;
                    }
                case 'S':
                    accumulator = number;
                    printf(" = %f\n", accumulator);
                    break;
                
                case 'E':
                    printf("End of calculations.\n");
                    break;

                default:
                    printf("Invalid operator.\n");
                    printf(" = %f\n", accumulator);
                    break;
            }
        }
        return 0;
    }