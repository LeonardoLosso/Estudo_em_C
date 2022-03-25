//-------4) Solicite uma palavra com no mínimo 5 caracteres e apresente apenas os 3 últimos-------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char pal[20];
    int x;

    printf("digite uma palavra de no minimo 5 caracteres: ");
    gets(pal);

    x=strlen(pal);

    while(x<5)
    {
        printf("\nprecisa ter pelo menos 5 letras, tente novamente!!\n\n");

        printf("digite uma palavra de no minimo 5 caracteres: ");
        gets(pal);

        x=strlen(pal);
    }
    printf("\n\n");

    for(int i=x-3; i!=x; i++)
    {
        printf("%c", pal[i]);
    }

    printf("\n\n");

    system("pause");


    return 0;
}
