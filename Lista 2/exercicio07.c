#include <stdio.h>
#include <math.h>

//Faça um programa que leia os catetos de um triângulo (a e b). Verifique se os catetos são maiores que zero. Caso sejam, escreva o valor da hipotenusa. Caso contrário, escreva “Operacao invalida”. 

int main(){
    float a, b;

    printf("Digite o valor do cateto 'a' e do cateto 'b': ");
    scanf("%f %f", &a, &b);

    if (a <= 0 || b <= 0) printf("Operacao invalida");
    else{
        float hpt;
        hpt = sqrt(pow(a,2) + pow(b,2));
        printf("Valor da hipotenusa: %.2f", hpt);
    } return 0;
}