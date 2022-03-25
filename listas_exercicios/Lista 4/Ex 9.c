//----9) Gere randomicamente um vetor contendo 20 elementos do tipo inteiro (não repetidos) e apresente ao usuário
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int vet[20], i=0, igual;

    srand(time(NULL));

    do
    {
        vet[i]=rand()%20; //recebe aleatorio

        igual=0;    //recebe falso a igualdade

        for(int j=0; j<i; j++)
        {
            if(vet[i]==vet[j])
            {
                igual=1;  //existe um igual
            }
        }
        if(igual==0) //se for igual não recebe um incremento
        {
            i++;
        }
    }while(i<20);

    for(int i=0; i<20; i++)
    {
        printf("%d ", vet[i]);
    }

    printf("\n\n");

    return 0;
}
