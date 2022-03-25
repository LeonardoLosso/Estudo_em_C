//---------8) Solicitar uma palavra e apresentá-la toda em MINUSCULA---------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char dipsy[20], lala[30];

    printf("digite seu nome completo: ");
    gets(dipsy);

//------------TRANSFORMA EM MAIUSCULO------------

    for(int i=0; i<=strlen(dipsy); i++)
    {
        lala[i]=toupper(dipsy[i]);
    }

    printf("\nORIGINAL: %s", dipsy);

    printf("\nMAIUSCULO: %s", lala);

//------------TRANSFORMA EM MINUSCULO------------

    for(int i=0; i<=strlen(lala); i++)
    {
        lala[i]=tolower(lala[i]);
    }

     printf("\nMINUSCULO: %s", lala);

//------------FORMATAÇÃO DE NOME-------------

    lala[0]=toupper(lala[0]);

    for(int i=1; i<=strlen(lala); i++)
    {
        if(lala[i] == ' ')
        {
            lala[i+1]=toupper(lala[i+1]);
        }
    }

    printf("\nFORMATADO: %s", lala);

//-------------------------------------------

    printf("\n");

    system ("pause");

    return 0;
}
