#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Estrutura de um nó da lista encadeada, representando cada elemento da lista.
typedef struct reg {
    int         conteudo;   // Armazena o valor do elemento.
    struct reg *prox;      // Ponteiro para o próximo nó da lista.
} celula;

// Estrutura para representar a cabeça da lista encadeada,
// que contém um ponteiro para o primeiro elemento da lista.
typedef struct {
    celula *inicio;        // Ponteiro para o primeiro nó da lista.
} ListaEncadeada;

// Função que cria e inicializa uma lista encadeada com uma cabeça.
// Retorna um ponteiro para a lista recém-criada.
ListaEncadeada* cria_lista () {
    ListaEncadeada *lista = (ListaEncadeada*)malloc(sizeof(ListaEncadeada));
    lista->inicio = NULL;
    return lista;
}

// Função que busca um valor em uma lista encadeada.
// Recebe o ponteiro para a lista e o valor a ser buscado.
// Retorna o ponteiro para o nó contendo o valor, ou NULL se não for encontrado.
celula* busca (int valor, ListaEncadeada *lista) {
    celula *p = lista->inicio;
    while (p != NULL && p->conteudo != valor) {
        p = p->prox;
    }
    return p; // Retorna o nó ou NULL se não encontrar
}

// Procedimento que insere um novo nó no início da lista encadeada.
// Recebe o ponteiro para a lista e o valor a ser inserido.
void insere (int valor, ListaEncadeada *lista) {
    celula *nova = (celula*)malloc(sizeof(celula));
    nova->conteudo = valor;
    nova->prox = lista->inicio;
    lista->inicio = nova;
}

// Procedimento que remove o próximo endereço do endereço especificado.
// Recebe o ponteiro para a célula anterior da que será removida.
void remove_cel (celula *p) {
    celula *lixo;
    lixo = p->prox;
    p->prox = lixo->prox;
    free (lixo);
}

// Procedimento que busca um valor na lista e o remove se for encontrado.
// Recebe o ponteiro para a lista e o valor a ser removido.
void busca_e_remove (int valor, ListaEncadeada *lista) {
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
        free (p);
    }
}

// Função que busca um valor y em uma lista
// e insere x logo após a célula que contenha y.
// Caso não ache y, insere x ao final da lista.
void busca_e_insere(int x, int y, ListaEncadeada *lista) {
    celula *p, *q, *nova;
    nova = malloc(sizeof(celula));
    nova->conteudo = x;

    p = lista->inicio;  // Começa no início da lista
    q = p->prox;        //define o ponteiro para o próximo

    while (q != NULL && q->conteudo != y) {
        p = q;
        q = q->prox;
    }

    nova->prox = q;
    p->prox = nova;
}

