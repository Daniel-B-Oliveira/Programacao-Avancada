#include <stdio.h>

//Elabore um programa para ler 3 valores inteiros e escrever a soma dos 2 maiores.   

int main(){
    int a, b, c;
    int pm, sm;

    printf("Digite 3 valores: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c){
        pm = a;
        if(b >= c) sm = b;
        else sm = c;
    }else if(b >= a && b >= c){
        pm = b;
        if(a >= c) sm = a;
        else sm = c;
    }else{
        pm = c;
        if(a >= b) sm = a;
        else sm = b;
    }

    printf("%d + %d = %d", pm, sm, pm+sm);
    return 0;
}