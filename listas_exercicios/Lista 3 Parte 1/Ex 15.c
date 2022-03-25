/*-------15) Solicite duas palavras e apresente qual é a maior e qual
é a menor palavra (segundo a quantidade de caracteres)----------*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char p1[20], p2[20];

    printf("Digite uma palavra: ");
    gets(p1);

    fflush(stdin);

    printf("Digite uma palavra: ");
    gets(p2);

//----------COMPARAÇÃO DE TAMANHO----------

    if(strlen(p1)>strlen(p2))
    {
        printf("\n\nA palavra: %s eh maior em %d letras\n\n", p1, strlen(p1)-strlen(p2));
    }
    else if(strlen(p1)==strlen(p2))
    {
        printf("\n\nAs palavras tem o mesmo tamanho\n\n");
    }
    else
    {
        printf("\n\nA palavra: %s eh maior em %d letras\n\n", p2, strlen(p2)-strlen(p1));
    }

    system("pause");

    return 0;
}
