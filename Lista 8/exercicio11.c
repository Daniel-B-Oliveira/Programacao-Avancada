#include <stdio.h>

void soma_vetor(float v[3], float n)
{
    int i;
    for(i=0; i<3; i++) v[i]+=n;
}

void mult_vetor(float v[3], float n)
{
    int i;
    for(i=0; i<3; i++) v[i]*=(float)n;
}

void alterar_vetor(float v[3], int op)
{
    int i = 0;
    switch(op)
    {
        case 1: soma_vetor(v, 1); break;
        case 2: soma_vetor(v, -1); break;
        case 3: mult_vetor(v, 2); break;
        case 4: mult_vetor(v, 0.5); break;
    }
}

void ler_vetor(float v[3])
{
    int i;
    for(i=0; i<3; i++) scanf("%f", &v[i]);
}

void mostrar_vetor(float v[3])
{
    int i;
    printf("( ");
    for(i=0; i<3; i++)
        if(i < 3-1) printf("%.2f, ", v[i]);
        else printf("%.2f", v[i]);
    printf(" )");
}

int main()
{
    float v[3];
    int op;

    ler_vetor(v);
    mostrar_vetor(v);

    printf("\nOpcoes:\n");
    printf("1) somar 1 em todas as coordenadas do ponto.\n");
    printf("2) decrementar 1 em todas as coordenadas do ponto.\n");
    printf("3) duplicar todas as coordenadas do ponto.\n");
    printf("4) dividir pela metade todas as coordenadas do ponto.\n");

    fflush(stdin);
    scanf("%d", &op);

    alterar_vetor(v, op);
    mostrar_vetor(v);

    return 0;

}
