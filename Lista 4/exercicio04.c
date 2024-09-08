#include <stdio.h>
#include <math.h>

/*
    Retorne o quadrado de um número real x, dado pelo usuário, enquanto x for
    diferente de zero. Somente quando o usuário entrar com o número zero, o
    programa é encerrado.
*/

int main()
{
    float x;

    do
    {
        scanf("%f", &x);
        printf("%.3f\n", pow(x,2));
    }while(x != 0);
    return 0;
}