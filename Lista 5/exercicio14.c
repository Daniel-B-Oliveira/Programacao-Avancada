#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Dados 10 lançamentos de uma roleta (números entre 0 e 10), faça um programa para
    calcular a frequência de cada número.
    O código a seguir gera 5 números aleatórios, usando a função rand().
        //Código para gerar 5 números aleatórios de 0 a 50.
            #include <stdio.h>
            #include <stdlib.h>
            #include <time.h>
            int main () {
                int i, n;
                time_t t;//variável importante para srand()
                n = 5;
                //Instrução necessária para o rand().
                srand((unsigned) time(&t));
                //Imprimindo 5 números aleatórios de 0 a 50
                for( i = 0 ; i < n ; i++ ) {
                    printf("%d\n", rand() % 51);
                }
                return 0;
            }
*/

int main()
{
    int roleta[11], i, j, num;
    time_t t;
    srand((unsigned) time(&t));

    for(j=0; j<11; j++) roleta[j] = 0;
    
    printf("Sorteio: ");
    for(i=0; i<10; i++)
    {
        num = rand() % 11;
        printf("%d ", num);
        for(j=0; j<11; j++)
            if(num == j) roleta[j]++;
    }

    printf("\n");
    for(j=0; j<11; j++) printf("%d: %d vezes\n", j, roleta[j]);

    return 0;
}