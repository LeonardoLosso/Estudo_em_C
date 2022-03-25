//2) Ler um vetor com 21 elementos numéricos, e apresentar finalmente ao usuário os elementos em ordem inversa ao da entrada
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[21];

    printf("Insira 21 numeros a seguir: \n\n");

    for(int i=0; i<21; i++)
    {
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &num[i]);
    }

    printf("\n------------------------\n");

    for(int i=20; i>=0; i--)
    {
        printf("%d ", num[i]);
    }

    printf("\n\n");

    return 0;
}
