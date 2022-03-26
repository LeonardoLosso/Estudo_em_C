#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y, z, soma;

    printf("Digite um limite ");
    scanf("%d", &x);

    soma=0;
    for(y=1;y<=x;y++){
        printf("digite um numero ");
        scanf("%d", &z);
        soma=soma+z;
    }
    printf("SOMA = %d", soma);
}
