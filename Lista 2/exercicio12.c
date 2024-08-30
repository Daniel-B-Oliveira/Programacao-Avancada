#include <stdio.h>

//Escreva um programa para ler primeiramente um número inteiro, que é um código 
//de usuário. Caso este código seja diferente de um código armazenado internamente 
//no algoritmo (igual a 1234) deve ser apresentada a mensagem ‘Usuário inválido!’. Caso 
//o código seja correto, o usuário deve entrar com uma senha. Se esta senha estiver 
//incorreta (a certa é 9999) deve ser mostrada a mensagem ‘Senha incorreta’. Caso a 
//senha esteja correta, deve ser mostrada a mensagem ‘Acesso permitido’.

int main()
{
    int login, senha;

    printf("Login: ");
    scanf("%d", &login);
    if(login == 1234)
    {
        printf("Senha: ");
        scanf("%d", &senha);
        if(senha == 9999)
        {
            printf("Acesso permitido");
        }else
        {
            printf("Senha incorreta");
        }
    }else
    {
        printf("Usu%crio inv%clido!", 160, 160);
    } return 0;
}