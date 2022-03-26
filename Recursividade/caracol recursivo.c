#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int c=1;

void caracol(int mat[5][5], int inicio, int fim)
{

    for(int i=inicio; i<=fim; i++) //percorre a linha fixa no sentido X+
    {
    mat[inicio][i]=c++;
    }
    for(int i=inicio+1; i<=fim; i++)//percorre a coluna fixa no sentido Y-
    {
        mat[i][fim]=c++;
    }
    for(int i=fim-1; i>=inicio; i--)//percorre com linha fixa no sentido X-
    {
        mat[fim][i]=c++;
    }
    for(int i=fim-1; i>=inicio+1; i--)//percorre coluna fixa no sentido Y+
    {
    mat[i][inicio]=c++;
    }

    fim=fim-1;
    inicio=inicio+1;
    while (c!=26)
    {
        caracol(mat, inicio, fim);
    }
}


int main()
{
    int matriz[5][5];
    int num=5;
    int ini=0;
    int f=num-1;

    caracol(matriz, ini, f);

    for(int i=0; i<num; i++)
    {
        for(int j=0; j<num; j++)
        {
            printf("%4.d", matriz[i][j]);
        }
        printf("\n");
    }
}
