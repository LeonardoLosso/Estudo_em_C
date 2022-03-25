/*----15) Solicite ao usuário dois vetores de 7 números e em seguida calcule a soma dos vetores,
elemento a elemento (de mesmo índice), armazenando em um terceiro vetor de índice equivalente----*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int v1[7], v2[7], v3[7];

    srand(time(NULL));

    for(int i=0; i<7; i++)
    {
        v1[i]=rand()%100;

        v2[i]=rand()%100;

        v3[i]=v1[i]+v2[i];
    }

    for(int i=0; i<7; i++)
    {
        printf("%4.d    +   %4.d    =   %4.d\n", v1[i], v2[i], v3[i]);
    }


    return 0;
}
