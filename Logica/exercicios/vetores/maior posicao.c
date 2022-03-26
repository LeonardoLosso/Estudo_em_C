#include <stdio.h>

int main()
{
    int n;
    double s;

    printf("Quantos numeros vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    for(int i=0; i<n; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
        if (vet[i]>s)
        {
            s=vet[i];
        }
    }
    printf("MAIOR VALOR: %.2lf", s);

    for(int i=0; i<n; i++)
    {
        if(s==vet[i])
        {
            printf("\nPOSICAO: %d", i);
        }
    }

    return 0;
}
