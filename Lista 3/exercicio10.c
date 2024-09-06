#include <stdio.h>
#include <math.h>

/*
    Escreva um programa, que dado N>0 (sendo N inteiro), mostrar os divisores de
    N. Por exemplo, se N = 12, os divisores são: 12, 6, 4, 3, 2, 1.
*/

int main()
{
    int n, i;

    scanf("%d", &n);

    
    printf("%d ", n);
    for(i= (int) round(n/2); i >= 1; i--)
        if(n % i == 0) printf("%d ", i);

    return 0;
}