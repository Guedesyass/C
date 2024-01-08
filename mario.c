#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //gets the width of the question marks
    int n ;
    
    do 
    {
        n = get_int("Width: ");
    }
    while(n < 1);
    
    
    for(int i = 0; i < n; i++)
    {
    printf("?");
    }
    printf("\n");
    
    
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}