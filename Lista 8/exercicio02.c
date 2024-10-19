#include <stdio.h>

/*
    Faça um programa para calcular a soma de todos os números pares de um vetor de
    tamanho 10. Para isso, faça uma função que retorna o resultado do somatório, e o
    parâmetro de entrada é o vetor.
*/

float somav(float v[10]){
    int i;
    float s=0;

    for(i=0; i<10; i++) s += v[i];

    return s;
}

int main()
{
    float vetor[10], soma;;
    int i;

    for(i=0; i<10; i++)
        scanf("%f", &vetor[i]);

    soma = somav(vetor);
    printf("%.3f ", soma);

    return 0;
}
