#include <stdio.h>

/*
    Ler N números reais e mostre a média aritmética destes números, se N for
    maior ou igual a zero (sendo N um valor dado pelo o usuário). Caso contrário,
    escreva “Valor de N invalido”.
*/

int main()
{
    int n, i;
    float soma = 0, x;

    scanf("%d", &n);
    if(n < 0)
    {
        printf("Valor de N invalido");
    }else
    {
        for(i = 0; i < n; i++)
        {
            scanf("%f", &x);
            soma += x;
        }
        printf("%.3f", soma / n);
    } return 0;
}