#include <stdio.h>
#include <cs50.h>

//number that never changes
const int TOTAL= 3;
float average(int lenght, int array[]);

int main(void)
{
    //creation of a array
    
    //int total = get_int("Total number of scores: ");
    int scores[TOTAL];
    
    for(int i = 0, i < TOTAL; i++)
    {
         scores[i]=get_int("Score: ");   
    }


    printf("Average: %f\n", average(TOTAL, scores));
}


float average(int lenght, int array[])
{
    int sum = 0;
    for (int i = 0; i < lenght; i++)
    {
        sum+= array[i];
    }
    return sum / (float)lenght;
}