#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");
    
    int n = strlen(s);
    //we're using the '\0' because the string always have the last char like and it can be used a as identifier for the end of a string, the fuction strlen() do the same thing
    for(int i = 0; i < n ; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}