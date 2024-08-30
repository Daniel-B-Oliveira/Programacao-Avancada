#include <stdio.h>
#include <string.h>

//Faça um programa para ler o nome de 2 times e o número de gols marcados na partida (para cada time). Escrever o nome do vencedor. Caso não haja vencedor deverá ser impressa a palavra EMPATE. 

int main()
{
    int golt1, golt2;
    scanf("%d %d", &golt1, &golt2);

    if(golt1 < 0 || golt2 < 0)
    {
        printf("Valores invalidos");
        return 0;
    }else if(golt1 > golt2)
    {
        printf("Time 1 ganhou");
    }else if(golt1 < golt2)
    {
        printf("Time 2 ganhou");
    }else{
        printf("EMPATE");
    } return 0;
}