//-------6) Solicitar duas palavras, concatena-las em uma terceira, apresentando-a no final---------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char p1[20], p2[20], p3[40];

    printf("Digite seu nome: ");
    gets(p1);

    fflush(stdin);  //limpa entrada

    printf("Digite seu sobrenome: ");
    gets(p2);

//----------------CONCATENAÇÃO-------------

    strcat(strcpy(p3, p1), p2);

//------------------------------------------

    printf("\n\nNOME COMPLETO: %s \n\n", p3);

    system ("pause");

    return 0;
}
