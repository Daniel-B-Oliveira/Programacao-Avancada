#include <stdio.h>

int main() {
    //Escreva um programa que leia dois valores inteiros a e b, e verifique se a soma destes é par ou ímpar. Se a soma for par, escreva “Soma par”, se a soma for ímpar, verifique qual dos dois valores (a ou b) é par, e escreva.

    int a, b;

    scanf("%d %d", &a, &b);

    if ((a+b) % 2 == 0)
        printf("Soma par");
    else{
        if (a % 2 == 0) printf("%d e par", a);
        else printf("%d e par", b);
    }
    return 0;
}