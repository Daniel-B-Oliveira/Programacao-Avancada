#include <stdio.h>

int main(){
    //Faça um programa que receba um número real e informe se está no intervalo fechado entre 50 e 80.
    float n;
    scanf("%f", &n);

    if (n < 50 || n > 80) printf("Nao esta entre 50 e 80");
    else printf("Esta entre 50 e 80");

    return 0;
}