//4) Construir um programa em linguagem C que Leia um vetor de 15 elementos, iniciando a partir do último elemento (15º)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[15];

    for(int i=14; i>=0; i--)
    {
        printf("digite o %d valor: ", i+1);
        scanf("%d", &num[i]);
    }




    return 0;
}
