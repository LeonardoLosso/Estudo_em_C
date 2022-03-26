#include <stdio.h>
#include <stdlib.h>

int main()
{
//------------ORDEM DA MATRIZ--------

    int n;

    printf("Qual vai ser a ordem da matriz? ");
    scanf("%d", &n);

//-----------GERADOR DE MATRIZ-----------

    double matriz[n][n], positivos=0;

    for(int i=0; i<n; i++)  //linha
    {
        for(int j=0; j<n; j++)  //coluna
        {
            matriz[i][j]=rand()%10-3;

            printf("%4.1lf ", matriz[i][j]);

            //soma de positivos------------------
            if(matriz[i][j]>0)
            {
                positivos=positivos+matriz[i][j];
            }
            //-----------------------------------
        }
        printf("\n");
    }

    printf("\n-------------------\n\n");

//----------SOMA DOS POSITIVOS-------------------

    printf("SOMA POSITIVOS: %.1lf \n\n", positivos);

//----------ESCOLHER LINHA E COLUNA--------------

    int linha, coluna;

    printf("Escolha uma linha: ");
    scanf("%d", &linha);

    printf("Escolha uma coluna: ");
    scanf("%d", &coluna);

    printf("\n");

    for(int i=0; i<n; i++)  //linha
    {
        for(int j=0; j<n; j++)  //coluna
        {
            if(i==linha-1 || j==coluna-1)
            {
                printf("%4.1lf ", matriz[i][j]);
            }
            else
            {
                printf(" --- ");
            }
        }
        printf("\n");
    }

    printf("\n-----------------------\n\n");

//-------------DIAGONAL PRINCIPAL-------------

    for(int i=0; i<n; i++)  //linha
    {
        for(int j=0; j<n; j++)  //coluna
        {
            if(i==j)
            {
                printf("%4.1lf ", matriz[i][j]);
            }
            else
            {
                printf(" --- ");
            }
        }
        printf("\n");
    }

    printf("\n-----------------------------\n\n");

//-----------------MATRIZ AO QUADRADO--------------

    for(int i=0; i<n; i++)  //linha
    {
        for(int j=0; j<n; j++)  //coluna
        {
            if (matriz[i][j]<0)
            {
                matriz[i][j]=(matriz[i][j]*matriz[i][j]);

                printf("%4.1lf ", matriz[i][j]);
            }
            else
            {
                printf("%4.1lf ", matriz[i][j]);
            }
        }
        printf("\n");
    }

    printf("\n\n");

    return 0;
}
