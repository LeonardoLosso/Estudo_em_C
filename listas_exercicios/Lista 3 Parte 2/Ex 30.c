/*---------30) Com base ao exercício anterior, apresente o alfabeto (minúsculo) em ordem decrescente.----------*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=122; i>=97; i--)
    {
        printf("%c ", i);
    }

    printf("\n\n");

    system("pause");

    return 0;
}
