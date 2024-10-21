#include <stdio.h>
#include <string.h>

/*
    Dado um tabuleiro 8x8, armazene em cada posição do tabuleiro a peça de xadrez
    que está armazenada na posição ii, onde i é a linha e j é a coluna. Ao final, mostre se
    há rainha na diagonal principal ou secundária do tabuleiro. Para tal, use a função
    strcmp da biblioteca string.h.
*/

/*
    Nome das peças:
        R rei
        D dama
        T torre
        B bispo
        C cavalo
        (P) peão
        \n vazio
*/

typedef struct{
    int posicao[2];
    char nome;
}Peca;

int main(){
    Peca tabuleiro[8][8];
    int i, j;
    char hasD = 'N', nomeTemp[2];

    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            tabuleiro[i][j].posicao[0] = i;
            tabuleiro[i][j].posicao[1] = j;
            scanf(" %c", &tabuleiro[i][j].nome);
        }
    }

    i=0;
    while(hasD == 'N' && i<8){
        j = 0;
        while(hasD == 'N' && j<8){
            nomeTemp[0] = tabuleiro[i][j].nome;
            nomeTemp[1] = '\0';

            if(i == j || i + j == 8-1)
                if(strcmp(nomeTemp, "D") == 0)
                    hasD = 'S';
            j++;
        }
        i++;
    }

    if(hasD == 'S')
        printf("Ha rainha em uma das diagonais.");
    else
        printf("Nao ha rainha nas diagonais.");

    return 0;
}