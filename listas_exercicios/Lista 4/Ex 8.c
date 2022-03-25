/*-----8) Gere randomicamente um vetor contendo 14 elementos do tipo inteiro e apresente ao usuário-----*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int vet[14];

    srand(time(NULL));

    for(int i=0; i<14; i++)
    {
        vet[i]=rand()%100;

        printf("%d ", vet[i]);
    }

    printf("\n\n");


    return 0;
}
