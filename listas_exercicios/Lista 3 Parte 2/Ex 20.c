/*------20) Solicite um nome e apresente a quantidade de vogais (apenas maiúsculas) da mesma-------*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char pal[30],vogais[]="AEIOU";
    int qtd=0;

    printf("Digite uma palavra: ");
    gets(pal);

    printf("\n\nAPENAS VOGAIS MAIUSCULAS\n------------------------\n\nVOGAIS: ");

    for(int i=0; i<strlen(pal); i++)
    {
        for(int j=0; j<strlen(vogais); j++)
        {
            if(pal[i]==vogais[j])
            {
                printf("%c ", pal[i]);
                qtd++;
            }
        }
    }

    printf("\nQuantidade: %d\n\n", qtd);

    system("pause");

    return 0;
}
