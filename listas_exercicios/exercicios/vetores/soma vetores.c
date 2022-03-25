#include <stdio.h>

int main()
{
    int soma, n;

    printf("Quantos valores terao os vetores? ");
    scanf("%d", &n);

    int A[n], B[n], C[n];
    //-----VETOR A-------
    printf("\n----------------------------\n");
    printf("Digite os valores do vetor A: \n");
    for(int i=0; i<n;i++)
    {
        scanf("%d", &A[i]);
    }
    //-----VETOR B-------
    printf("\n----------------------------\n");
    printf("Digite os valores do vetor B: \n");
    for(int i=0; i<n;i++)
    {
        scanf("%d", &B[i]);
    }
    //-----VETOR C-------
    printf("\n----------------------------\n");
    printf("VETOR SOMA: \n");
    for(int i=0; i<n;i++)
    {
        C[i]=A[i]+B[i];
        printf("%d + %d = %d\n", A[i], B[i], C[i]);
    }

    return 0;
}
