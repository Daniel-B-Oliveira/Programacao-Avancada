#include <stdio.h>

//Seja um programa que leia uma das letras: ‘a’, ‘b’, ‘c’ ou ‘d’, e escreva “Opcao A”,  
//“Opcao B”, “Opcao C” ou “Opcao D”, dependendo da letra dada pelo usuário. Caso não 
//seja nenhuma delas, escreva “Opcao invalida”. Faça um código usando IF aninhado e 
//depois, outro código usando switch-case. 

int main()
{
    char letra;

    printf("Digite uma das letra: 'a', 'b', 'c', 'd':\n");
    scanf("%c", &letra);

    switch(letra)
    {
        case 'a': printf("Opcao A"); break;
        case 'b': printf("Opcao B"); break;
        case 'c': printf("Opcao C"); break;
        case 'd': printf("Opcao D"); break;
        default: printf("Opcao Invalida");
    } return 0;
}