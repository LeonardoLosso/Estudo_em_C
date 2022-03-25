#include <stdio.h>
#include <stdlib.h>

int main()
{
//--------TAMANHO DA MATRIZ---------

    int m,n;

    printf("Quantas linhas das matrizes: ");
    scanf("%d", &m);

    printf("Quantas colunas: ");
    scanf("%d", &n);

//---------MATRIZ A--------------
    printf("\n-----------------------\n\nMATRIZ A:\n\n");

    int MA[m][n];

    for(int i=0; i<m; i++)  //linha matriz A
    {
        for(int j=0; j<n; j++)  //coluna matriz A
        {
            MA[i][j]=rand()%100;

            printf("%3d ", MA[i][j]);
        }
        printf("\n");
    }

//---------MATRIZ B--------------

    printf("\n-----------------------\n\nMATRIZ B:\n\n");

    int MB[m][n];

    for(int i=0; i<m; i++)  //linha matriz B
    {
        for(int j=0; j<n; j++)  //coluna matriz B
        {
            MB[i][j]=rand()%100;

            printf("%3d ", MB[i][j]);
        }
        printf("\n");
    }
//---------MATRIZ SOMA--------------
    printf("\n-----------------------\n\nMATRIZ SOMA:\n\n");

    int MSOMA[m][n];

    for(int i=0; i<m; i++)  //linha matriz B
    {
        for(int j=0; j<n; j++)  //coluna matriz B
        {
            MSOMA[i][j]=MA[i][j]+MB[i][j];

            printf("%3d ", MSOMA[i][j]);
        }
        printf("\n");
    }

    return 0;
}