// Função que conta o número de células (nós) na lista encadeada (versão iterativa).
// Recebe o ponteiro para a lista e retorna o número total de células.
int contar_celulas_it (ListaEncadeada *lista) {
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
int contar_celulas_rec (celula *p) {
    if (p == NULL) return 0;
    return 1 + contar_celulas_rec (p->prox);
}

// Função que verifica se duas listas encadeadas são iguais (versão iterativa).
// Recebe ponteiros para as duas listas e retorna 1 se forem iguais, ou 0 se não forem.
int listas_iguais_it (ListaEncadeada *lista1, ListaEncadeada *lista2) {
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
int listas_iguais_rec (celula *p1, celula *p2) {
    if (p1 == NULL && p2 == NULL) return 1;  // Ambas listas terminaram
    if (p1 == NULL || p2 == NULL) return 0;  // Uma terminou antes da outra
    if (p1->conteudo != p2->conteudo) return 0;
    return listas_iguais_rec (p1->prox, p2->prox);
}

// Procedimento para imprimir uma lista
// Recebe um pontiro para uma lista
void imprime_lista (ListaEncadeada *lista) {
    celula *p = lista->inicio;
    while (p != NULL) {
        printf("%d -> ", p->conteudo);
        p = p->prox;
    }
    printf("NULL\n");
}

// Procedimento para limpar uma lista
// Recebe um ponteiro para uma lista
void limpa_lista(ListaEncadeada *lista) {
    celula *p = lista->inicio;
    while (p != NULL) {
        celula *temp = p;
        p = p->prox;
        free(temp);
    }
    lista->inicio = NULL;  // Define o ponteiro de início como NULL após liberar todos os nós
}

// Função principal para testes de manipulação de listas encadeadas.
int main () {
    ListaEncadeada *lista = cria_lista();

    setlocale (LC_ALL, "pt_BR.UTF-8");

    // Exemplo função insere

    printf("Teste %d", lista->inicio);

    printf ("\n============================================================\n");
    printf ("Exemplo função insere.\n");
    printf ("============================================================\n\n");

    insere (10, lista);
    insere (20, lista);
    insere (30, lista);
    
    imprime_lista (lista);

    limpa_lista (lista);
    
    // Exemplo função remove
    
    printf ("\n============================================================\n");
    printf ("Exemplo função remove.\n");
    printf ("============================================================\n\n");

    insere (10, lista);
    insere (20, lista);
    insere (30, lista);

    printf ("Lista antes de remover o primeiro valor:\n");
    imprime_lista (lista);

    remove_cel (lista->inicio);

    printf ("Lista depois de remover o primeiro valor:\n");
    imprime_lista (lista);
    
    limpa_lista (lista);

    //Exemplo da combinação dos procedimentos de busca e remoção

    printf ("\n============================================================\n");
    printf ("Exemplo da combinação dos procedimentos de busca e remoçã.\n");
    printf ("============================================================\n\n");

    insere (10, lista);
    insere (20, lista);
    insere (30, lista);
    
    printf ("Lista antes de remover:\n");
    imprime_lista (lista);

    //celula *removerProx = busca(20, lista);

    remove_cel (busca (20, lista));

    printf ("Lista após remover:\n");
    imprime_lista (lista);
    
    limpa_lista (lista);
    

    // Exemplo de um codigo funcional com a combinação
    // dos procedimentos busca e remove

    printf ("\n============================================================\n");
    printf ("Exemplo de um codigo funcional com a combinação dos\nprocedimentos busca e remove.\n");
    printf ("============================================================\n\n");

    char op = 'N';
    int numero;

    while (op == 'N' || op == 'R') {
        printf ("Digite um inteiro para ser adicionada à lista: ");
        scanf ("%d", &numero);

        insere (numero, lista);

        if(op == 'R')
            remove_cel (lista->inicio);
        
        printf ("\nEscolha uma das seguite opções:\n");
        printf ("N) Adcionar novo valor.\n");
        printf ("R) Reescrever último valor adcionado.\n");
        printf ("Digite qualquer outra tecla para não inserir mais valores.\n");

        scanf (" %c", &op);
    }

    imprime_lista(lista);

    limpa_lista(lista);


    // Exemplo do procedimento busca_e_remove

    printf ("\n============================================================\n");
    printf ("Exemplo do procedimento busca_e_remove.\n");
    printf ("============================================================\n\n");

    insere (10, lista);
    insere (20, lista);
    insere (30, lista);

    printf ("Lista antes de remover o valor 30:\n");
    imprime_lista (lista);

    busca_e_remove (30, lista);

    printf("Lista após remover o valor 30:\n");
    imprime_lista (lista);

    limpa_lista (lista);

    // Exemplo do procedimento busa_e_insere 

    printf ("\n============================================================\n");
    printf ("Exemplo do procedimento busa_e_insere.\n");
    printf ("============================================================\n\n");

    insere (10, lista);
    insere (20, lista);
    insere (40, lista);

    printf ("Lista antes de inserir o valor 30 após 20:\n");
    imprime_lista (lista);

    busca_e_insere (30, 20, lista);

    printf ("Lista após inserir o valor 30 após 20:\n");
    imprime_lista (lista);

    limpa_lista (lista);

    return 0;
}
