#include <stdio.h>

int main()
{
    int n, s;
    s=0;

    printf("Quantos numeros vai digitar? ");
    scanf("%d", &n);

    int vet[n];

    for(int i=0; i<n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }
    printf("PARES:\n");

    for(int i=0; i<n; i++)
    {
        if(vet[i]%2==0)
        {
            printf("%d  ",vet[i]);
            s++;
        }
    }
    printf("\nTOTAL DE PARES: %d ", s);

    return 0;
}
