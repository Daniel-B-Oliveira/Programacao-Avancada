#include <stdio.h>

/*
    Escreva um programa em que o usuário deve entrar com uma sequência de 7 números
    inteiros, e imprima os valores maiores que 10, de modo invertido à entrada. Por
    exemplo, a sequência dada na entrada é: 12 3 8 25 4 31 0, e será mostrado na tela
    nesta ordem: 31 25 12.
*/

int main()
{
    int num[7], i;
    
    for(i=0; i<7; i++) scanf("%d", &num[i]);
    for(i=6; i>=0; i--) if(num[i]>10) printf("%d ", num[i]);
    
    return 0;
}