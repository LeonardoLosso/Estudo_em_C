/*---------28)Solicite uma frase (mínimo 5 e máximo 50 caracteres) e imagine que possam haver caracteres em
branco tanto no início quanto no fim da frase. Caso haja, elimine-os (espaços das extremidades);----------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char frase[100], ff[100];
    int c=0, tam, j=0, i=0;

    printf("Digite uma frase entre 5 e 50 caracteres: ");
    gets(frase);

    while(strlen(frase)<5 || strlen(frase)>50)
    {
        printf("a frase deve ter entre 5 e 50\n\nPor favor tente novamente: ");
        gets(frase);
    }

    tam=strlen(frase);
    i=tam-1;

    while(frase[c]==32)
    {
        c++;
    }
    while(frase[i]==32)
    {
        i--;
    }

    for(c; c<i+1; c++)
    {
        ff[j]=toupper(frase[c]);
        j++;
    }

    ff[j]='\0';

    printf("\n\n%s<-essa eh a frase corrigida\n\n", ff);

    system("pause");

    return 0;
}
