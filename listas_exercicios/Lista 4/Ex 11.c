/*---*11) Construa um programa em linguagem C que solicite uma matriz 5x4 de valores inteiros (M1)
e posteriormente armazene em uma segunda matriz (M2) em ordem contrária da entrada de M1-----*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int mat[5][4];

    srand(time(NULL));

    printf("MATRIZ:\n\n");

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<4; j++)
        {
            mat[i][j]=rand()%10;
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n--------------------------\nMATRIZ AO CONTRARIO:\n\n");

    for(int i=4; i>=0; i--)
    {
        for(int j=3; j>=0; j--)
        {
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n--------------------------\nMATRIZ TRANSPOSTA:\n\n");

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("%d  ", mat[j][i]);
        }
        printf("\n");
    }
}
