#include <stdio.h>
/*
    Faça um programa que leia dois operandos (valores reais) e um operador 
    (caracter). Em seguida, calcule e mostre o resultado da operação correspondente. Por 
    exemplo, se o usuário entrar com 2 e 3 como operandos e + como operador, o 
    resultado será 5. Os possíveis operadores são: +, -, * e /, que correspondem 
    respectivamente às operações de adição, subtração, multiplicação e divisão. Caso a 
    operação seja divisão, é preciso validá-la, ou seja, verificar se a divisão é possível. Use 
    switch-case. 
*/

int main()
{
    float a, b;
    char opera;

    printf("Digite 'a' e 'b': ");
    scanf("%f %f", &a, &b);
    fflush(stdin);

    printf("Digite o operador: ");
    scanf("%c", &opera);

    switch(opera)
    {
        case '+': printf("%.2f %c %.2f = %.2f", a, opera, b, a + b); break;
        case '-': printf("%.2f %c %.2f = %.2f", a, opera, b, a - b); break;
        case '*': printf("%.2f %c %.2f = %.2f", a, opera, b, a * b); break;
        case '/':
            {  
            if(b == 0) printf("Operacao Invalida");
            else printf("%.2f %c %.2f = %.2f", a, opera, b, a / b);
            } break;
        default: printf("Operacao Inexistente");
    } return 0;
}