#include <stdio.h>
#include <cs50.h>


int cardType(int numberSize, long cardNumber);

void valid(long cardNumber,int lenght);

int main(void)
{
    long cardNumber;
    int lenght;
    
    do {
    cardNumber = get_long("What's your card number?");
    }
    while (cardNumber < 0);
    
    long originalCardNumber = cardNumber;
    //selecting all the alternate numbers, multiplying by 2 and verifiyng if it ends up with 0
    int total = 0;
    int counter = 0;
    
    while (cardNumber > 0)
    {
        if(counter % 2 == 1){
            int num2 = cardNumber % 10 * 2;
            total += num2 % 10;
            total += num2 / 10;
        }

        else if(counter % 2 == 0){
            total += cardNumber % 10;
        }
        cardNumber /= 10;
        counter++;
    }
    
    
    if (total%10 == 0)
    {
        int digit;
        long card = originalCardNumber;
    
        do
        {
            digit = originalCardNumber/=10;
            printf("%i", digit);
        }
        while(originalCardNumber >= 10);
        
        
        if (digit == 4 && (counter == 13 || counter == 16) )
        {   
            printf("Card: %li\n", card);
            printf("Valid\n");
            printf("Visa\n, ");
            return 0;
        }
        else if ( (digit*10 == 34 || digit*10 ==37) && counter == 15)
        {
            printf("Card: %li\n", card);
            printf("Valid\n");
            printf("American Express\n");
            return 0;
        }
        else if( (digit*10 > 50 && digit*10 < 56) && counter == 16) {
            printf("Card: %li\n", card);
            printf("Valid\n");
            printf("Mastercard\n");
            return 0;
        }  
    }
    else 
    {
        printf("Invalid!\n");
        return 0;
    }
    
}

