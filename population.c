#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{   
    
    int inicial;
    int final;
    int anos;
    int nascem;
    int morrem;
    int umAno;
    int nAnos;
    
    
    do
    {
    inicial = get_int("Digite o valor inicial de lhamas:");
    }
    while (inicial < 9);
    
    do
    {
    final = get_int("Digite o valor final de lhamas:");
    }
    while(final < 9);
    
    nascem = round(inicial/3);
    morrem = round(inicial/4);
    
    umAno = inicial + nascem - morrem;
    
    nAnos = final / umAno;
    
    if(nAnos == 1)
    {
        printf("Irá levar:%i ano", nAnos);
    }
    else
    {
        printf("Irá levar:%i anos", nAnos);
    }
}