#include<stdio.h>

typedef struct reg{
    int conteudo;
    struct reg *prox;
}celula;

// Função que verifica se duas listas encadeadas são iguais;

// Versão Recursiva
celula *ver_r (celula *le1, celula *le2)
{
    if (le1->conteudo != le2->conteudo) return 0;
    if (le1->conteudo == le2->conteudo && le1->prox == le2->prox == NULL) return 1;
    return ver_r (le1->prox, le2->prox);
}

// Versão Iterativa
int ver_i (celula *le1, celula *le2)
{
   celula *p1, *p2;
   p1 = le1;
   p2 = le2;
    while(p1!=NULL && p2!= NULL && p1->conteudo == p2->conteudo){
        p1 = p1->prox;  
        p2 = p2->prox;
    }
    if(p1->conteudo == p2->conteudo && p1==NULL && p2 == NULL) return 1;
    return 0;
}

int main() {
    
    return 0;
}