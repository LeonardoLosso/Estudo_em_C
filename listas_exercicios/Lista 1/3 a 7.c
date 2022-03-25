#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Digite um numero: ");

    scanf("%d", &x);

    printf("\nO dobro de %d eh: %d\nO triplo de %d eh: %d\nA metade de %d eh: %.1lf\n", x, x*2, x, x*3, x, x/2.0);
    printf("25%% de %d eh: %.2lf\n60%% de %d eh: %.2lf\n\n", x, x*0.25, x, x*0.6);

    system ("pause");

    return 0;
}
