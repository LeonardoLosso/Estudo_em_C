#include <stdio.h>
#include <stdlib.h>

int main()
{
//----------ORDEM DA MATRIZ---------

    int n;

    while(n<1 || n>10)
    {
        system ("cls");

        printf("Qual a ordem da matriz? ");
        scanf("%d", &n);
    }

    printf("\n--------------------\n\n");

//-----------IMPRIME MATRIZ------------

    int matriz[n][n], maior[n], m;

    for(int i=0; i<n; i++)  //linhas
    {
        maior[i]=0; //zera a posição do maior
        m=0;    //zera o menor numero na linha

        for(int j=0; j<n; j++)  //colunas
        {
            matriz[i][j]=rand()%100;    //atribui valor a i j

            printf("%3d ", matriz[i][j]);   //escreve i j

            if(matriz[i][j]>m)   //acha o maior da linha
            {
                m=matriz[i][j];
                maior[i]=j;
            }
        }

        printf("\n");   //proxima linha
    }
    printf("\n--------------\n\n");

//----------MAIOR DA LINHA----------

    printf("MAIOR DE CADA LINHA: \n");

    for(int i=0; i<n; i++)  //linhas
    {
        for(int j=0; j<n; j++)  //colunas
        {
            if(j==maior[i]) //escreve o maior
            {
                printf("%3d ", matriz[i][j]);
            }
            else    //apaga os menores
            {
                printf(" -- ");
            }
        }

        printf("\n");   //proxima linha
    }

    printf("\n\n");

    return 0;
}
