#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: ");
    
    //using strlen with condition to get the amounnt of letters and setences of the string text    
    int letters = 0;
    int words = 1;
    int sentences = 0;
    
    
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
        else if (isspace(text[i]))
        {
            words++;
        }
        else if (text[i] == '.'  || text[i] == '!'  || text[i] == '?')
        {
            sentences++;
        }
    }
    
    //calculating the Coleman-Liau index formula
    
    //average of the leters, words and sentences
    float L = (letters / (float) words) * 100.0;
    float S = (sentences / (float) words) * 100.0;

    int index = (int)(0.0588 * L - 0.296 * S - 15.8);
    
    //showing the result to the user
    if (index > 1 && index < 16)
    {
        printf("Grade: %i\n", (int)round(index));
    }
    else if (index < 1)
    {
        printf("Before grade 1\n");
    }
    else
    {
        printf("Grade: 16+\n");
    }
    
    return 0;
}