#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//fputc (put character)
//cada chamada dessa função grava um caractere no arquivo

int main()
{
    FILE *pont_arq;
    char frase[50];

    pont_arq = fopen("frase.txt", "w");

    if (pont_arq==NULL)
    {
        printf("Erro na criação do arquivo!!\n");

        return 1;
    }

    printf("digite a frase: ");
    gets(frase);

    for(int i=0; i<strlen(frase); i++)
    {
        fputc(frase[i], pont_arq);
    }

    fclose(pont_arq);


    return 0;
}
