/*--17) Construa um programa em linguagem C que gere automaticamente um vetor (V1) com 5 elementos inteiros com os valores entre 65 a 90, e
posteriormente monte um segundo vetor (V2) contendo a informação “PAR” ou “IMPAR” de acordo com o valor de V1 de mesmo índice----*/
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int vet[5];
    char pal[5][10];

    srand(time(NULL));

    for(int i=0; i<5; i++)
    {
        vet[i]=(rand()%26+65);

        if(vet[i]%2==0)
        {
            strcpy(pal[i], "PAR");
        }
        else
        {
            strcpy(pal[i], "IMPAR");
        }
        printf("%d  =  %s\n", vet[i], pal[i]);
    }

    return 0;
}
