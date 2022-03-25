#include <stdio.h>

int main()
{
    int n;
    double tot, m;

    printf("Quantos numeros vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    for(int i=0; i<n; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    printf("\n-------------------------\n");
    printf("VALORES: ");
    tot=0;

    for(int i=0; i<n; i++)
    {
        printf("%.2lf  ", vet[i]);
        tot=tot+vet[i];
    }
    printf("\nSOMA: %.2lf", tot);
    m=tot/n;
    printf("\nMEDIA: %.2lf", m);

    return 0;
}
