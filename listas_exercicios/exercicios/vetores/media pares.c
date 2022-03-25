#include <stdio.h>

int main()
{
    int par=0, s=0, n;
    double m;

    printf("Qual o tamanho do vetor? ");
    scanf("%d", &n);

    int vet[n];

    for(int i=0; i<n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
        if(vet[i]%2==0)
        {
            par++;
            s=s+vet[i];
        }
    }

    if(s==0)
    {
        printf("\nNAO EXISTEM PARES ");
    }
    else
    {
        m=(double)s/par;
        printf("\nMEDIA DE PARES: %.1lf", m);
    }

    return 0;
}
