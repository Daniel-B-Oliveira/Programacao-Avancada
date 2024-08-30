#include <stdio.h>

// Faça um programa para calcular a raiz de uma equação de 1o grau, onde se tem ax + b = 0.
// ax = -b => x = -b / a

int main(){
    float a, b, raiz;
    printf("Escreva 'a' e 'b' para a funcao f, f(x) = ax + b:\n");
    scanf("%f %f", &a, &b);

    if(a == 0)
    {
        if(b == 0) printf("A funcao f e constante em 0");
        else printf("Nao existe raiz para a funcao f");
        return 0;
    }

    raiz = -b / a;

    printf("Raiz de f: x = %.2f", raiz);

    return 0;
}
