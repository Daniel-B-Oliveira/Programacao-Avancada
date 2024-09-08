#include <stdio.h>

/*
    Faça um programa que determine e mostre os 4 primeiros múltiplos de 3,
    considerando números inteiros positivos. Elabore uma versão com while e
    outra com do-while.
*/

int main()
{
    int i=0;

    do{
        printf("%d ", i*3);
        i++;
    }while(i <= 3);

    return 0;
}