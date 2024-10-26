#include <stdio.h>

struct reg {
    int         conteudo;
    struct reg *prox;
};

typedef struct reg celula;

//typedef struct reg {
//    int         conteudo;
//    struct reg *prox;
//} celula;

//typedef struct reg celula;
//struct reg {
//    int     conteudo;
//    celula *prox;
//};

//typedef struct celula celula;
//struct celula {
//    int     conteudo;
//    celula *prox;
//};

void imprime (celula *le) {
    if (le != NULL) {
        printf ("%d\n", le->conteudo);
        imprime (le->prox);
    }
}

//// Versão iterativa
//void imprime_itera (celula *le) {
//    celula *p;
//    for (p = le; p != NULL; p = p->prox)
//        printf ("%d\n", p->conteudo);
//}

int tamanho_itera (celula *le) {
    celula *p;
    int n = 0;

    for(p = le; p != NULL; p = p->prox) n++;

    return n;
}

int tamanho (celula *le) {
    int t = 1;
    if (le != NULL) {
        return t + tamanho(le->prox);
    }
    else {
        return 0;
    }

}

int main(){
    celula c, c2, c3;

    c.conteudo = 1;
    c.prox = &c2.conteudo;

    c2.conteudo = 2;
    c2.prox = &c3.conteudo;

    c3.conteudo = 3;
    c3.prox = NULL;

    printf ("Tamanho da celula: %d\n", tamanho (&c));

//    imprime (&c);
//    imprime_itera (&c);

    return 0;

}
