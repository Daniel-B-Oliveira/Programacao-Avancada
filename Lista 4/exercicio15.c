#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que o usuário possa realizar diversas operações
    matemáticas ou sair do mesmo, de acordo com a opção que ele entrar:
        a. Adição;
        b. Subtração;
        c. Multiplicação;
        d. Divisão.
        e. Encerrar o programa.
*/

int main()
{
    char ope;       //Operação
    float x, y = 1;

    do{
        printf("\na. Adicao;\nb. Subtracao;\nc. Multiplicacao;\nd. Divisao.\ne. Encerrar o programa.\n-> ");
        fflush(stdin);
        scanf("%c", &ope);
        
        if(ope == 'a' || ope == 'b' || ope == 'c' || ope == 'd')
            if(y == 1)
            {
            printf("Digite x e y: ");
            scanf("%f %f", &x, &y);
            }else{
              printf("Digite y: ");
                scanf("%f", &y);  
            }

        system("clear || cls");

        switch(ope)
        {
            case 'a': printf("%.3f + %.3f = %.3f", x, y, x+y); x+=y; break;
            case 'b': printf("%.3f - %.3f = %.3f", x, y, x-y); x-=y; break;
            case 'c': printf("%.3f x %.3f = %.3f", x, y, x*y); x*=y; break;
            case 'd': if(y != 0) {printf("%.3f / %.3f = %.3f", x, y, x/y); x/=y;}break;
            default: x = x;
        }
        y = 0;
    }while(ope != 'e');
}