#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó da lista encadeada
struct Node {
    int data;              // Dado armazenado no nó
    struct Node* next;     // Ponteiro para o próximo nó
};

/**
 * @brief Insere um novo nó no início da lista encadeada.
 * 
 * Esta função cria um novo nó com o valor fornecido e o insere
 * no início da lista. O novo nó se torna o primeiro elemento da lista.
 * 
 * @param head Ponteiro duplo para o primeiro nó da lista (cabeça), para permitir
 *             que a lista seja atualizada.
 * @param newData Valor inteiro a ser armazenado no novo nó.
 */
void insertAtBeginning(struct Node** head, int newData) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}

/**
 * @brief Insere um novo nó no final da lista encadeada.
 * 
 * Esta função cria um novo nó com o valor fornecido e o insere no final
 * da lista. Se a lista estiver vazia, o novo nó se torna o primeiro elemento.
 * 
 * @param head Ponteiro duplo para o primeiro nó da lista (cabeça), para permitir
 *             que a lista seja atualizada.
 * @param newData Valor inteiro a ser armazenado no novo nó.
 */
void insertAtEnd(struct Node** head, int newData) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    struct Node* last = *head;
    newNode->data = newData;
    newNode->next = NULL;
    
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = newNode;
}

/**
 * @brief Remove um nó da lista encadeada com o valor especificado.
 * 
 * Esta função encontra o primeiro nó na lista que contém o valor especificado
 * e o remove, ajustando os ponteiros adequadamente. Se o valor não for encontrado,
 * a lista permanece inalterada.
 * 
 * @param head Ponteiro duplo para o primeiro nó da lista (cabeça), para permitir
 *             que o nó inicial seja removido, se necessário.
 * @param key Valor inteiro a ser removido da lista.
 */
void deleteNode(struct Node** head, int key) {
    struct Node *temp = *head, *prev;
    
    // Se o nó de cabeça contém o valor desejado
    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        free(temp);
        return;
    }

    // Procura o nó que contém o valor
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // Se o valor não foi encontrado
    if (temp == NULL) return;

    // Remove o nó ajustando o ponteiro do nó anterior
    prev->next = temp->next;
    free(temp);
}

/**
 * @brief Exibe todos os elementos da lista encadeada.
 * 
 * Esta função percorre a lista encadeada e imprime o valor de cada nó,
 * do primeiro até o último.
 * 
 * @param node Ponteiro para o primeiro nó da lista (cabeça).
 */
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}



// Função principal para testar as operações na lista encadeada
int main() {
    struct Node* head = NULL;  // Inicializa a lista vazia
    
    insertAtEnd(&head, 1);     // Insere 1 no final
    insertAtEnd(&head, 2);     // Insere 2 no final
    insertAtBeginning(&head, 0); // Insere 0 no início
    printList(head);           // Exibe a lista: 0 -> 1 -> 2 -> NULL
    
    deleteNode(&head, 1);      // Remove o nó com valor 1
    printList(head);           // Exibe a lista: 0 -> 2 -> NULL
    
    return 0;
}
