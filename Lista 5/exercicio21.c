#include <stdio.h>
#include <string.h>

/*
    Entrar com duas frases, A e B, e verificar se são iguais. Caso sejam diferentes,
    concatená-las em C. Caso contrário, copiar A em C. Ao final, mostre quantas vogais
    existem em C.
*/

int main() {
    char A[100], B[100], C[200];
    int i, numVogais = 0;

    scanf("%[^\n]s", A);
    getchar();
    scanf("%[^\n]s", B);

    strcpy(C, A);
    if(strcmp(A,B) != 0) strcat(C, B);

    for (i = 0; C[i] != '\0'; i++) {
        if (
            C[i] == 'a' || C[i] == 'e' || C[i] == 'i' || C[i] == 'o' || C[i] == 'u' ||
            C[i] == 'A' || C[i] == 'E' || C[i] == 'I' || C[i] == 'O' || C[i] == 'U'
            ) numVogais++;
    }

    printf("%d", numVogais);

    return 0;
}