#include <stdio.h>

/*
    Faça um programa com a criação dos novos tipos de dados conforme solicitado
    abaixo:
        • Horário: composto de hora, minutos e segundos.
        • Data: composto de dia, mês e ano.
        • Compromisso: composto de uma data, horário e texto que descreve o compromisso
    A seguir, agende uma lista de 10 compromissos com suas respectivas informações.
*/

typedef struct{
    int h, min, sec;
}Horario;

typedef struct{
    int d, m, a;
}Data;

typedef struct{
    Horario horario;
    Data data;
    char texto[200];
}Compromisso;

int main(){
    Compromisso compromissos[10];
    int i;

    for(i=0; i<10; i++){
        scanf("%d", &compromissos[i].data.d);
        scanf("%d", &compromissos[i].data.m);
        scanf("%d", &compromissos[i].data.a);

        scanf("%d", &compromissos[i].horario.h);
        scanf("%d", &compromissos[i].horario.min);
        scanf("%d", &compromissos[i].horario.sec);

        fflush(stdin);
        gets(compromissos[i].texto);
    }

    return 0;
}