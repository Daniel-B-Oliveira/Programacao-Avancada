#include <stdio.h>

int main(){
    //Escreva um programa que leia a idade de uma pessoa, verifique se é par, e escreva uma mensagem “Idade par” ou “Idade impar”, dependendo do caso.

    int idade;
    scanf("%d", &idade);

    if(idade % 2 == 0) printf("Idade par");
    else printf("Idade impar");

    return 0;
}