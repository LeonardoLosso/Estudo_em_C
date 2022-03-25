//------3) Solicitar uma palavra, copiar e apresentar apenas 3 caracteres a partir do segundo caractere-------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char plau[20], x[20];
    int i;

    printf("digite uma palavra: ");
    gets(plau);

    for(i=0; i<3; i++)
    {
        x[i]=plau[i+1];
    }

    x[i]='\0';


    printf("%s \n\n", x);

    system("pause");

    return 0;
}
