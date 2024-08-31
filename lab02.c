#include <stdio.h>

int main()
{
/*
    int i;
    float alturas[10], soma = 0;

    for(i=0; i < 10; i++)
    {
        do{
            printf("Altura %d: ", i+1);
            scanf("%f", &alturas[i]);
            fflush(stdin);
        }while(alturas[i] <= 0);
        soma += alturas[i];
    }

    printf("Media das alturas: %.2f", soma / 10);
*/
/*
    int i, i_mpeso;
    float pesos[15], mpeso = 0; //mpeso: maior peso

    for(i=0; i < 15; i++)
    {
        do{
            printf("Peso %d: ", i+1);
            scanf("%f", &pesos[i]);
            fflush(stdin);
        }while(pesos[i] <= 0);

        if(pesos[i] > mpeso)
        {
            mpeso = pesos[i];
            i_mpeso = i;
        }
    }

    printf("Maior peso: %.2f\nIndice: %d", mpeso, i_mpeso);
*/

//    float a[10], b[10];
//    int i;
//
//    for(i=0; i < 10; i++)
//    {
//        scanf("%f", &a[i]);
//        fflush(stdin);
//    }
//
//    for(i=9; i >= 0; i--)
//    {
//        b[9-i] = a[i];
//        printf("%.2f ", b[9-i]);
//    }


//    int numeros[10], i;
//
//    for(i=0; i < 10; i++)
//    {
//        scanf("%d", &numeros[i]);
//        fflush(stdin);
//        if(numeros[i]%2 != 0) numeros[i] += 1;
//    }
//
//    for(i=0; i < 10; i++) printf("%d ", numeros[i]);

    float vetor[12];
    int i, nulo = 1;

    for(i=0; i < 12; i++)
    {
        scanf("%f", &vetor[i]);
        fflush(stdin);

        if(vetor[i] != 0) nulo = 0;
    }

    if(nulo == 1) printf("Vetor nulo");
    else printf("Vetor nao nulo");


    return 0;
}
