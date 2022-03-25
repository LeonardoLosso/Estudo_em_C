#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n, i;

    printf("Quantos numeros vai digitar? \n");
    scanf("%d", &n);

    int vet[n];

    for(i = 0; i<n; i++ ){
        printf("digite um numero: \n");
        scanf("%d", &vet[i]);
    }
    printf("\n");
    printf("\nNUMEROS DIGITADOS: \n");
    printf("\n");
    for(i = 0; i<n; i++ ){
        printf("%d\n", vet[i]);
    }
    return 0;
}
