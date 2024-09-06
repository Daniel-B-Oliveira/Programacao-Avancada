#include <stdio.h>
#include <math.h>

/*
    De acordo com os códigos abaixo, verifique o que está ERRADO para calcular
    os somatórios S:
        b) S = 1 + 4 + 27 + ... + NN

            #include <stdio.h>
            #include <math.h>
            int main ()
            {
                int N, i, S = 0;
                printf("Entre com o valor de N:\n");
                scanf("%d",&N);
                for(i=1;i<=N;i++)
                {
                S = pow(N,N);
                }
                printf(“S = %d”, S);
                return 0;
            }
*/

int main ()
    {
    int N, i, S = 0;

    printf("Entre com o valor de N:\n");
    scanf("%d",&N);

    for(i=1;i<=N;i++) S += pow(i,2);
    printf("S = %d", S);
    
    return 0;
}