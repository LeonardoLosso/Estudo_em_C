//-----10) Construa um programa em linguagem C que solicite uma matriz 5x5 de valores inteiros (M1) e apresente ao usuário
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int mat[5][5];

    srand(time(NULL));

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            mat[i][j]=rand()%10;
        }
    }

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }


    return 0;
}
