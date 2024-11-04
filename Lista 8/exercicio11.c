#include <stdio.h>

void alteraCoord (float* x, float* y, float* z, int op) {
    switch(op) {
        case 1:
            *x += 1; 
            *y += 1; 
            *z += 1;
            break;
        case 2:
            *x -= 1; 
            *y -= 1; 
            *z -= 1; 
            break;
        case 3:
            *x *= 2;
            *y *= 2;
            *z *= 2;
            break;
        case 4:
            *x /= 2;
            *y /= 2;
            *z /= 2;
            break;
        default: printf("Opcao %d eh invalida.\n", op);
    }

}

int main() {
    float x, y, z;
    int opcao;

    printf("Digite as coordenadas iniciais do ponto (x, y, z): ");
    scanf("%f %f %f", &x, &y, &z);

    printf("\nOpcoes:\n");
    printf("1) somar 1 em todas as coordenadas do ponto.\n");
    printf("2) decrementar 1 em todas as coordenadas do ponto.\n");
    printf("3) duplicar todas as coordenadas do ponto.\n");
    printf("4) dividir pela metade todas as coordenadas do ponto.\n");

    printf("Opcao: ");
    scanf("%d", &opcao);

    alteraCoord(&x, &y, &z, opcao);

    printf("Novo ponto: (%.2f, %.2f, %.2f)\n", x, y, z);

    return 0;

}
