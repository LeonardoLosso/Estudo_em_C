//-------10) Solicitar uma palavra (5 a 10 caracteres) e apresentar cada caractere alternando em MAIUSCULO e MINUSCULO cada um dos caracteres-------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char pal[10];

    printf("Digite uma palavra de 5 a 10 letras: ");
    gets(pal);

    while(strlen(pal)<5 || strlen(pal)>10)
    {
        system("cls");

        printf("a palavra precisa ter entre 5 e 10 letras\npor favor tente novamente: ");
        gets(pal);
    }

    for(int i=0; i<strlen(pal); i++)
    {
        if(i%2==0)
        {
            pal[i]=toupper(pal[i]);
        }
        else
        {
            pal[i]=tolower(pal[i]);
        }
    }

    printf("\n\n%s\n\n", pal);

    system("pause");

    return 0;
}
