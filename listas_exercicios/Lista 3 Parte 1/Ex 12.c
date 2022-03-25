//--------12) Solicitar uma palavra (3 a 20 caracteres) e apresentar cada um dos caracteres adicionando o valor 10 ao código ASCII---------
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char pal[20];

    printf("digite uma palavra entre 3 e 20 letras: ");
    gets(pal);

    while(strlen(pal)<3 || strlen(pal)>20)
    {
        system("cls");

        printf("A palavra deve ter entre 3 e 20 letras\n\nPor favor tente novamente: ");
        gets(pal);
    }

    for(int i=0; i<strlen(pal); i++)
    {
        printf("%c ", pal[i]+10);
    }

    printf("\n\n");

    system("pause");

    return 0;
}
