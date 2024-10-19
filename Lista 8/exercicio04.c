#include <stdio.h>

/*
    Faça uma função para calcular o seguinte somatório:
        S = 1 + 1/4 + 1/27 + 1/256 + ... + 1/NN
    Onde N > 0 e inteiro. Para isso, implemente duas funções:
    uma para calcular a potência (sem usar pow()) e outra
    para calcular S.
*/

float potencia(int a, int b){
    if(b==0) return 1;

    if(b > 0)
        return a*potencia(a, b-1);
        
    return (1.0/a)*potencia(a, b+1);
}

float serie(int n){
    if(n == 1) return 1;
    return potencia(n,-n) + serie(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("Serie: %3f", serie(n));
}
