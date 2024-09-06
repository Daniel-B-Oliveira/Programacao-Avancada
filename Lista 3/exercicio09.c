#include <stdio.h>

/*
    Escrever na tela a tabela de multiplicação de um número inteiro que deve estar
    no intervalo fechado de 1 a 10.
*/

int main()
{
    int n, i;

    scanf("%d", &n);

    for(i=1; i <= 10; i++) printf("%d X %d = %d\n", n, i, n*i);

    return 0;
}