/*---------29) Construa um algoritmo que apresente todo o alfabeto maiúsculo
em uma única linha, utilizando a tabela ASCII e laço de repetição----------*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=65; i<=90; i++)
    {
        printf("%c ", i);
    }

    printf("\n\n");

    system("pause");

    return 0;
}
