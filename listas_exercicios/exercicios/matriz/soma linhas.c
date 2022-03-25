#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;

//-----ORDEM DA MATRIZ------

    while ((m>10 || m<1)&& (n>10 || n<1))
    {
        system("cls");
        printf("DE O TAMANHO DA MATRIZ: \n\n");

        printf("Numero de linhas: ");
        scanf("%d", &m);

        printf("Numero de colunas: ");
        scanf("%d", &n);
    }

//------VALORES DA MATRIZ-----------

    int matriz[m][n], soma[m];

    for(int i=0; i<m; i++)  //linhas
    {
        soma[i]=0;  //zera a soma da linha pra n ter lixo de memoria

        for(int j=0; j<n; j++)  //colunas
        {
            matriz[i][j]=rand()%100; //atribui valor a matriz

            printf("%3d ", matriz[i][j]);

            soma[i]=soma[i]+(matriz[i][j]);    //soma os elementos das colunas na linha i
        }
        printf("\n");    //pula proxima linha
    }
    printf("\n\n----------------------\nSOMA DAS LINHAS:\n\n");

//------EXIBIÇÃO DAS SOMAS-------

    for(int i=0; i<m; i++)
    {
        printf("soma da %d.a linha: %d\n", i+1, soma[i]);
    }

    printf("\n\n");


    return 0;
}
