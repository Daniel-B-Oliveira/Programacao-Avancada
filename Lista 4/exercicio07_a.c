#include <stdio.h>
#include <math.h>
/*
    Faça um programa que leia um número inteiro n e, se n>1 imprima a soma dos
    múltiplos de 5 no intervalo de 1 a n. Elabore uma versão com while e outra com
    do-while.
*/

int main()
{
    int n, i=0, s=0;

    scanf("%d", &n);
    
    while(i <= (int) floor(n/5)){
        s += i*5;
        i++;
    } printf("%d",s);
    return 0;
}