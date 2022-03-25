//----1) Construir programa em linguagem C que Leia um vetor de 10 elementos e posteriormente apresente a soma dos mesmos
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10], soma=0;

    printf("Insira 10 numeros a seguir: \n--------------------------\n\n");

    for(int i=0; i<10; i++)
    {
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &num[i]);

        soma+=num[i];
    }

    printf("\n\nSOMA: %d\n\n", soma);


    return 0;
}
