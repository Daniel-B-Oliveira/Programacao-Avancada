#include <stdio.h>

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
