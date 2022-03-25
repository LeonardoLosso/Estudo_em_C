/*--------26) Construa um algoritmo que solicite uma frase e apresente a quantidade de espaços da mesma--------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char frase[100];
    int esp=0;

    printf("Digite uma frase: ");
    gets(frase);

    for(int i=0; i<strlen(frase); i++)
    {
        if (frase[i] == 32)
        {
            esp++;
        }
    }

    printf("\n\nTOTAL DE ESPACOS: %d\n\n", esp);

    system("pause");

    return 0;
}
