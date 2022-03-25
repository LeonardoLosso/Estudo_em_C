/*---------32) Solicite duas palavras e apresente a quantidade total de vogais das mesmas----------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char pal[50], vogais[]="AEIOUaeiou";
    int vog=0;

    printf("Insira uma ou duas palavras: ");
    gets(pal);

    for(int i=0; i<strlen(pal); i++)
    {
        for (int j=0; j<strlen(vogais); j++)
        {
            if(pal[i] == vogais[j])
            {
                vog++;
            }
        }
    }

    printf("\n\nQUANTIDADE DE VOGAIS: %d\n\n", vog);

    system("pause");

    return 0;
}
