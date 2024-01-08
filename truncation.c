#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    
    int y = get_int("y: ");
    
    //convert x and y to a float
    float z = (float)x / (float)y;
    
    //%.xf defines how many decimals places will be showed
    printf("%.2f\n", z);
}