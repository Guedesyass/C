#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float cents;
    float dollars;
    int coins = 0;
    
    do 
    {
        dollars = get_float("What's the amount of change?");
    }
    while (dollars <= 0);
    
    cents = round(dollars*100);
    

    while (cents > 0)
    {
        if(cents >= 25)
        {
            cents = cents-25;
            coins++;
        }
        else if(cents >= 10)
        {
            cents = cents -10;
            coins++;
        }
        else if(cents >= 5)
        {
            cents = cents- 5;
            coins++;
        }
        else if(cents >= 1) {
            cents = cents -1;
            coins++;
        }
    }
    

    printf("The less amount of coins is: %i\n" ,coins);
}