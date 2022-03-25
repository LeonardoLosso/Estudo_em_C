/*--------17) Solicite uma palavra (mínimo 3 caracteres) e apresente se a mesma é um palíndromo---------*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char pal[20], aux[20];

    printf("digite uma palavra de no minimo 3 caracteres: ");
    gets(pal);

    while(strlen(pal)<3)
    {
        system("cls");

        printf("A palavra deve ter no minimo 3 caracteres\n\nPor favor tente novamente: ");
        gets(pal);
    }

//-------------INVERTE PALAVRA------------

    for(int i=0; i<strlen(pal); i++)
    {
        aux[i]=pal[strlen(pal)-i-1];
    }

    aux[strlen(pal)]='\0';

//------------CONFERE PALINDROMO-----------

    if(strcmp(aux, pal)==0)
    {
        printf("\n\nA palavra %s eh um PALINDROMO\n\n", aux);
    }
    else
    {
        printf("\n\nA palavra %s nao eh palindromo\n\n", pal);
    }

    system("pause");

    return 0;
}
