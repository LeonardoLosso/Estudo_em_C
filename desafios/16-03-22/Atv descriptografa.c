#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char pal[10];

    printf ("Digite uma palavra entre 4 e 8 caracteres para descriptografar: ");
    gets(pal);

    while(strlen(pal)>8 || strlen(pal)<4)
    {
        system("cls");

        printf("A palavra deve ter entre 4 e 8 letras\n\nPor favor tente novamente: ");
        gets(pal);
    }

    for(int i=strlen(pal)-1; i>=0; i--)
    {
        pal[i]=pal[i]-12-i;

        if(pal[i]>64 && pal[i]<91)
        {
            pal[i]=tolower(pal[i]);
        }
        else
        {
            pal[i]=toupper(pal[i]);
        }
    }

    printf("\n\n%s\n\n", pal);

    system("pause");

    return 0;
}
