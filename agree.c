#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Do you agree? ");
    
    //the two bars are used to do two questions ate the same time(or)
    if(c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c =='N')
    {
        printf("Not agreed. \n");
    }
}