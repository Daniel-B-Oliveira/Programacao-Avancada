#include <stdio.h>

/*
    Considere dois vetores V1 e V2 de reais de tamanho 5. Calcule o produto escalar entre
    V1 e V2. 
*/

int main()
{
    int i;
    float V1[5], V2[5], prod_esca = 0;

    for(i=0; i<5; i++) scanf("%f", &V1[i]);

    for(i=0; i<5; i++)
    {
        scanf("%f", &V2[i]);
        prod_esca += V1[i] * V2[i];
    } printf("%.3f", prod_esca);
    
    return 0;
}