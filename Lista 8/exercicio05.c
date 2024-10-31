#include <stdio.h>

/*
Escreva um programa em que o usuário escolha quais operações deseja executar:
calcular a soma de Gauss de N, calcular o número harmônico de N, calcular a potência
N^N. Faça uma função para cada opção.
*/

// int soma_gauss(int n)
// {
//     if(n==1) return 1;
//     return n + soma_gauss(n-1);
// }

int soma_gauss (int n) {
    int i, S = 0;
    for (i = 1; i <= n; i++) S += i; 
    return S;
}

float harmonico(int n)
{
    return (float) 1/n;
}

float potencia_n(int n)
{
    int i;
    float p=1;
    if(n>0)
        for(i=0; i<n; i++) p *= (float)n;
    else if(n < 0)
        for(i=n; i<0; i++) p /= (float)n;

    return p;
}

int main()
{
    int n, op;
    scanf("%d", &n);
    scanf("%d", &op);

    switch(op)
    {
        case 1: printf("%d", soma_gauss(n)); break;
        case 2: printf("%.3f", harmonico(n)); break;
        case 3: printf("%3.f", potencia_n(n)); break;
    }
}