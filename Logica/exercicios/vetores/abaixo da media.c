#include <stdio.h>

int main()
{
    int n;
    double m, s;
    s=0;

    printf("Qual o tamanho do vetor? ");
    scanf("%d", &n);

    double vet[n];

    for (int i=0; i<n; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
        s=s+vet[i];
    }
    m=s/n;
    printf("\nMEDIA DO VETOR: %.3lf", m);
    printf("\nELEMENTOS ABAIXO DA MEDIA: \n");

    for(int i=0; i<n; i++)
    {
        if(vet[i]<m)
        {
            printf("%.1lf\n", vet[i]);
        }
    }

    return 0;
}
