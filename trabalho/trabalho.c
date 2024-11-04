#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Estrutura de um nó da lista encadeada, representando cada elemento da lista.
typedef struct reg {
    int conteudo;          // Armazena o valor do elemento.
    struct reg *prox;      // Ponteiro para o próximo nó da lista.
} celula;

// Estrutura para representar a cabeça da lista encadeada,
// que contém um ponteiro para o primeiro elemento da lista.
typedef struct {
    celula *inicio;        // Ponteiro para o primeiro nó da lista.
} ListaEncadeada;

// Função que cria e inicializa uma lista encadeada com uma cabeça.
// Retorna um ponteiro para a lista recém-criada.
ListaEncadeada* cria_lista() {
    ListaEncadeada *lista = (ListaEncadeada*)malloc(sizeof(ListaEncadeada));
    lista->inicio = NULL;
    return lista;
}

// Função que busca um valor em uma lista encadeada.
// Recebe o ponteiro para a lista e o valor a ser buscado.
// Retorna o ponteiro para o nó contendo o valor, ou NULL se não for encontrado.
celula* busca(ListaEncadeada *lista, int valor) {
    celula *p = lista->inicio;
    while (p != NULL && p->conteudo != valor) {
        p = p->prox;
    }
    return p; // Retorna o nó ou NULL se não encontrar
}

// Função que insere um novo nó no início da lista encadeada.
// Recebe o ponteiro para a lista e o valor a ser inserido.
void insere(ListaEncadeada *lista, int valor) {
    celula *novo = (celula*)malloc(sizeof(celula));
    novo->conteudo = valor;
    novo->prox = lista->inicio;
    lista->inicio = novo;
}

// Função que remove o primeiro nó que contém um valor especificado.
// Recebe o ponteiro para a lista e o valor a ser removido.
void remove_valor(ListaEncadeada *lista, int valor) {
    celula *p = lista->inicio;
    celula *anterior = NULL;

    while (p != NULL && p->conteudo != valor) {
        anterior = p;
        p = p->prox;
    }
    
    if (p != NULL) { // Nó encontrado
        if (anterior == NULL) { // Primeiro nó é o nó a ser removido
            lista->inicio = p->prox;
        } else {
            anterior->prox = p->prox;
        }
        free(p);
    }
}

// Função que busca um valor na lista e o remove se for encontrado.
// Retorna 1 se o valor foi removido com sucesso, ou 0 se o valor não foi encontrado.
int busca_e_remove(ListaEncadeada *lista, int valor) {
    celula *p = lista->inicio;
    celula *anterior = NULL;

    while (p != NULL && p->conteudo != valor) {
        anterior = p;
        p = p->prox;
    }

    if (p != NULL) { // Nó encontrado
        if (anterior == NULL) { // Primeiro nó é o nó a ser removido
            lista->inicio = p->prox;
        } else {
            anterior->prox = p->prox;
        }
        free(p);
        return 1; // Sucesso na remoção
    }
    return 0; // Valor não encontrado
}

// Função que busca um valor e, caso ele não esteja na lista, o insere no início.
// Retorna 1 se o valor foi inserido, ou 0 se já existia na lista.
int busca_e_insere(ListaEncadeada *lista, int valor) {
    if (busca(lista, valor) == NULL) { // Valor não encontrado
        insere(lista, valor);
        return 1; // Valor inserido
    }
    return 0; // Valor já existe
}

// Função que conta o número de células (nós) na lista encadeada (versão iterativa).
// Recebe o ponteiro para a lista e retorna o número total de células.
int contar_celulas_it(ListaEncadeada *lista) {
    int contador = 0;
    celula *p = lista->inicio;
    while (p != NULL) {
        contador++;
        p = p->prox;
    }
    return contador;
}

// Função que conta o número de células (nós) na lista encadeada (versão recursiva).
// Recebe o ponteiro para o primeiro nó e retorna o número total de células.
int contar_celulas_rec(celula *p) {
    if (p == NULL) return 0;
    return 1 + contar_celulas_rec(p->prox);
}

// Função que verifica se duas listas encadeadas são iguais (versão iterativa).
// Recebe ponteiros para as duas listas e retorna 1 se forem iguais, ou 0 se não forem.
int listas_iguais_it(ListaEncadeada *lista1, ListaEncadeada *lista2) {
    celula *p1 = lista1->inicio;
    celula *p2 = lista2->inicio;
    while (p1 != NULL && p2 != NULL) {
        if (p1->conteudo != p2->conteudo) return 0;
        p1 = p1->prox;
        p2 = p2->prox;
    }
    return p1 == NULL && p2 == NULL;
}

// Função que verifica se duas listas encadeadas são iguais (versão recursiva).
// Recebe ponteiros para os primeiros nós das duas listas.
// Retorna 1 se forem iguais, ou 0 se não forem.
int listas_iguais_rec(celula *p1, celula *p2) {
    if (p1 == NULL && p2 == NULL) return 1;  // Ambas listas terminaram
    if (p1 == NULL || p2 == NULL) return 0;  // Uma terminou antes da outra
    if (p1->conteudo != p2->conteudo) return 0;
    return listas_iguais_rec(p1->prox, p2->prox);
}

// Função principal para testes de manipulação de listas encadeadas.
int main() {
    // Criando duas listas
    ListaEncadeada *lista1 = cria_lista();
    ListaEncadeada *lista2 = cria_lista();

    // Inserindo valores nas listas
    insere(lista1, 1);
    insere(lista1, 2);
    insere(lista1, 3);

    insere(lista2, 1);
    insere(lista2, 2);
    insere(lista2, 3);

    setlocale(LC_ALL, ""); // Configura para a localização padrão do sistema (UTF-8 na maioria dos sistemas)

    // Exemplo de contagem de células
    printf("Número de células na lista1 (Iterativo): %d\n", contar_celulas_it(lista1));
    printf("Número de células na lista2 (Recursivo): %d\n", contar_celulas_rec(lista2->inicio));

    // Verificação de igualdade entre listas
    printf("Listas iguais (Iterativo): %d\n", listas_iguais_it(lista1, lista2));
    printf("Listas iguais (Recursivo): %d\n", listas_iguais_rec(lista1->inicio, lista2->inicio));

    return 0;
}
