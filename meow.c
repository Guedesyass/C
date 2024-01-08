#include <stdio.h>

//let the programm know that the fuction of the loop called meow exists
void meow(int n);

//the main fuction its suposed to be at the top of the file
int main(void)
{

        meow(5);
}


//making a function(action) called meow
void meow(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("meow\n");   
    }
}