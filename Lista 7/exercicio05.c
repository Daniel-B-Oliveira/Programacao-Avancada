#include <stdio.h>
#include <string.h>

/*
    Faça um programa que leia um vetor com dados de 5 livros: título (máximo 30
    letras), autor (máximo 15 letras) e ano. Procure um livro pelo nome do autor, e
    mostre os dados de todos os livros encontrados. Para tal, use a função strcmp da
    biblioteca string.h (veja explicação no fim da lista).
*/

typedef struct{
    char titulo[30], autor[15];
    int ano;
}Livro;

int main(){
    Livro livros[5];
    char pesquisaAutor[15];
    int i, hasAutor;

    for(i=0; i<5; i++){
        gets(livros[i].titulo); fflush(stdin);
        gets(livros[i].autor);
        scanf("%d", &livros[i].ano); fflush(stdin);
    }

    gets(pesquisaAutor);

    for(i=0; i<5; i++)
    {
        hasAutor = strcmp(pesquisaAutor, livros[i].autor);
        if(hasAutor == 0)
            printf("%s\n", livros[i].titulo);
    }

    return 0;

}