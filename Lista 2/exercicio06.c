#include <stdio.h>
#include <math.h>

// Escreva um programa que leia um valor real. Caso o valor seja positivo, calcule a raiz  quadrada do mesmo.

int main(){

    float x;

    printf("Digite um valor real: ");
    scanf("%f", &x);

    if (x >= 0) printf("Raiz quadrada: %f", sqrt(x));

    return 0;
}