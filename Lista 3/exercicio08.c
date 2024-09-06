#include <stdio.h>
#include <math.h>

/*
    Calcular o resultado da seguinte equação:
    S = 1 + 4 + 27 + 256 + ... + N^N,
    Onde N é um valor inteiro dado pelo usuário, que deve ser maior que zero.
    Calcule e mostre o resultado de S
*/

int main()
{
    int n, i, s=0;

    scanf("%d", &n);

    for(i=1; i <= n; i++) s += pow(i,i);
    printf("%d", s);
    
    return 0;
}