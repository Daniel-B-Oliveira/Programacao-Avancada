#include <stdio.h>
#include <math.h>

/*
    Calcular o seguinte somatório:
        S = 1 + 1/2! + 1/3! + ¼! + ... + 1/N!
    Onde N é um valor inteiro e N >=0.
*/

int main()
{
    int n, i=1, j=1, fac = 1;
    float s = 0;    

    scanf("%d", &n);

    while(i <= n)
    {
        while(j <= i)
        {
            fac *= j;
            j++;
        } printf("%d ", fac); 
        s += (float) 1 / fac;
        i++;
    } printf("\n%.3f", s);
    return 0;

}