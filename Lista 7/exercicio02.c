#include <stdio.h>
#include <string.h>

/*
    Escreva um programa que cadastre as informações de pacientes, enquanto o
    usuário desejar. As informações do paciente são:
    - Nome, cpf, idade, endereço.
    Considere 30 pacientes, no máximo. Ao final, mostre a quantidade de pacientes
    cadastrados e a lista de paciente com menos de 18 anos.
*/

typedef struct{
    char nome[50], cpf[11], endereco[100];
    int idade;
}Paciente;

int main(){
    Paciente pacientes[30], pacientes18[30];
    char desejaContinuar;
    int qtdPacientes=0, i=0, j=0;

    do{
        printf("Nome: ");
        gets(pacientes[i].nome); fflush(stdin);
        printf("CPF: ");
        gets(pacientes[i].cpf); fflush(stdin);

        printf("Idade: ");
        scanf("%d", &pacientes[i].idade); fflush(stdin);

        printf("Endereco: ");
        gets(pacientes[i].endereco); fflush(stdin);

        if(pacientes[i].idade < 18){
            strcpy(pacientes18[j].nome, pacientes[i].nome);
            strcpy(pacientes18[j].cpf, pacientes[i].cpf);
            strcpy(pacientes18[j].endereco, pacientes[i].endereco);
            pacientes18[j].idade = pacientes[i].idade;
            j++;
        } i++;

        printf("Deseja continuar? (s/n)\t");
        scanf("%c", &desejaContinuar);
    }while(desejaContinuar != 'n' && i < 30);

    qtdPacientes = i;

    printf("Pacientes cadastrados: %d.\n", qtdPacientes);

    printf("Pacientes com menos de 18 anos:\n");
    for(i=0; i<j; i++)
        printf("%s\n", pacientes18[i].nome);
    


    return 0;
}