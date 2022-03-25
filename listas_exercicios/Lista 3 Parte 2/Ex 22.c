/*----------22) Solicite um nome completo (mínimo 13 caracteres) e apresente apenas o seu sobrenome--------*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char nome[40];

    printf("Digite seu nome completo(miimo 13 caracteres): ");
    gets(nome);

    while(strlen(nome)<13)
    {
        system("cls");

        printf("O minimo é 13 caracteres\n\nPor favor tente novamente: ");
        gets(nome);
    }

//----------SEPARA SOBRENOME---------

    printf("NOME: ");

    for(int i=0; i<strlen(nome); i++)   //imprime nome
    {
        printf("%c", nome[i]);

        if(nome[i]==32)     //acha o espaço do sobrenome
        {
            printf("\nSOBRENOME: ");

            for(int j=i+1; j<strlen(nome); j++)     //imprime sobrenome (se não houvesse o laço ele repetiria o processo no caso de 2 sobrenomes)
            {
                printf("%c", nome[j]);
            }
            break;  //sai do primeiro laço assim que escreve o sobrenome
        }
    }

    printf("\n\n");

    system("pause");

    return 0;
}
