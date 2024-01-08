#include <stdio.h>
#include <cs50.h>
#include <string.h>

//main return a int because programms associate numbers to possible errors that could come for these fuctions (zero means that it doesnt has any error)
int main(int argc, string argv[])
{
    //verify if the user gave me two words in the command line
    if (argc == 2)
    {
        string input = argv[1]; // Store the second command-line argument in a variable

        int n = strlen(input); // Declare and calculate the length of the input string

        for (int i = 0; i < n; i++)
        {
            printf("%c\n", input[i]); // Print each character of the input string
        }
    }
}
