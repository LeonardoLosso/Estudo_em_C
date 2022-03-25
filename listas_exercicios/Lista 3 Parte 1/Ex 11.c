//-------11) Solicitar uma palavra (4 a 15 caracteres) e apresentar o código ASCII de cada caractere;----------
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char pal[15];

    printf("Digite uma palavra entre 4 e 14 letras: ");
    gets(pal);

    while(strlen(pal)<4 || strlen(pal)>14)
    {
        system("cls");

        printf("A palavra deve ter entre 4 e 14 letras\n\nPor favor tente novamente: ");
        gets(pal);
    }

    printf("\n\nASCII: ");

    for(int i=0; i<strlen(pal); i++)
    {
        printf("%d ", pal[i]);
    }

    printf("\n\n");

    system("pause");

    return 0;
}
