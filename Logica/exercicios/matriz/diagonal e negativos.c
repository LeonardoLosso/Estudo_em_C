#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n;
//---------ORDEM DA MATRIZ------------
    printf("Qual a ordem da matriz Aij? ");
    scanf("%d", &n);

    while(n>10 || n<1)
    {
        system ("cls");

        printf("A matriz deve ser no maximo de ordem 10\n");

        printf("Qual a ordem da matriz Aij? ");
        scanf("%d", &n);
    }
    printf("\n\n");
//-----------CONSTRUÇÃO DA MATRIZ------------
    int matriz[n][n], neg=0;

    for(int i=0; i<n; i++)    //linha
    {
        for(int j=0; j<n; j++)    //coluna
        {
            matriz[i][j]=rand()%100-20;

            if(matriz[i][j]<0)  //incremento de numeros negativos
            {
                neg++;
            }

            printf("%3d ", matriz[i][j]);   //elemento em i,j
        }
        printf("\n");
    }
//------------DIAGONAL PRINCIPAL-----------
    printf("\n\nDIAGONAL PRINCIPAL:\n");

    for(int i=0; i<n; i++)    //linha
    {
        for(int j=0; j<n; j++)    //coluna
        {
            if (i==j)   //testa diagonal principal
            {
                printf("%3d ", matriz[i][j]);   //elemento em i,j
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }

    printf("\nQUANTIDADE DE NEGATIVOS: %d\n\n", neg);
//--------------PESQUISA-----------
    int a, b;

    printf("Quer checar qual posicao da matriz? digite i e j\n");
    scanf("%d %d", &a, &b);

    printf("\n            MATRIZ EM %d, %d   :  ---%d---\n\n", a, b, matriz[a][b]);

    return 0;
}
