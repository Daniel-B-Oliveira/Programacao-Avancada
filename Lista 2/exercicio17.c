#include <stdio.h>
#include <math.h>

/*
    Ler três números inteiros positivos e efetue o cálculo de uma das seguintes médias, 
    de acordo com um valor numérico digitado pelo usuário (use switch-case). 
        Geometrica:     (x*y*z)^1/3
        Ponderada:      (x + 2y + 3z) / 3
        Harmonica:      3 / (1/x + 1/y + 1/z) => x * y * z != 0
        Aritimetica:    (x + y + z) / 3
*/

int main()
{
    float x, y, z, media;
    char tmedia; // Tipo da media
    printf("Digie 3 valores reais: ");
    scanf("%f %f %f", &x, &y, &z);
    fflush(stdin);

    printf("Medias: Geometrica(g), Ponderada(p), Harmonica(h), Aritimetica(a): ");
    scanf("%c", &tmedia);

    switch(tmedia)
    {
        case 'g': media = pow(x*y*z, (float) 1/3); break;
        case 'p': media = (x + 2*y + 3*z) / 3; break;
        case 'h':
                    {
                        if (x*y*z == 0)
                        {
                            printf("Valor Invalido");
                            return 0;
                        }else media = 3 / (1/x + 1/y + 1/z);
                    }break;
        case 'a': media = (x + y + z)/3; break;
        default:
        {
            printf("Tipo de media inexistente");
            return 0;
        }
    }

    printf("Media(%c): %.3f", tmedia, media);
    return 0;
}