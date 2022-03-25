#include <stdio.h>
#include <stdlib.h>

int main()
{
//--------DEFINIR TAMANHO-----------

    int n;

    printf("Qual a ordem da matriz: ");
    scanf("%d", &n);

//--------------MATRIZ COMPLETA---------

    int matriz[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            matriz[i][j]=rand()%100;

            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n------------------------\n\nDIAGONAL SUPERIOR:\n\n");

//---------------DIAGONAL SUPERIOR----------------

    int soma=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i<j)
            {
                printf("%3d ", matriz[i][j]);

                soma=soma+matriz[i][j];
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }

//------------DIAGONAL INFERIOR---------------------

    printf("\n------------------------\n\nDIAGONAL INFERIOR:\n\n");

    int somaINF=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i>j)
            {
                printf("%3d ", matriz[i][j]);

                somaINF=somaINF+matriz[i][j];
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }

    printf("\n-----------------------------\n\nSOMA DIAGONAL SUPERIOR: %d\n\n", soma);
    printf("SOMA DIAGONAL INFERIOR: %d\n\n", somaINF);
    return 0;
}
