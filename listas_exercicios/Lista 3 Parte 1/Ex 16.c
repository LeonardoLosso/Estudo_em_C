/*--------16) Solicite duas palavras e apresente qual é a maior e qual a menor palavra (segundo a ordem alfabética)---------*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char p1[20], p2[20];

    printf("Digite a primeira palavra: ");
    gets(p1);

    fflush(stdin);

    printf("Digite a segunda palavra: ");
    gets(p2);

//---------COMPARAÇÃO DE ORDEM ALFABETICA-------------

    if(strcmp(p1,p2)>0)
    {
        printf("\n\nA ordem alfabetica fica:\n%s\n%s\n\n", p2,p1);
    }
    else if(strcmp(p1,p2)==0)
    {
        printf("\n\nAs palavras sao iguais\n\n");
    }
    else
    {
        printf("\n\nA ordem alfabetica fica: \n%s\n%s\n\n", p1,p2);
    }

    system("pause");

    return 0;
}
