#include <stdio.h>

/*
    Considere uma matriz 4x4, onde cada posição deve armazenar a coordenada de um
    ponto no plano cartesiano. Faça um programa para verificar se todos os pontos estão
    no quadrante positivo do plano cartesiano.
*/

typedef struct{
    int x, y, z;
}Coordenada;

int main(){
    Coordenada M[4][4];
    int i, j;
    char primeiroQuadrante = 'S';

    for(i=0; i<4; i++)
        for(j=0; j<4; j++){
            scanf("%d", &M[i][j].x);
            scanf("%d", &M[i][j].y);
            scanf("%d", &M[i][j].z);
        }

    i = 0;
    while(primeiroQuadrante == 'S' && i < 4){
        j = 0;
        while(primeiroQuadrante == 'S' && j < 4){
            if(M[i][j].x < 0 || M[i][j].y < 0 || M[i][j].z < 0)
                primeiroQuadrante = 'N';
            j++;
        }
        i++;
    }

    if(primeiroQuadrante == 'S')
        printf("Todos os pontos estao no quadrante positivo.");
    else
        printf("Nao eh verdade que todos os pontos estao no quadrante positivo.");
    
    return 0;
}