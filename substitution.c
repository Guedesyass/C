#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int keyValidation(string text);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage : ./substitution KEY\n");
        return 1;
    }

    string text = argv[1];
    int result = keyValidation(text);

    if (result == 1)
    {
        return 1;
    }

    string plaintext = get_string("Plaintext: ");
    string ciphertext = plaintext;

    // Define the alphabet and newAlphabet based on the key 
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string newAlphabet = text;

    // Loop through the plaintext and replace characters
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isalpha(plaintext[i]))
        {
            int index = toupper(plaintext[i]) - 'A';
            ciphertext[i] = isupper(plaintext[i]) ? newAlphabet[index] : tolower(newAlphabet[index]);
        }
    }

    printf("Ciphertext: %s\n", ciphertext);

    return 0;
}




int keyValidation(string text)
{
    if (strlen(text) != 26)
    {
        printf("The key must contain 26 characters.\n");
        return 1;
    }

    for (int i = 0; i < strlen(text); i++)
    {
        if (!isalpha(text[i]))
        {
            printf("The key must contain only alphabetic characters.\n");
            return 1;
        }

        for (int j = i + 1; j < strlen(text); j++)
        {
            if (text[i] == text[j])
            {
                printf("The key must not contain repeated characters.\n");
                return 1;
            }
        }
    }

    return 0;
}
