#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float input;
    do
    {
        input = get_float("Change owed: ");
        if (input > 0)
        {
            break;
        }
    } while(true);
    int cents = input * 100;
    int numberOfQuarters = (int)((cents / 25)); // Calculating the number of Quarters
    int numberOfDimes = (int)((cents - numberOfQuarters * 25) / (10)); // Calculating the number of Dimes
    int numberOfNickels = (int)((cents - numberOfQuarters * 25 - numberOfDimes * 10) / (5)); // Calculating the number of Nickels 
    int numberOfPennies = (int)((cents - numberOfQuarters * 25 - numberOfDimes * 10 - numberOfNickels * 5) / (1)); 
    
    int output = numberOfQuarters + numberOfDimes  + numberOfNickels + numberOfPennies;
    printf("%i\n", output);
    
    
}
