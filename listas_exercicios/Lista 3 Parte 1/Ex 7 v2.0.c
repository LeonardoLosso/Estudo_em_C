//---------7) Solicitar uma palavra e apresentá-la toda em MAIUSCULA---------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char pal[20];

    printf("digite uma palavra: ");
    gets(pal);

    for(int i=0; i<strlen(pal); i++)
    {
        pal[i]=toupper(pal[i]);
    }

    printf("\n\n%s\n\n", pal);

    system ("pause");

    return 0;
}
