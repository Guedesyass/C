#import <cs50.h>
#import <stdio.h>
#import <string.h>
#include <unistd.h>


int main(void)
{
    int usleep(__useconds_t usec);
    int i;
    
    //H
    char c1 = 65;
    for( i = 1; i <=8; i++)
    {
        printf("%c\n", c1);
        c1 = c1+1;
        usleep(50000);
    }
    
    //E
    c1=97;
    for( i = 1; i <=5; i++)
    {
        printf("H%c\n", c1);
        c1 = c1+1;
        usleep(50000);
    }
    
    //L
    c1=97;
    for( i = 1; i <=12; i++)
    {
        printf("He%c\n", c1);
        c1 = c1+1;
        usleep(50000);
    }
    
    c1=97;
    for( i = 1; i <=12; i++)
    {
        printf("Hel%c\n", c1);
        c1 = c1+1;
        usleep(50000);
    }
    
        
    //O
    c1=97;
    for( i = 1; i <=15; i++)
    {
        printf("Hell%c\n", c1);
        c1 = c1+1;
        usleep(50000);
    }
    
    usleep(50000);
    
        
    //W
    for( i = 1; i <=23; i++)
    {
        printf("Hello %c\n", c1);
        c1 = c1+1;
        usleep(50000);
    }
    
        
    //O
    c1=97;
    for( i = 1; i <=15; i++)
    {
        printf("Hello w%c\n", c1);
        c1 = c1+1;
        usleep(50000);
    }
    
        
    //R
    c1=97;
    for( i = 1; i <=18; i++)
    {
        printf("Hello wo%c\n", c1);
        c1 = c1+1;
        usleep(50000);
    }
    
        
    //L
    c1=97;
    for( i = 1; i <=12; i++)
    {
        printf("Hello wor%c\n", c1);
        c1 = c1+1;
        usleep(50000);
    }
    
        
    //D
    c1=97;
    for( i = 1; i <=4; i++)
    {
        printf("Hello worl%c\n", c1);
        c1 = c1+1;
        usleep(50000);
    }
    
        
    //L
    c1=97;
    for( i = 1; i <=3; i++)
    {
        printf("Hello World\n");
        c1 = c1+1;
        usleep(50000);
    }
    
    return 0;
}