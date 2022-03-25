#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int idade[2];
    char nome[2][20];

    for(int i=0; i<2; i++)
    {
        printf("Nome da %d pessoa:", i+1);
        gets(nome[i]);
        printf("Idade de %s: ", nome[i]);
        scanf("%d", &idade[i]);
        printf("\n-----------------\n");
        fflush(stdin);
    }
    if(idade[0]>idade[1])
    {
        printf("\n\n%s eh mais velho e tem %d anos\n\n", nome[0], idade[0]);
    }
    else if(idade[0]==idade[1])
    {
        printf("\n\n%s e %s tem a mesma idade\n\n", nome[0], nome[1]);
    }
    else
    {
        printf("\n\n%s eh mais velho e tem %d anos\n\n", nome[1], idade[1]);
    }

    system("pause");

    return 0;
}
