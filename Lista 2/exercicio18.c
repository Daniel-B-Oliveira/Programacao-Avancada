#include <stdio.h>

/*
    Faça um programa que leia um número entre 0 e 10, e escreva este número por 
    extenso. Use o comando switch-case.  
*/

int main()
{
    int n;

    printf("Digite um numero de 0 a 10: ");
    scanf("%d", &n);
    
    switch(n)
    {
        case 0: printf("Zero"); break;
        case 1: printf("Um"); break;
        case 2: printf("Dois"); break;
        case 3: printf("Tres"); break;
        case 4: printf("Quatro"); break;
        case 5: printf("Cinco"); break;
        case 6: printf("Seis"); break;
        case 7: printf("Sete"); break;
        case 8: printf("Oito"); break;
        case 9: printf("Nove"); break;
        case 10: printf("Dez"); break;
        default: printf("Numero fora dos possiveis");
    }return 0;
}