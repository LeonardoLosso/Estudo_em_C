/*-------12) Construa um programa em linguagem C que solicite um vetor de 6 elementos inteiros maiores ou iguais a zero (V1) e em
seguida preencha mais dois vetores (V2 e V3) onde V2 armazenará os elementos ímpares de V1 e V3 os elementos pares também de V1--*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int v1[6], par=0, imp=0;

    srand(time(NULL));

    for(int i=0; i<6; i++)
    {
        v1[i]=rand()%10;

        if(v1[i]%2==0)
        {
            par++;
        }
        else
        {
            imp++;
        }
    }

    int v2[imp], v3[par], j=0, k=0;

    for(int i=0; i<6; i++)
    {
        if(v1[i]%2==0)
        {
            v3[j]=v1[i];

            j++;
        }
        else
        {
            v2[k]=v1[i];

            k++;
        }
    }

    printf("V1: ");

    for(int i=0; i<6; i++)
    {
        printf("%d ", v1[i]);
    }

    printf("\n\nIMPARES: ");

    for(int i=0; i<imp; i++)
    {
        printf("%d ", v2[i]);
    }

    printf("\n\nPARES: ");

    for(int i=0; i<par; i++)
    {
        printf("%d ", v3[i]);
    }

    return 0;
}
