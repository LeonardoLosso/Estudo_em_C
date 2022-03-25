/*--14) Construa um programa em linguagem C que solicite 10 nomes e os armazene em um vetor, e
posteriormente apresente o Maior nome, bem como sua respectiva posição no vetor;-----*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char nome[10][30], m[30], alfa[30];
    int maior=0;

    for(int i=0; i<10; i++)
    {
        printf("digite o %d nome: ", i+1);
        gets(nome[i]);

        fflush(stdin);

        if(strlen(nome[i])>strlen(m))
        {
            strcpy(m, nome[i]);

            maior=strlen(nome[i]);
        }

        if(strcmp(nome[i], alfa)>0)
        {
            strcpy(alfa, nome[i]);
        }
    }

    printf("\n\nMAIOR EM TAMANHO: %s com %d letras\n", m, maior);
    printf("MAIOR EM ORDEM ALFABETICA: %s\n\n", alfa);

    return 0;
}
