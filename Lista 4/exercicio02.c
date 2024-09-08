#include <stdio.h>

/*
    Leia uma sequência de números inteiros. Ao final, deverá ser escrito o número
    de dados lidos e a quantidade de números ímpares entre esses. O processo
    termina quando o número digitado for igual a zero (0). Use do-while.
*/

int main()
{
    int n, num=0, imp=0;

    do{
        scanf("%d", &n);
        num ++;
        if (n % 2 != 0) imp++;
    }while(n != 0);

    printf("Qtd numeros: %d\nQtd impares: %d\n", num, imp);
    return 0;
}