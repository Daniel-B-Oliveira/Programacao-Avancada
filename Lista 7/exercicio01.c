#include <stdio.h>

/*
    Construa uma estrutura denominada aluno com nome, número de matrícula e
    curso. Leia do usuário a informação de 6 alunos, armazene em um vetor dessa
    estrutura e imprima os dados na tela.
*/

typedef struct{
    char nome[50], matricula[50], curso[50]; 
}Aluno;

int main()
{
    Aluno alunos[5];
    int i;

    for(i=0; i<5; i++){
        printf("Nome: ");
        gets(alunos[i].nome); fflush(stdin);
        printf("Curso: ");
        gets(alunos[i].curso); fflush(stdin);
        printf("Matriculo: ");
        gets(alunos[i].matricula); fflush(stdin);
    }

    for(i=0; i<5; i++){
        printf("\nAluno %d:\n", i+1);
        printf("%sNome: \n", alunos[i].nome);
        printf("%sCurso: \n", alunos[i].curso);
        printf("%sMatricula: \n", alunos[i].matricula);
    }

}