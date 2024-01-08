#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("missing command-line arguments\n");
        return 1;
        //the return 1 associates the number 1 to the error
    }
    printf("Hello,%s\n", argv[1]);
    return 0;
    //zero its often used to say that it doesnt has any error
}