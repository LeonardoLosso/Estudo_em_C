/* -------18) Solicite 4 nomes ao usuário e apresente o menor nome da lista (ordem alfabética)-------*/
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char nomes[4][30];
    int tam;

//-----------INSERE NOMES----------

    for(int i=0; i<4; i++)
    {
        printf("Digite o %d.o nome: ", i+1);
        fflush(stdin);
        gets(nomes[i]);
    }

//-----------TRANSFORMA MINUSC--------

    for(int i=0; i<4; i++)
    {
        tam=strlen(nomes[i]);

        for(int j=0; j<tam; j++)
        {
            nomes[i][j]=tolower(nomes[i][j]);
        }

        nomes[i][tam] = '\0';
    }

//----------ORDENA EM ALFABETICO----------

    char aux[30];

    for(int i=0; i<4; i++)
    {
        for(int j=i+1; j<4; j++)
        {
            if(strcmp(nomes[i], nomes[j]) == 1)     //se nome numa posição aterior for maior(1) entao ele troca com o posterior J
            {
                strcpy(aux, nomes[j]);      //auxiliar recebe o menor
                strcpy(nomes[j], nomes[i]); //o nome posterior recebe o meior
                strcpy(nomes[i], aux);  //a posição anterior recebe o menor
            }
        }
    }

//---------EXIBE A ORDEM ALFABETICA----------

    printf("\n\nORDEM ALFABETICA: \n\n");

    for(int i=0; i<4; i++)
    {
        printf("%s\n", nomes[i]);
    }

    printf("\n----------------------------\n\n");

    system("pause");

    return 0;
}
