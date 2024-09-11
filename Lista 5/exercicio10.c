#include <stdio.h>

/*
    Seja um vetor de inteiros de tamanho 10. Verifique se nele existem números ímpares.
    Caso existam, substitua-os pelo número par (sucessor) mais próximo, e imprima o
    vetor resultante
*/

int main()
{
    int numeros[10], i;
    for(i=0; i<10; i++)
    {
        scanf("%d", &numeros[i]);
        if(numeros[i] % 2 != 0) numeros[i]++;
    }

    for(i=0; i<10; i++) printf("%d ", numeros[i]);
    return 0;
}