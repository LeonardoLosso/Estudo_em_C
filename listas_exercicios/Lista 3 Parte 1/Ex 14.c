/*-------14) Solicite uma string e apresente a frase contendo apenas o primeiro e o último
caractere em maiúsculo, os demais deverão ser apresentados em minúsculo----------*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char pal[30];

    printf("Digite uma palavra: ");
    gets(pal);

    pal[0]=toupper(pal[0]);

    for(int i=1; i<strlen(pal); i++)
    {
        if(i==strlen(pal)-1)
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
