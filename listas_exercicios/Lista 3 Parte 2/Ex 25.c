/*--------25) Faça o mesmo que o exercício anterior, entretanto apresentando apenas as consoantes---------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char vogais[]="AEIOUaeiou";
    int vog=0;

    printf("CONSOANTES E SEUS CODIGOS\n-------------------------\n\n");

//------------------CONSOANTES MAIUSCULAS------------------

    for(int i=65; i<=90; i++)
    {
        vog=0;

        for(int j=0; j<strlen(vogais); j++)
        {
            if(i==vogais[j])
            {
                vog=1;
            }
        }
        if(vog==0)
        {
            printf("%c = %d\n", i, i);
        }
    }

//---------------CONSOANTES MINUSCULAS--------------

    printf("------\n");

    for(int i=97; i<123; i++)
    {
        vog=0;

        for(int j=0; j<strlen(vogais); j++)
        {
            if(i==vogais[j])
            {
                vog=1;
            }
        }
        if(vog==0)
        {
            printf("%c = %d\n", i, i);
        }
    }

    printf("\n");

    system("pause");

    return 0;
}
