#import <cs50.h>
#import <stdio.h>
#import <stdlib.h>
#import <string.h>
#import <ctype.h>

int main(int argc, string argv[])
{
    //making sure that the key will be an integer number
    if (argc != 2)
    {
        printf("Usage: ./caesar key");
        return 1;
    }
    
    string key = argv[1];
    for (int i = 0; i < strlen(key); i++)
    {
        if (!isdigit(key[i]))
        {
            printf("Usage: ./caesar key");
            return 1;
        }
    }
    
    int k = atoi(key);
    
    //codificating the string
    string plaintext = get_string("Text: ");
    //initializing the ciphertext as the plaintext to just update them as needed 
    string ciphertext = plaintext;
    
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        //veryfing if the caracter is a letter to codify only letters
        if (isalpha(plaintext[i]))
        {
            //keeping the lower and upper cases
            char base = isupper(plaintext[i]) ? 'A' : 'a';
            //using the Caesar algorithm 
            ciphertext[i] = (plaintext[i] - base + k) % 26 + base;
        }
    }  
    printf("ciphertext: %s\n", ciphertext);
    return 0;

}