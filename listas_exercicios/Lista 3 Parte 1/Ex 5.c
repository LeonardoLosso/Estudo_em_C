//-----5) Solicitar uma palavra e apresentá-la na vertical (cada caractere será uma linha)------
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

    printf("\n\n");

    for(int i=0; i!=x; i++)
    {
        printf("%c\n", pal[i]);
    }

    printf("\n\n");

    system("pause");


    return 0;
}
