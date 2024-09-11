#include <stdio.h>

/*
    Entrar com 15 números reais em um vetor e depois, verificar e mostrar o menor valor
    existente neste vetor.
*/

int main()
{
    float num[15], menor;
    int i;

    for(i=0; i<15; i++) scanf("%f", &num[i]);

    menor = num[0];
    
    for(i=1; i<15; i++) if(num[i] < menor) menor = num[i];
    printf("%.3f", menor);

    return 0;
}