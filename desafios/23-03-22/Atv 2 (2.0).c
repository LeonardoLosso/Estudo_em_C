#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int verifica(int valores[10][10], int valor)
{
    for(int q=0; q<10; q++)
    {
        for(int k=0; k<10; k++)
        {
            if(valores[q][k]==valor)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int matriz[10][10], aux;

    srand(time(NULL));

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            aux=rand()%100+1;

            while(verifica(matriz, aux)==1)
            {
                aux=rand()%100+1;
            }

            matriz[i][j]=aux;
        }
    }

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            printf("%4.d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
