#include <stdio.h>
#include <stdlib.h>

int main()
{
//----------DIMENÇÃO DA MATRIZ---------

    int m, n;

    while((m>10 || m<1) && (n>10 || n<1))
    {
        system("cls");

        printf("Quantidade de linhas: ");
        scanf("%d", &m);

        printf("Quantidade de colunas: ");
        scanf("%d", &n);
    }

    printf("\n----------------------\n\n");

//---------VALORES DA MATRIZ-----------

    int matriz[m][n];

    for(int i=0; i<m; i++)  //Linhas
    {
        for(int j=0; j<n; j++)  //Colunas
        {
            matriz[i][j]=rand()%100-32; //Atribui os valores

            printf("%3d ", matriz[i][j]);   //printa a matriz
        }
        printf("\n");   //proxima linha
    }

    printf("\n--------------------\n\n");

//---------MATRIZ DOS NEGATIVOS-----------

    for(int i=0; i<m; i++)  //Linhas
    {
        for(int j=0; j<n; j++)  //Colunas
        {
            if(matriz[i][j]<0)  //Testa negativos
            {
                printf("%3d ", matriz[i][j]);
            }
            else    //Apaga os valores positivo
            {
                printf("    ");
            }
        }
        printf("\n");   //proxima linha
    }

    printf("\n\n");


    return 0;
}
