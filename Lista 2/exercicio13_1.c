#include <stdio.h>

//Seja um programa que leia uma das letras: ‘a’, ‘b’, ‘c’ ou ‘d’, e escreva “Opcao A”,  
//“Opcao B”, “Opcao C” ou “Opcao D”, dependendo da letra dada pelo usuário. Caso não 
//seja nenhuma delas, escreva “Opcao invalida”. Faça um código usando IF aninhado e 
//depois, outro código usando switch-case. 

int main()
{
    char letra;
    scanf("%c", &letra);

    if(letra == 'a') printf("Opcao A");
    else if(letra == 'b') printf("Opcao B");
    else if(letra == 'c') printf("Opcao C");
    else if(letra == 'd') printf("Opcao D");
    else printf("Opcao invalida");
    
    return 0;
}