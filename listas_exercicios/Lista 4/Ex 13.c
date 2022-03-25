/*-------13) Leia um vetor de 10 elementos (todos distintos) e em seguida encontre e apresente a posição do elemento
N (informado pelo usuário) no vetor. Caso não seja encontrado, informe ao usuário sobre a inexistência do mesmo-----*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int vet[10], x=0, igual;

    srand(time(NULL));

    do
    {
        vet[x]=rand()%10;

        igual=0;

        for(int i=0; i<x; i++)
        {
            if(vet[x]==vet[i])
            {
                igual=1;
            }
        }
        if(igual==0)
        {
            printf("%d ", vet[x]);
            x++;
        }
    }while(x<10);

    printf("\n\npesquise um valor: ");
    scanf("%d", &igual);

    int v=0;

    for(int i=0; i<10; i++)
    {
        if(vet[i]==igual)
        {
            printf("\nPOSICAO: %d\n\n", i+1);
            v=1;
        }
        else if( v==0 && i==9)
        {
            printf("\nVALOR NAO ENCONTRADO\n\n");
        }
    }

    return 0;
}
