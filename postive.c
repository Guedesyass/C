//it didnt worked
#include <cs50.h>
#include <stdio.h>


int get_positive_int(void);

int main(void)
{
    int i = get_positive_int();
    printf("%i\n", i);
}






int get_positive_int(void)
{
    //we need to declare the variable outside the do while to can use it on other places 
    int n;
    do 
    {
        n = get_int("Positive integer: ");
    }
    while (n < 1);
    return n;
}