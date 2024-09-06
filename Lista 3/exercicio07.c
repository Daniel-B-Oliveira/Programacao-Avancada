#include <stdio.h>

/*
    Ler N valores reais (sendo N um valor dado pelo o usuário) e retorne a média
    dos números negativos encontrados entre estes. 
*/

int main()
{
    int n, i, k = 0;
    float x, soma = 0;

    scanf("%d", &n);
    if(n < 0) return 1;

    for(i=0; i < n; i++)
    {
        scanf("%f", &x);
        if(x < 0)
        {
            soma += x;
            k++;
        }
    } if(k==0) k = 1;

    printf("%.2f", soma / k);
    return 0;
}