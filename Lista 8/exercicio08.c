#include <stdio.h>

/*
    Crie um procedimento para entrada de elementos em vetor de inteiros, com
    parâmetro o vetor e o número de elementos do vetor. Faça o usuário entrar com o
    valor de n (número de elementos) na main, e chame o procedimento de entrada de
    elementos. Depois, com outro procedimento, escreva os elementos do vetor.
*/

void entrada_elementos(int n, float v[n])
{
    int i;
    for(i=0; i<n; i++) scanf("%f", &v[i]);
}

void mostrar_elementos(int n, float v[n])
{
    int i;
    printf("(");
    for(i=0; i<n-1; i++) printf("%.2f, ", v[i]);
    printf("%.2f)", v[i]);
}

int main()
{
    int n;
    scanf("%d", &n);

    float vetor[n];

    entrada_elementos(n, vetor);

    mostrar_elementos(n, vetor);

    return 0;
}