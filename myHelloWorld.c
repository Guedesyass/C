#import <cs50.h>
#import <stdio.h>
#import <string.h>
#include <unistd.h>

int main(void)
{
    
    int usleep(__useconds_t usec);
    int i;
    
    //B
    char c1 = 65;
    for( i = 1; i <=2; i++)
    {
        printf("%c\n", c1);
        c1 = c1+1;
        usleep(50000);
    }
    
        
    //E
    c1 = 65;
    for( i = 1; i <=5; i++)
    {
        printf("B%c\n", c1);
        c1 = c1+1;
        usleep(50000);
    }
    
        
    //Y
    c1 = 65;
    for( i = 1; i <=25; i++)
    {
        printf("BE%c\n", c1);
        c1 = c1+1;
        usleep(50000);
    }
    
        
    //O
    c1 = 65;
    for( i = 1; i <=15; i++)
    {
        printf("BEY%c\n", c1);
        c1 = c1+1;
        usleep(50000);
    }
    
        
    //N
    c1 = 65;
    for( i = 1; i <=13; i++)
    {
        printf("BEYO%c\n", c1);
        c1 = c1+1;
        usleep(50000);
    }
    
        
    //C
    c1 = 65;
    for( i = 1; i <=3; i++)
    {
        printf("BEYON%c\n", c1);
        c1 = c1+1;
        usleep(50000);
    }
    
        
    //E
    c1 = 65;
    for( i = 1; i <=5; i++)
    {
        printf("BEYONC%c\n", c1);
        c1 = c1+1;
        usleep(50000);
    }
    
        
    //B
    c1 = 65;
    for( i = 1; i <=3; i++)
    {
        printf("BEYONCE\n");
        c1 = c1+1;
        usleep(50000);
    }
}